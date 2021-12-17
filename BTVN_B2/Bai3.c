#include <stdio.h>
#include <math.h>

int main()
{
	int n; long long m;
	do{
		printf("nhap n: ");
		scanf("%d", &n);
		printf("nhap m: ");
		scanf("%ld", &m);
		if(n<1 || n>999 || m < 7000 || m> 200000 || m%100!=0) printf("Vui long nhap lai a\n");
	}while(n<1 || n>999 || m < 7000 || m> 200000|| m%100!=0);
	long long tien;
	if(n%2!=0 && n>5)
		tien = m*n - (m*n*20/100);
	else if(n%2==0 && n>4)
		tien = m*n - (m*n*15/100);
	else
		tien = m*n;
	printf("So tien can tra: %d", tien);
	return 0;
}
