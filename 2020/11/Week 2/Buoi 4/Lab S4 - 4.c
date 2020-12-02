#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;

while (!(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a )){
		
		printf("Nhap canh a = ");
		scanf("%d", &a);

		printf("Nhap canh b = ");
		scanf("%d", &b);

		printf("Nhap canh c = ");
		scanf("%d", &c);
}
			int p = a + b + c;
			float q = (float)p/2;
			float s = sqrt(q*(q-a)*(q-b)*(q-c));
			printf("Chu vi: %d va dien tich: %f",p,s);
}	