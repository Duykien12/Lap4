#include<stdio.h>

int main(){

	int num,res;
	printf(" Enter the number is here\n");
	scanf("%d",&num);
	res = num % 2;
	if(res==0){
		printf("This is a oven");
	}
	else {
		printf("this is a odd");
	}

return 0;

}

