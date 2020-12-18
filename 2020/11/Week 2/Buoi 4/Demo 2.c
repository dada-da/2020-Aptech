#include <stdio.h>

int checkprimenumber(int n){
	int f = 0;
	int a = n + 1;
	for ( ;f == 0; ){
		if( a % 2 == 0){
				a++;
				break;
		}
			f = 1;
	}
	return a;
}

int main(){
	checkprimenumber(10);
}