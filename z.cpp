#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0)
        count++;
    }
    if(count!=0)
    cout<<"the given number is not a prime number ";
    else 
    cout<<"the number entered is a prime number";
    return 0;
}