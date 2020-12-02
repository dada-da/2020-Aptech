#include <stdio.h>
int main(){
	float s = 1;
	int i = 1;
	for(i = 1; i <= 1000; i++){
		s = s + 1/i;
	}
	printf("S = %f", s);
}