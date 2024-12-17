#include<bits/stdc++.h>
using namespace std;
int display(int n){
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
    sort(arr.begin(),arr.end());
    int temp = arr[n-1];
    int idx=n-1;
    for(int i=idx-1;i>=0;i--){
    if(arr[i]<temp){
        temp=arr[i];
        break;
    }
    }
    if(temp!=arr[n-1]){
        return temp;
    }else{
        return -1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int res= display(n);
       cout<<res<<endl;
    }
    return 0;
}