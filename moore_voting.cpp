#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

// int main(){
//     vector<int>arr={2, 2, 1, 1, 1, 2, 2};
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count>n/2){
//             cout<<"Majority element is: "<<arr[i];
//             return 0;
//         }
//     }

// }

// int main(){
//     vector<int>arr={2, 2, 1, 1, 1, 2, 2};
//     int n=arr.size();
//     unordered_map<int,int>freq;
//     for(int x:arr){
//         freq[x]++;
//         if(freq[x]>n/2){
//             cout<<"Majority element is: "<<x;
//             return 0;
//         }
//     }
// }

int main(){
    vector<int>arr={2, 2, 1, 1, 1, 2, 2};
    int candidate;
    int count=0;
    for(int x:arr){
        if(count==0) candidate=x;
        if(x==candidate) count++;
        else count--;
    }
    cout<<"Maximum element is: "<<candidate;

}