#include <stdio.h>

int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int y = 0;

	for(int i = 1; i < n; i++){
		if(n % i == 0){
			y += i;
		}
	}printf("Tong cac uoc cua %d bang %d", n,y);
}