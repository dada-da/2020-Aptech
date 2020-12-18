#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n= ");
	scanf("%d", &n);
	
	if( n <= 0){
		printf("So thu %d la: %d", n, 0);
	}else if(n == 1 || n == 2){
		printf("So Fibonacci thu %d la: 1", n);
	}else{
		int a = 0;
		int b = 1;
		int c = 1;
	
		for( int i = 2; i <= n; i++){
			c = a + b;
			a = b;
			b = c;
		}
		printf("So Fibonacci thu %d la: %d", n,c);
	}
}
