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

	int count = 0;
	int x = 0;

	for(int i = 0; i < n; i++){
		if(arr[i] > 0){
			x++;
		}
		if(x > count){
			count = x;
		}else{
			x = 0;
		}
	}
	printf("So duong lien tiep nhieu nhat la %d", count);
}