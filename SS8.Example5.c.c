#include<stdio.h>

int main(){

	int num1,num2,res;
	char op;
	num1 = 90;
	num2 = 33;
	op = '+';
	switch(op){
		case  '+':
			res = num1 + num2;
			printf("\n The sum is: %d",res);
			break;
		case  '-':
			res = num1 - num2;
			printf("\n The sub is: %d",res);
			break;
		case  '/':
			res = num1 / num2;
			printf("\n The div is: %d",res);
			break;
		case  '*':
			res = num1 * num2;
			printf("\n The mul is: %d",res);
			break;
		default:
			printf("\n Invalid");
		break;		
	}


return 0;

}

