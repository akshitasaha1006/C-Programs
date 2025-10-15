#include <stdio.h>
int main() {
	float weight, charge;
	printf("Enter Weight: ");
	scanf("%f", &weight);
	if (weight <=10) {
		 charge = (10*30)+ (weight - 10)*20;
	}
	printf("Charge = Rs. %.2f\n", charge);
	return 0;
}
