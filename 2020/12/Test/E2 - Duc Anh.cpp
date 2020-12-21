#include <stdio.h>
#include <string.h>

void upperCase(char string1[], int n){
	for(int i = 0; i < strlen(string1); i++){
		if(string1[i] >= 97 && string1[i] <= 122){
			string1[i] -= 32;
		}
	}
}

int main(){
	char s1[50];
	printf("Enter: ");
	scanf("%s", s1);
	
	upperCase(s1, 50);
	printf("The string after Upper Case: %s", s1);	
}
