#include <math.h>
#include <stdio.h>


// a^2 = b^2 + c^2 ;


double calculate(double x, double y)
{
	return (x*x) + (y*y);
}

int main()
{
	double l1;
	double l2;

	printf("Enter the first side:");
	scanf("%lf", &l1);

	printf("Enter the second side:");
	scanf("%lf", &l2);

	double hypo;
	hypo = sqrt(calculate(l1, l2));


	printf("%f^2 + %f^2 = %f\n", l1, l2, hypo);
	return 0;
}
