#include<stdio.h>
int main()
{
    int n,m;
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
    }
    while(n<0 || n>100);
    int i,j,a[100],b[100];
    for(i=0; i<n; i++)
    {
        printf("Nhap a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
       b[i]=a[i];

    }

    for(int i=0; i<n-1; i++)
        for(int j=i; j<n; j++)if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

    int dem=0;
    for(int i=0;i<n;i++)if(a[i]==b[i])dem++;
    if(dem==n)printf("yes");
    int dem2=0;
    for(int i=0; i<n-1; i++)
        for(int j=i; j<n; j++)if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    for(int i=0;i<n;i++)if(a[i]==b[i])dem2++;
    if(dem2==n)printf("no");
    if(dem!=n && dem2!=n)printf("-1");
}
