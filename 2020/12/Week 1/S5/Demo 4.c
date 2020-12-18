#include <stdio.h>

int main(){
	int a;
	printf("Nhap so a = ");
	scanf("%d", &a);

	int b;
	printf("Nhap so b = ");
	scanf("%d", &b);

	int i,j = 1;
	int x = 0;

	for(i = 1, j = 1; i <= a && j <= b; i++, j++){
		if(a % i == 0 && b % j == 0){
			if(i == j){
				x = i;
			}
			}
	}printf("Uoc chung lon nhat cua %d va %d la: %d", a,b,x);
}