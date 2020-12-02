#include <stdio.h>

int main()
{
    float tien_gui = 4000;
    int so_nam = 0;
    for (so_nam = 0; tien_gui <= 1000000; so_nam ++){
    	tien_gui += tien_gui * 8/100;
    }
    printf("So nam can de dat duoc 1.000.000 USD la %d", so_nam);
}