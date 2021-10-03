#include <math.h>
int findFirstElement(double eps)
{
	double a = 1;
	int n = 0;
	int i = 0;
	while (fabs(a) >= eps)
	{
		a = pow(-1, (double)i) * (1 / (((double)i + 1) * ((double)i + 2) * ((double)i + 3)));
		n = i;
		if (fabs(a) < eps)
			break;
		//printf("%.5lf   %.5lf    %.5lf\n", a, s, fabs(a));
		++i;
	}
	return n;
}