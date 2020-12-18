#include <stdio.h>
#include <stdbool.h>

void nhapMang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void sapxepMang(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
bool kiemtra(int x, int arr[], int n){
	for(int i = 0; i < n; i++){
		if(x == arr[i]){
		 return true;
		 break;
		}
	}
	return false;
}

void thongbao(int x, int arr[], int n){
	if (kiemtra(x, arr, n)){
		printf("%d co nam trong mang \n", x);
	}else{
		printf("%d khong nam trong mang \n", x);
	}
}

void inrasole(int arr[], int n){
	for(int i = 0; i < n; i++){
		if(!(arr[i] % 2 == 0)){
			printf("%5d", arr[i]);
		}
	}
}
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
		
	int mang[n];
	nhapMang(mang, n);
	sapxepMang(mang, n);
	
	int x;
	printf("Nhap x = ");
	scanf("%d", &x);
	
	thongbao(x, mang, n);
	inrasole(mang, n);
	
}
