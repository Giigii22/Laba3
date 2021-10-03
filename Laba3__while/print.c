#include <math.h>
#include <stdio.h>
void print(int n, int k)
{
	int i = 0;
	double a;
	while (i < n)
	{
		a = pow(-1, (double)i) * (1 / (((double)i + 1) * ((double)i + 2) * ((double)i + 3)));
		//printf("a=%.5lf\n", a);
		//printf("i=%.d k=%.d\n", i,k);
		if ((i + 1) % k == 0 && i != 0)
		{
			++i;
			continue;
		}
		printf("%.3lf ", a);
		++i;
	}
}