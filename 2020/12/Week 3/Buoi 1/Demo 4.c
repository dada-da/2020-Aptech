#include <stdio.h>
int main(){
	int i;
	printf("Nhap so i =");
	scanf("%d", &i);

	int j;
	printf("Nhap so j =");
	scanf("%d", &j);

	int arr[i][j];
	for(int a = 0; a < i; a++){
		for(int b = 0; b < j; b++){
			printf("Nhap arr[%d][%d]", a, b);
			scanf("%d", &arr[a][b]);
		}
	}
	int y = i;
	int z = j;
	int arr2[z][y];
	for(int a = 0; a < z; a++){
		for(int b = 0; b < y; b++){
			arr2[b][a] = arr[a][b];
		}
	}
	printf("Ma tran chuyen vi cua arr[%d][%d] la arr[%d][%d]\n", i,j,z,y);
	for(int a = 0; a < z; a++){
		for(int b = 0; b < y; b++){
			printf("%5d", arr2[b][a]);
		}
		printf("\n");
	}
}