#include <stdio.h>

double fatorial(double);

double fatorial(double n)
{
	double r=1L;
	double c=n;
	while(c>0L)
	{
		r=r*c;
		c=c-1L;
	}
	
	return r;
}
int main ()
{
	double n;
	printf("Insira o número: ");
	fflush(stdout);
	scanf("%lf", &n);
	double f=fatorial(n);
	printf("Número=%.0lf, Fatorial=%.0lf\n", n, f);
	return 0;
}
