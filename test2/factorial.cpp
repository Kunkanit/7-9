#include<stdio.h>
unsigned long long factorial(int num) {
	unsigned long long factorial = 1;
	
    for (int i = num; i > 1; i--) {

		factorial *= i;
	}

	return factorial;
}

int main() {
	int n;
	printf("Input your number : ");
	scanf_s("%d", &n);
	if (n >=0&&n<=20) {

		unsigned long long Factorial = factorial(n);
		printf("The factorial of %d is %llu \n", n, Factorial);
	}
	else if(n>20)  {
		printf("ENTER WRONG NUMBER\n");

	}
	else {
		printf("ERROR\n");
	}

	return 0;
}