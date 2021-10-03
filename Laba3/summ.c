#include <math.h>
double summ(int n)
{
	double a, s = 0;
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, (double)i) * (1 / (((double)i + 1) * ((double)i + 2) * ((double)i + 3)));
		s = s + a;
		//printf("n=%d  s=%.5lf\n",i,s);
	}
	return s;
}