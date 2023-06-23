#include <stdio.h>

#define PI 22/7

int main()
{

	int radius;
	double area_of_circle;
	printf("Enter the radius:");
	scanf("%i", &radius);

	area_of_circle = PI * (radius * radius);

	printf("The area of the circle is %f\n",area_of_circle);
	return 0;
}
