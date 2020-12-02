#include <stdio.h>
int main(){
	int i = 1;
	for(i = 1; i < 100; i += 2){
		i += i;
	}
	printf("Tong so le = %d", i);
}