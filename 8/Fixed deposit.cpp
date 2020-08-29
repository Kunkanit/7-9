#include<stdio.h>
#include<math.h>
int main() {
	float p, b, r, rate;
	int m, n,input;
	bool check = true;
	do {
				
		printf("\n\tEnter 1 to start or 0 to exit: ");
		
		scanf_s("%d", &input);
		if (input == 0) {

			check = false;
			printf("See u next time..");
		}
		else if (input == 1) {

			printf("Input your deposit: ");
			scanf_s("%f", &p);
			if (p > 0) {
				printf("What kind of your fix account 3 or 6 or 12: ");
				scanf_s("%d", &m);
				if (m == 3) {
					printf("Input your rate per year: ");
					scanf_s("%f", &r);
					rate = (r / 4) / 100;
					printf("How many months: ");
					scanf_s("%d", &n);
					printf(" balance : %.2f ", b = p * (pow((1 + rate), (n / 3))));
				}
				else if (m == 6) {
					printf("Input your rate per year: ");
					scanf_s("%f", &r);
					rate = (r / 2) / 100;
					printf("How many months: ");
					scanf_s("%d", &n);
					printf(" balance : %.2f ", b = p * (pow((1 + rate), (n / 6))));

				}
				else if (m == 12) {

					printf("Input your rate per year: ");
					scanf_s("%f", &r);
					rate = r / 100;
					printf("How many months: ");
					scanf_s("%d", &n);
					printf(" balance : %.2f ", b = p * (pow((1 + rate), (n / 12))));

				}
				else {

					printf("Enter the wrong number");
				}
			}else {
				printf("...Sorry you Enter the wrong number...");
			}
		}
		else {
			printf("...Sorry please try again...");
		}
	}
	while (check);
	return 0;
}