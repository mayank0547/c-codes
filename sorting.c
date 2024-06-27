#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int ar[n];
    printf("\n enter the elements of the array");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int j,temp;
    printf("\n the sorted array is \n");
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(ar[j]<ar[i]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf(" %d",ar[i]);
    return 0;
}