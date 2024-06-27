#include<iostream>
using namespace std;
int main(){
    int n,max,min,i;
    cout<<"enter the number of elements in a array\n";
    cin>>n;
    int ar[n];
    cout<<"\n enter the elements of the array\n";
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    max=ar[0];
    for( i=1;i<n;i++){
        if(ar[i]>max)
        max=ar[i];
    }
    cout<<"\n the biggest element in the array is "<<max;
    min=ar[0];
    for(i=1;i<n;i++){
        if(min>ar[i])
        min=ar[i];
    }
    cout<<"\nthe smallest element in the array is "<<min;

    return 0;

}