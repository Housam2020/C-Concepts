#include<stdio.h>
#include<string.h>


int ispalindrome(char x[]){

	int len, mid;
	len = strlen(x);
	
	
	mid = len/2;

	int i;

	for (i=0; i <= mid; i++){
		if (x[i] != x[len-1-i]){
			return 0;
		}
	}		
	return 1;

}


int main(){


	printf("enter a word\n");

	char buf[500];

	scanf("%s", buf);

	int x;
	x = ispalindrome(buf);

	if (x == 1){

		printf("the word \"%s\" is a palindrome\n", buf);
	}
	else{

		printf("the word \"%s\" is not a palindrome\n", buf);

	}



	return 0;
}

