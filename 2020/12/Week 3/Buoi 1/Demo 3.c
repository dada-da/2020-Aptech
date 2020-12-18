#include <stdio.h>
int main(){
	int n;
	printf("Nhap so N = ");
	scanf("%d", &n);

	int arr[n];
	for(int in = 0; in < n; in++){
		printf("Nhap so arr[%d]", in);
		scanf("%d", &arr[in]);
	}

	for(int i = 1; i < n; i++){
		int j = i - 1;
		int tmp = arr[i];
			for( ;j >= 0 && tmp < arr[j]; ){
			arr[j + 1] = arr[j];
			j--;
			}
		arr[j + 1] = tmp;
		}

		printf("Mang sau khi sap xep: ");
	for(int i = 0; i < n; i++){
		printf("%5d", arr[i]);
	}
}