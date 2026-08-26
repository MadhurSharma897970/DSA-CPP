#include<iostream>
using namespace std;
#include<vector>

int bianrySearch(vector<int>arr,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(target>arr[mid]){
            start=mid+1;
        } else if(target<arr[mid]){
            end=mid-1;
        } else return mid;
    }
    return -1;
}

int main(){
    vector<int>arr={3,5,12,32,56,65};
    int target=56;
    cout<<"Element found at "<<bianrySearch(arr,target);

}
