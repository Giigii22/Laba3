#include <math.h>
int findFirstNegativeElement(double eps)
{
	int i = 0;
	double a = 1;
	int n = 0;
	do
	{
		a = pow(-1, (double)i) * (1 / (((double)i + 1) * ((double)i + 2) * ((double)i + 3)));
		n = i;
		if (a < 0 && fabs(a) <= eps)
			return n;
		//printf("%.5lf   %.5lf    %.5lf\n", a, s, fabs(a));
		++i;
	} while (fabs(a) > eps || a > 0);
	return n;
}