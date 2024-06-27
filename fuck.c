#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for( i=1;i<=(n+1)/2;i++){
       for(j=1;j<=n;j++){
          if(j<=i||j>(n-i))
          printf("%c",i+64);
          else
          printf(" "); 
       }
       printf("\n");
    }
    for(i=((n+1)/2)+1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=i||j<=n-i+1)
            printf("%c",i+64);
            else
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}