#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n =");
	scanf("%d", &n);

	int arr[n];
	for(int i = 0; i < n; i++){
		printf("Nhap arr[%d]= ", i);
		scanf("%d", &arr[i]);
	}
	printf("So dao nguoc la: ");
	for(int i = 0; i < n; i++){
		int x = 0;
		for( ;arr[i] != 0; ){
			x = x * 10 + arr[i] % 10;
			arr[i] /= 10;
	}
	printf("%5d",x);
	}
}