#include <stdio.h>
int main(){
	int n,x = 0;
	printf("Nhap n=");
	scanf("%d",&n);
	for( ; n != 0; n/=10){
		x = x * 10 + n % 10;
	}
	printf("Dao nguoc: %d",x);
}