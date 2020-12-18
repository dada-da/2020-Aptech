#include <stdio.h>
int main(){
	int a = 0;

	for(int i = 0, j = 0; i < 100; j++){
		if(j % 2 != 0){
			a += j;
			i ++;
		}
	}
	printf("Tong so le = %d", a);
}