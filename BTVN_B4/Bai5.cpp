#include<stdio.h>
int main()
{
    int n,sum=0;
    do
    {
        printf("Nhap n:");
        scanf("%d",&n);
        if(n<=0 || n>=100)if("Nhap lai n:\n");
    }
    while(n<=0 || n>=100);
    int a[n];
    for(int i=0; i<n; i++)
    {

        printf("Nhap a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    printf("Cac so nguyen to la:");
    for(int i=0; i<n; i++)
    {
        int dem=1;
        if(a[i]==1)dem=0;
        else
        {
            for(int j=2; j<a[i]; j++)if(a[i]%j==0)
                {
                    dem=0;
                    //sum=sum+a[i];
                    break;
                }
            if(dem==1)
            {
                printf("%d ",a[i]);
                sum=sum+a[i];
            }
        }
    }
    printf("\nTong cac so nguyen to:%d",sum);
    return 0;
}
