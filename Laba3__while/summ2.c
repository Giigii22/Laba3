#include <math.h>
double summ2(double eps)
{
	int i = 0;
	double a = 1;
	double s = 0;
	while (fabs(a) > eps)
	{
		a = pow(-1, (double)i) * (1 / (((double)i + 1) * ((double)i + 2) * ((double)i + 3)));
		s = s + a;
		//printf("%.5lf   %.5lf    %.5lf\n", a, s, fabs(a));
		++i;
	}
	return s;
}