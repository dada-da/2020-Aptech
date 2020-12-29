#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("Input a edge = ");
	scanf("%d", &a);
		
	int b;
	printf("Input b edge =");
	scanf("%d", &b);
		
	int c;
	printf("Input c edge = ");
	scanf("%d", &c);
	
	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
		float p2 = (float)(a + b + c) / 2;
		float s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
		printf("The area of the triangle are %f", s);
	}else{
		printf("Error!!! Not edges of triangle!");
	}
}
