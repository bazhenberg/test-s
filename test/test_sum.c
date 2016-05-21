#include "fquad.h"
#include "ctest.h"

CTEST(quad_suite, test_quad_equation) 
{
	const double a = -1, b = -2, c = -6;

        double x1, x2;

 	quad (a, b, c, &x1, &x2);
 
	const double expected_x1 = 435;
	const double expected_x2 = 545;
	
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}


