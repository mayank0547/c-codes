#include<iostream>
using namespace std;
int main(){
    int n,s,i;
    cout<<"enter the number of elements in the array\n";
    cin>>n;
    int ar[n];
    cout<<"\nenter the array\n";
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"\n enter the element to be search\n";
    cin>>s;
    cout<<s<<" is present at the index ";
    for(i=0;i<n;i++){
        if(ar[i]==s){
            cout<<i<<" ";
        }
    }
    return 0;
}