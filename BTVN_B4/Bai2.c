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
    printf("Mang vu nhap la:");
    for(int i=0; i<n; i++)
    {

        printf("%.2f ",a[i]);
    }
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
        {
            if(a[i]<0 && a[j]<0 && a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    printf("\nMang da sap xep:");
    for(int i=0; i<n; i++)
    {

        printf("%.2f ",a[i]);
    }

}
