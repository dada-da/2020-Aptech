#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n =");
	scanf("%d", &n);

	int b = 0;

	for(i = 2; i <= n/2; i++){
		if(n % i == 0){
			b++;
			break;
		}
	}
	if(b == 0 && n > 1){
		printf("Day la so nguyen to");
	}else{
		printf("Day khong phai la so nguyen to");
	}

}