#include <stdio.h>

int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);

	for(int i = 1; i < n; i++){
		if(i % 2 == 0){
			printf("Cac so chan nho hon %d la %d \n", n,i);
		}
	}
}