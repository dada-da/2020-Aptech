#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n =");
	scanf("%d", &n);
	int i = 1;
	int b = 0;

	for(i = 1; i <= n && n % i == 0 ; i++){
		if(n % i == 0){
			b++;
		}
	}
	if(b <= 2){
		printf("Day la so nguyen to");
	}else{
		printf("Day khong phai la so nguyen to");
	}

}