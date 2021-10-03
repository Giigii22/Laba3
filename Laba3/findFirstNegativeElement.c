#include <math.h>
int findFirstNegativeElement(double eps)
{
	double a = 1;
	int n = 0;
	for (int i = 0; (fabs(a) >= eps) || (a > 0); ++i) 
	{
		a = pow(-1, (double)i) * (1 / (((double)i + 1) * ((double)i + 2) * ((double)i + 3)));
		n = i;
		//printf("%.5lf   %d    %.5lf\n", a, n, fabs(a));
		if ((a < 0) && (fabs(a) < eps))
		{
			return n;
		}

	}

}