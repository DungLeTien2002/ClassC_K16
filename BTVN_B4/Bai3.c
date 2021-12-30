#include<stdio.h>
int main()
{
    int n,sum1;
    do
    {
        printf("Nhap so luong phan tu n:");
        scanf("%d",&n);
        if(n<=0 || n>=100)printf("Nhap lai n:");
    }
    while(n<=0 || n>=100);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("Nhap a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    int dem=0,dem1=0;
    for(int i=0; i<n; i++)
    {
        sum1=0;
        for(int j=1; j<=a[i]/2; j++)
        {

            if(j*j==a[i])
            {
                printf("%d ",a[i]);
                dem++;
                break;
            }
            if(a[i]%j==0)sum1=sum1+j;
        }
        if(sum1==a[i])
        {
            printf("%d ",a[i]);
            dem1++;
        }
    }
    printf("\nCo %d so chinh phuong",dem);
    printf("\nCo %d so hoan hao",dem1);
    return 0;
}
