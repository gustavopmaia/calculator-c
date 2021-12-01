#include <stdio.h>

int main(){

	char operator;
	double num1, num2, result;

	printf("\nEnter an operator (+ - * /): ");
	scanf("%c", &operator);

	printf("Enter number 1: ");
	scanf("%lf", &num1);

	printf("Enter number 2: ");
	scanf("%lf", &num2);


	switch(operator){
		case '+':
			result = num1 + num2;
			printf("\nresult: %lf", result);
			break;
		case '-':
			result = num1 - num2;
			printf("\nresult: %lf", result);
			break;
		case '*':
			result = num1 * num2;
			printf("\nresult: %lf", result);
			break;
		case '/':
			result = num1 / num2;
			printf("\nresult: %lf", result);
			break;
		default:
			printf("ERROR: \"%c\" is not an valid operator", operator);
	}

	return 0;

}
