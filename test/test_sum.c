#include "fquad.h"
#include "ctest.h"

CTEST(quad_suite, test_quad_equation) 
{
	const double a = 1, b = 6, c = 9; 

        double x1, x2;

 	quad (a, b, c, &x1, &x2);
 
	const double expected_x1 = -3;
	const double expected_x2 = -3;
	
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}


