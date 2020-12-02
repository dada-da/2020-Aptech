#include <stdio.h>
int main(){
	 int x;
	printf("Nhap so x = ");
	scanf("%d", &x);
	int b = 1;

	for(int i = 1; i <= x; i++){
		b *= i;
	}
	printf("Gia thua cua x la %d", b);
}