#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);

	int arr[n];

	for(int i = 0; i < n; i++){
		printf("Nhap so arr[%d]", i);
		scanf("%d", &arr[i]);

		int x;
		int f;
		do{
			f = 0;
			printf("Nhap arr[%d] = ", i);
			scanf("%d", &x);
			for(int j = 0; j < i; j++){
				if(x == arr[j]){
					f = 1;
					break;
				}
			}
		}while(f == 1);
			arr[i] = x;
		}
		printf("Mang sau khi nhap:\n");
			for(int i = 0; i < n; i++){
				printf("%5d", arr[i]);
			}
}
