#include<stdio.h>
int main()
{
	char operator;
	double num_1,num_2,result;
	printf ("Enter the operator + - * / : ");
	scanf ("%c",&operator);
	
if (operator == '+'|| operator == '-'|| operator == '*'|| operator == '/'){

	printf("Enter the first number: ");
	if(scanf("%lf",&num_1) != 1){
		printf("Invalid Input");
		return 1;
	}
	printf("Enter the second number: ");
	if(scanf("%lf",&num_2) != 1){
		printf("Invalid Input");
		return 1;
	}

	switch(operator){

	case '+':
		result = num_1 + num_2;
		printf("The result is: %.2lf",result);
		break;
	case '-':
		result = num_1 - num_2;
		printf("The result is: %.2lf",result);
		break;
	case '*':
		result = num_1 * num_2;
		printf("The result is: %.2lf",result);
		break;
	case '/':
		if (num_1 == 0 || num_2 == 0){
			printf("You cant divide by 0!");
			return 1;
		}
		result = num_1 / num_2;
		printf("The result is: %.2lf",result);
		break;
	default:
		printf("Error!\n");
	}
}

else{
	printf("\nPlease enter a valid operator!");
}
	return 0;

}

