#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, s, area, perimeter;
	printf("Enter three sides of the triangle: ");
	scanf("%f %f %f", &a, &b,&c);
	
	perimeter = a+b+c;
	s = perimeter/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Perimeter = %.2f\n", perimeter);
	printf("Area = %.2f\n", area);
	
	if (area == perimeter)
	    printf("Equlilateral triangle (Area = Perimeter)\n");
	else 
	    printf("Not an equilateral triangle\n");
	return 0;
}
