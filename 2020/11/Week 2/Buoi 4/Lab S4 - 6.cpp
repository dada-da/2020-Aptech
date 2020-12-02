#include <stdio.h>
int main(){
	int i = 3;
	int a = 0;
	int b = 0;
	int c = 1;
	
	int n;
	printf("Nhap so n= ");
	scanf("%d", &n);
	
	if(n == 1 || n == 2){
		printf("So Fibonacci thu %d la: 1", n);
	}else{
		for(i = 2; i <= n; i++){
			a = b + c;
			b = c;
			c = a;
		}
		printf("So Fibonacci thu %d la: %d", n,a);
	}
}
