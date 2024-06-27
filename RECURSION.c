#include<stdio.h>
int sum(int x){
    if(x==1)
    return 1;
    else
    return x+sum(x-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("\nthe sum of first n numbers is %d",sum(n));
    return 0;
}