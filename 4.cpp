#include<bits/stdc++.h> 
using namespace std;
    int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}

int main(){
    int n,d,a,b;
    cin>>n>>d;
    cin>>a>>b;
    pair<int,int> p[n];
    int ind[n],sec[n];
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
        ind[i]=p[i].first*a+p[i].second*b;
        sec[i]=ind[i];
    }
    sort(ind,ind+n);
    int s=0,count=0;
    for(int i=0;i<n;i++){
        if(s<=d){
        s+=ind[i];
        count++;
        }
        else
         break;
    }
    cout<<count-1<<endl;
    for(int i=0;i<count-1;i++){
       cout<<binarySearch(sec,0,n,ind[i])+1<<" ";
    }
    return 0;
    
}