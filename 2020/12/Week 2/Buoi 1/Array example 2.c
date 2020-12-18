#include <stdio.h>

int main(){
	int ary[10];
	for(int i = 0; i < 10; i++){
		printf("Nhap pt: ");
		scanf("%d", &ary[i]);
	}
	int max = ary[0];
	for(int i = 0; i < 10; i++){
		if(ary[i] > max){
		max = ary[i];
		}
	}
	printf("So lon nhat la %d\n", max);

	int min = ary[0];
	for(int i = 0; i < 10; i++){
		if(ary[i] < min){
			min = ary[i];
		}
	}
	printf("So nho nhat la %d\n", min);

	int sec = ary[0];
	for( int i = 0; i < 10; i++){
		if(min == max){
			printf("Mang toan so lon nhat");
		}else{
			 if(ary[i] > sec && ary[i] < max){
			 sec = ary[i];
			}
		}
	}
	printf("So lon thu 2 la %d", sec);
}