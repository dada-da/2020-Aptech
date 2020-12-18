#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n =");
	scanf("%d", &n);

	int snt = 0;
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("Nhap arr[%d]= ", i);
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < n; i++){
			int count = 0;
			for(int j = 2;j <= arr[i]/2;j++){
				if(arr[i] % j == 0){
				count++;
				break;
				}
			}
		if(count == 0 && arr[i] > 1){
			printf("%d la so nguyen to.\n", arr[i]);
			snt++;
		}
	}
	if(snt == 0){
		printf("Khong co so nguyen to nao");
	}
}