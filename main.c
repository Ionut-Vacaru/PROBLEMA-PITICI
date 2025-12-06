#include <stdio.h>
#include "header.h"

int main()
{
	int M,N,K;
	PITICI red,blue;	
	scanf("%d", &M);

	red = citire_coordonate(M);

	scanf("%d", &N);

	blue = citire_coordonate(N);

	scanf("%d", &K);

	for(int i=0;i<K;i++)
	{
		double x1, y1, x2, y2;
		scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2 );
	
	PUNCT A = {x1, y1};
	PUNCT B = {x2, y2};

	if(validation(red,blue,A,B))
	{
		printf("Da - sfetnicul %d e ok \n", i);
		//printf("\n");
	}else
	{
		printf("NU - sfetnicul %d nu e ok \n", i);
		//printf("\n");
	}
	
	}


return 0;
}
