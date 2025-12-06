#ifndef HEADER_H_
#define HEADER_H_

typedef struct _PUNCT{
	double x,y;

}PUNCT;

typedef struct _PITICI{

	unsigned int nr;
	PUNCT casa[100];

}PITICI;

PITICI citire_coordonate(int n);

void coef_dreapta(PUNCT A, PUNCT B,double *a,double *b,double *c);

int validation(PITICI red, PITICI blue, PUNCT A, PUNCT B);

#endif
