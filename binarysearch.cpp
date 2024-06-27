#include<iostream>
using namespace std;
int main(){
    int n,i,s,b;
    cout<<"enter the number of elements in the array\n";
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"\nenter the element to be search "; 
    cin>>s;
    b=n/2;
    if(ar[b]>s)
    for(i=0;i<b;i++){
        if(s==ar[i]){
        cout<<s<<" is present at the index "<<i;
        break;
        }
    }
    else
    for(i=b;i<n;i++)
    if(s==ar[i]){
    cout<<s<<" is present at the index "<<i;
    break;
       }   return 0;
}