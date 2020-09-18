#include<stdio.h>

int main(){

	char c;
	printf("Please enter a chartacter:\n");
	scanf("%c",&c);
	if(c >= 'A' && c <= 'Z'){
		printf("lowercase character = %c", c + 'a' - 'A');
	}
	else{
		printf("Character Entered is = %c",c);
	}
	


return 0;

}

