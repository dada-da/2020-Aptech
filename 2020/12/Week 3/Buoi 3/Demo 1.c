#include <stdio.h>
#include <string.h>

int main(){
	char str1[20];
	printf("Nhap chuoi: ");
	scanf("%s", str1);

	for(int i = 0; i < strlen(str1); i++){
		if(str1[i] >= 97 && str1[i] <= 122){
			str1[i] -= 32;
		}
	}
	printf("Sau khi bien doi: %s", str1);
}