

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,k,m;
    printf("Enter rows:");
    scanf("%d",&n);
    

    for(i=0; i<n; i++)
    {
        for(j=n; j>i; j--)
        printf(" ");

        for(k=0; k<=i; k++)
        printf("%d",k+1);
           
        for(m=i; m>=1; m--)
        printf("%d",m);

        printf("\n");
    }
    return 0;
}