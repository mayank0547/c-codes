#include<bits/stdc++.h>
using namespace std;
struct query{
    int s,e;
};
int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    query q;
    cout<<"\n enter the starting and end point of the query \n";
    cin>>q.s>>q.e;
    cout<<"\nenter the array";
    for(int i=0;i<n;i++)
      cin>>arr[i];
    for(int i=q.s;i<=q.e;i++)
       sum+=arr[i];
    cout<<"\nsum of the query ["<<q.s<<","<<q.e<<"] is "<<sum;
    return 0;

}