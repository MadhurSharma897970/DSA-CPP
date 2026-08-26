#include<iostream>
using namespace std;
#include<vector>

int ans(vector<int>nums,int target){
    int n=nums.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target) return mid;
        if(nums[start]<=nums[mid]){ //left part sorted
            if(nums[start]<=target && target<nums[mid]){
                end=mid-1;
            } else start=mid+1;
        } else{ //right part sorted
            if(nums[mid]<target && target<=nums[end]){
                start=mid+1;
            } else end=mid-1;
        }
    }
    return -1;

}

int main(){
    vector<int>nums={4,5,6,7,0,1,2};
    int target=0;
    cout<<"Index is: "<<ans(nums,target);
   
}