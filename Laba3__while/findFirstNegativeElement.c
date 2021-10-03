#include <math.h>
int findFirstNegativeElement(double eps)
{
	double a = 1;
	int n = 0;
	int i = 0;
	while (fabs(a) >= eps || a > 0)
	{
		a = pow(-1, (double)i) * (1 / (((double)i + 1) * ((double)i + 2) * ((double)i + 3)));
		n = i;
		if (a < 0 && fabs(a) < eps)
			return n;
		//printf("%.5lf   %.5lf    %.5lf\n", a, s, fabs(a));
		++i;
	}
}