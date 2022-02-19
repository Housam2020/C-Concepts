#include<stdio.h>
#include<string.h>


void alpharot(char x[]){


	int i;

	for (i =0; x[i] != '\0'; i++){

		if(x[i] == 'z'){

			x[i] = 'A';	
		}
		else if(x[i] == 'Z'){

			x[i] = 'a';
		}
		
		else{	// Lowercase
			if (x[i] >= 'a' && x[i] < 'z'){
			x[i] = toupper(x[i]);
			
			x[i]++;
			}
			
			// Uppercase
			else if(x[i] >= 'A' && x[i] < 'Z'){
			x[i] = tolower(x[i]);
			
			x[i]++;
			}
		}


	}
}


int main(){

	printf("enter a word\n");


	char buf[500];
	
	scanf("%s", buf);

	printf("word entered is \"%s\"\n",buf);


	alpharot(buf);

	printf("word after the alphabet was modified \"%s\"\n", buf);




	return 0;
}

