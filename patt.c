#include<stdio.h>
int main(){
    int n,i,j,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       for(j=1;j<=i;j++){
        printf("%d",c);
        if(c==0)
        c=1;
        else
        c=0;
       }
       printf("\n");
    }
    return 0;
}