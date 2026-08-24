#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// int main(){
//     vector<int>arr={1,2,3,4,5,6}; //possible subarray is (n*(n+1))/2
//     int n=arr.size();
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//             for(int i=start;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     vector<int>arr={3,-4,5,4,-1,7,-8};
//     int n=arr.size();
//     int max_sum=INT_MIN;

//     for(int start=0;start<n;start++){
//         int curr_sum=0;
//         for(int end=start;end<n;end++){
//             curr_sum+=arr[end];
//             max_sum=max(max_sum,curr_sum);
//         }
//     }

//     cout<<"Maximum subarray sum is: "<<max_sum;
    
//     return 0;
// }

//kadane algorithm

int main(){
    vector<int>arr={2,-1,-3,4,-1,2,1,-5,4};
    int max_sum=INT_MIN;
    int curr_sum=0;
    for(int x:arr){
        curr_sum+=x;
        max_sum=max(curr_sum,max_sum);
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    cout<<"Maximum subarray sum is: "<<max_sum;
}