#include <stdio.h>
#include "header.h"

PITICI citire_coordonate(int n)
{
	PITICI p;
	p.nr = n;
	int i;

	for(i=0;i<n;i++)
	{
		scanf("%lf %lf", &p.casa[i].x, &p.casa[i].y );
	}
	return p;
}

void coef_dreapta(PUNCT A, PUNCT B,double *a,double *b,double *c)
{

	*a = A.y - B.y;
	*b = B.x - A.x;
	*c = A.x * B.y - B.x * A.y;

}

int validation(PITICI red, PITICI blue, PUNCT A, PUNCT B)
{
	double a,b,c;
	int VALID = 1; 
	coef_dreapta(A, B, &a, &b, &c);

	double v0 = a*red.casa[0].x + b*red.casa[0].y + c;

	if (v0 == 0)  // poteca trece prin prima casa pitic rosu
	{
		VALID =0;
	}

	for(int i=1;i<red.nr;i++)
	{
		double v = a*red.casa[i].x + b*red.casa[i].y + c;
		if(v==0)
		{
			VALID =0;
		}
		if(v*v0 < 0)
		{
			VALID = 0;
		}
	}

	for(int i=0;i<blue.nr;i++)
	{

		double v = a*blue.casa[i].x + b*blue.casa[i].y + c;
		if(v==0)
		{
			VALID =  0;
		}
		if((v > 0 && v0 > 0) || (v < 0 && v0 < 0))
		{
			VALID = 0;
		}
	}

	return VALID;
}


