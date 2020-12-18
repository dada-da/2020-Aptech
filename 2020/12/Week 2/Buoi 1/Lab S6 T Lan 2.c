#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n =");
	scanf("%d", &n);
	int count = 0;

	int arr[n];
	for(int i = 0; i < n; i++){
		printf("Nhap arr[%d]= ", i);
		scanf("%d", &arr[i]);
	}

	for(int i = n -1; i >= 0; i--){
		if(arr[i] % 2 != 0){
			printf("So le cuoi cung cua mang la %d", arr[i]);
			count = 1;
			break;
		}
	} if(count == 0){
		printf("Khong co so le trong mang");
	}
}