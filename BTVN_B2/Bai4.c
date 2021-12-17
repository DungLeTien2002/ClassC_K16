#include <stdio.h>
#include <math.h>

int main()
{
	int n, m, k;
	do{
		printf("nhap n: ");
		scanf("%d", &n);
		printf("nhap m: ");
		scanf("%d", &m);
		printf("nhap k: ");
		scanf("%d", &k);
		if(n<1 || n>20 || m < 1|| m> 5 || k<10 || k>50) printf("Vui long nhap lai a\n");
	}while(n<1 || n>20 || m < 1 || m> 5|| k<10 || k>50);
	if(m*k % n == 0)
		printf("no\n");
	else
		printf("yes\n");
	return 0;
}
