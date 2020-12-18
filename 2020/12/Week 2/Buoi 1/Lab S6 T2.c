#include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cho mang ");
	scanf("%d", &n);
	int arr[n];

	for(int i = 1,j = 0; j < n; i++, j++){
		arr[j] = i;
	}
	int a,b = 0;
	for(int j = 0; j < n; j++){
		if(arr[j] % 2 != 0 && j % 2 == 0){
			a += arr[j];
			b++;
		}
	}
	float c = (float)a / b;
	printf("Trung binh cong so le o index chan cua array = %f", c);
}