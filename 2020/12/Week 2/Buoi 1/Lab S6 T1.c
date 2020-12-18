#include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cho mang ");
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		arr[i] = i;
	}
	int a,b = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 != 0){
			a += arr[i];
			b++;
		}
	}
	float c = (float)a / b;
	printf("Trung binh cong so le cua mang la %f", c);
}