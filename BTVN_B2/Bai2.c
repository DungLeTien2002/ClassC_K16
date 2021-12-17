/*#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	do{
		printf("nhap a: ");
		scanf("%d", &a);
		if(a<2 || a>50) printf("nhap lai a\n");
	}while(a<2 || a>50);
	printf("%0.3f", pow((double)a/3,4));
	return 0;
}*/
#include<stdio.h>
#include<math.h>


int main() {
	int a;
	printf("nhap a=");
	scanf("%d", &a);
	double result;
	result= pow((double)a/3,4);
	printf("ketqua =%f", result);
	return 0;
}
