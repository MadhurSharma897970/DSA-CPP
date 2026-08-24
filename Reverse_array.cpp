#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr= {10,5,8,3,15};
    int n=arr.size();//in array use sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=n-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int x:arr){
        cout<<x<<" ";
    }

}