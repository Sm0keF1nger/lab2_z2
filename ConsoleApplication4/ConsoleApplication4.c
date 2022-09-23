#include <stdio.h>
#include <math.h>

int main() {

	const int a = 15;
	const int b = 0;
	const int c = -3;
	double y;

	printf("a = %d\n", a);

	printf("b = %d\n", b);	

	printf("c = %d\n", c);

	y = (5 * a - b + pow(c, 2)) / (2 + c) + 1;

	printf("y = (5a - b + c^2) / (2 + c) + 1\n y = %.2lf\n", y);

}