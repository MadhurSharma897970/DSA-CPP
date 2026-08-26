#include<iostream>
using namespace std;
#include<vector>

// int main(){
//     vector<int>arr={1,2,3,4};
//     int n=arr.size();
//     vector<int>ans(n);
//     for(int i=0;i<n;i++){
//         int prod=1;
//         for(int j=0;j<n;j++){
//             if(i!=j){
//                 prod*=arr[j];
//             }
//         }
//         ans[i]=prod;
//     }
//     cout<<"Product of array except itself is: ";
//     for(int x:ans){
//         cout<<x<<" ";
//     }

// }

int main(){
    vector<int>arr={1,2,3,4};
    int n=arr.size();
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);
    vector<int>ans(n);
    for(int i=1;i<n;i++){
        prefix[i]=arr[i-1]*prefix[i-1];
    }
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*arr[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
    }
    for(int x:ans){
        cout<<x<<" ";
    }
}