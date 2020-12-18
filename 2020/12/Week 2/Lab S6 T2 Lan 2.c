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
	int min = arr[0];

	for(int i = 0; i < n; i++){
		if(arr[i] > 0){
			min = arr[i];
			break;
		}
	}
	for(int i = 0; i < n; i++){
		if(arr[i] > 0 && min > arr[i]){
			min = arr[i];
		}
	}
	printf("So duong nho nhat la %d", min);
}