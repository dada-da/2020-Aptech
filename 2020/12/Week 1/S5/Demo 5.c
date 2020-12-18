#include <stdio.h>

int main(){
	int a;
	printf("Nhap so a = ");
	scanf("%d", &a);

	int b;
	printf("Nhap so b = ");
	scanf("%d", &b);

	int i = a;
	int j = b;
	int x = 0;

	for(i = a, j = b; i > 0 && j > 0; i--, j--){
		if(a % i == 0 && b % j == 0){
			if(i == j){
				x = i;
				break;
			}
			}
	}printf("Boi chung nho nhat cua %d va %d la: %d", a,b,x);
}