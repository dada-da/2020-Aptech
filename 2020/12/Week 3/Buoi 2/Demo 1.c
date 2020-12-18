#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkfortriangle(int a, int b, int c){
	if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b)
		return true;
	return false;
}

int p_oftriangle(int a, int b, int c){
	return a + b + c;
}

float s_oftriangle(int a, int b, int c){
	float p2 = (float)p_oftriangle(a, b, c) / 2;
	return sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
}

int main(){
	int a, b, c;
	do{
		printf("Nhap a = ");
		scanf("%d", &a);

		printf("Nhap b = ");
		scanf("%d", &b);

		printf("Nhap c = ");
		scanf("%d", &c);
	}while(checkfortriangle(a, b, c));
	
	printf("Day la 3 canh cua tam giac \n");
	printf("Chu vi cua tam giac = %d \n", p_oftriangle(a,b,c));
	printf("Dien tich cua tam giac = %f \n", s_oftriangle(a,b,c));
}