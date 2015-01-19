#include <stdio.h>

int main() {

char entry;
int a, b, sum;

printf("please enter the first number\n");
scanf("%i", &a);
printf("please enter the second number\n");
scanf("%i", &b);

printf("please enter an operator : (+) (-) (*) (/)\n");
scanf("%c", &entry);

switch(entry) {

case '+': sum = a + b;
break;
	
case '-': sum = a - b;
break;

case '*': sum = a * b;
break;

case  '/': sum = a / b;
break;

case '^': sum = a % b;

default : printf("not a valid operator\n");
}

printf("The sum of the two numbers with the chosen operator is : %i\n", sum);

return 0;
}
