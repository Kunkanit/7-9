#include<stdio.h>
int main() {

	int i, j, k, num;
	printf("Enter number :");
	scanf_s("%d", &num);
	if (num > 1 && num <= 9) {

		for (i = 1; i <= num; i++) {

			for (k = num; k >= i; k--) {

				printf(" ");

			}for (j = 1; j <= i; j++) {

				printf("%d", j);

			}
			printf("\n");
		}

	}
	else {

		printf("Enter wrong number");
	}

	return 0;
}