#include <iostream>
using namespace std;

int main(){
    int x,n,m;
    cin>>x;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"element found!"<<endl;
    }else{
        cout<<"element not found!"<<endl;
    }
    return 0;
}