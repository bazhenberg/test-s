#include <math.h>
#include <stdlib.h>
#include <stdio.h>


void quad (double a, double b, double c, double *x1, double *x2)
{
	double Diskr;

		Diskr = b*b -4*a*c;
		
		if (Diskr>=0)
		{
		*x1 = (-b-sqrt(Diskr)) / (2*a);
		*x2 = (-b+sqrt(Diskr)) / (2*a);
		}
		else 
			printf("Отрицательный дискриминант");
	
	
}
