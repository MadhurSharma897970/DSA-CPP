#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int>arr={0,3,8,9,5,2};
    int n=arr.size();
    int start=1,end=n-2;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
            cout<< mid;
        }
        if(arr[mid-1]<arr[mid]){
            start=mid+1;
        } else end=mid-1;
    }
}