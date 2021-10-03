#include <math.h>
int findFirstElement(double eps)
{
	double a = 1;
	int n = 0;
	for (int i = 0; fabs(a) >= eps; ++i)
	{
		a = pow(-1, (double)i) * (1 / (((double)i + 1) * ((double)i + 2) * ((double)i + 3)));
		n = i;
		if (fabs(a) < eps)
			break;
		printf("%.5lf       %.d\n", a, n);
	}
	return n;
}