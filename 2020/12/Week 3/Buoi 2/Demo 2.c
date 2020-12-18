#include <stdio.h>
#include <stdbool.h>

bool checkprimenumber(int n){
	if(n < 2) return false;
	if(n <= 3) return true;
	for (int i = 2; i <= n/2; i++){
		if(n % i == 0) return false;
	}
	return true;
}	

int findnextprimenumber(int n){
	for(int i = n + 1; true; i++){
		if(checkprimenumber(i))
			return i;
	}
}

int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	
	printf("So nguyen to gan nhat la: %d", findnextprimenumber(n));

}