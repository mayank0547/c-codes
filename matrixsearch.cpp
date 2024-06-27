#include <iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int mat[n][m];
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    bool flag=false;
    int r=0;
    int c=m-1;
    while(r<n && c>=0){
        if(mat[r][c]=target){
            flag=true;
            break;
        }
    
    if(mat[r][c]>target){
        c--;
    }else{
        r++;
    }}
    if(flag==true){
        cout<<"element not found!";
    }else{
        cout<<"element found!";
    }   
    
    return 0;
}