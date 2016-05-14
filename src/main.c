#include <stdio.h>
#include "fquad.h"


int main()
{
	double a, b, c, answer1, answer2;
	
	printf("Введите коэффициенты a, b,c для квадратного уравнения");
	scanf("%lf%lf%lf",&a, &b ,&c);

	quad(a, b, c, &answer1, &answer2);
	printf("%lf\t%lf", answer1, answer2);
	
	return 0;
}
