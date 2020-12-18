#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int arr[n];

	for(int i = 0; i < n; i++){
		printf("Nhap so arr[%d]", i);
		scanf("%d", &arr[i]);
	}

	int x;
	printf("Nhap x = ");
	scanf("%d", &x);
	int y = 0;
	int z = 0;

	for(int i = 0; i < n; i++){
		if(arr[i] < x){
			y = x - arr[i];
				if(y > 0 && z < arr[i]){
						z = arr[i];
				}
		}
	}
	printf("So tiem can duoi cua x la %d", z);	
}
	