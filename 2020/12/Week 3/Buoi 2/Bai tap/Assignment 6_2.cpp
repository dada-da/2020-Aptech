#include <stdio.h>

void timuocchunglonnhat(int a, int b, int n){
	if(a > b){
		for(int i = 1; i <= b; i++){
			if( a % i == 0 && b % i == 0 && n < i){
				n = i;	
			}
			
		}
	}else if(a < b){
		for(int i = 1; i <= a; i++){
			if(a % i == 0 && b % i == 0 && n < i){
				n = i;
			}
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la %d \n", a,b,n);
}

void timboichungnhonhat(int d, int e){
	int f = d;
	for(f = d; f <= d * e; f++){
		if(d == 0 && e == 0){
			printf("Khong co so duong chia het cho 0");
		}else if(f % d == 0 && f % e == 0){
			printf("Boi chung nho nhat cua %d va %d la %d", d, e, f);	
		break;
		}
	}
}

int main(){
	int a;
	printf("Nhap a = ");
	scanf("%d", &a);
	
	int b;
	printf("Nhap b = ");
	scanf("%d", &b);
	
	int n = 0;
	
	timuocchunglonnhat(a, b, n);
	
	int d;
	printf("Nhap d = ");
	scanf("%d", &d);
	
	int e;
	printf("Nhap e = ");
	scanf("%d", &e);
	timboichungnhonhat(d, e);
}
