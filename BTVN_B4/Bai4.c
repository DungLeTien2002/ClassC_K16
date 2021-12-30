#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap n:");
        scanf("%d",&n);
        if(n<=0 || n>=100)if("Nhap lai n:\n");
    }
    while(n<=0 || n>=100);
    float a[n];
    for(int i=0; i<n; i++)
    {

        printf("Nhap a[%d]=",i+1);
        scanf("%f",&a[i]);
    }
    float max=a[0];
    for(int i=1;i<n;i++)if(a[i]>max)max=a[i];
    printf("Gia tri lon nhat la: %.2f ",max);
    printf("\nVi tri xuat hien:");
    for(int i=0;i<n;i++)if(a[i]==max)printf("%d ",i+1);
    return 0;
}
