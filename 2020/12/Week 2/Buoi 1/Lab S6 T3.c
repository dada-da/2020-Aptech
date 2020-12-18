#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong phan tu cho mang ");
	scanf("%d", &n);
	int arr[n];

	int x;
	printf("Nhap so x = ");
	scanf("%d", &x);

	for (int i = 0; i < n; i++){
		printf("Nhap arr[%d]= ",i);
		scanf("%d", &arr[i]);
	}
	int i = 0;
	for(i = 0; i < n; i++){
		if(arr[i] == x){
			printf("X nam trong mang");
			break;
			}
		}
		if (i >= n){
			printf("X khong nam trong mang");
		}
}