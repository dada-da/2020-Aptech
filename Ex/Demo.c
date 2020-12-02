#include <stdio.h>
int main(){
	int x,y;
	x = 10;
	y = 20;
	printf("x = 10 \n");
	x = x + 5;
	printf("x = 15 \n");
	x = x*x*x;
	printf("x = %d \n", x);
	float p = 3.14159;
	printf("Pi = %f \n", p);
	char h;
	h = '@';
	printf("email: caoducanh%cgmail.com \n", h);
	double s = 123.6533;
	printf("Tong tien: %lf$ \n",s);
}