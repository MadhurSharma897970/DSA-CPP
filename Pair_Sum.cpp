#include<iostream>
#include<vector>
using namespace std;

// vector<pair<int,int>> Pair_sum(vector<int>nums,int size){
//     int target=13;
//     vector<pair<int,int>>ans;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(nums[i]+nums[j]==target){
//                 ans.push_back({i,j});
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int>nums={2,7,11,15};
//     vector<pair<int,int>> result=Pair_sum(nums,nums.size());
//     for(auto p:result){
//         cout<<p.first<<" "<<p.second;
//     }
// }

vector<pair<int,int>> Pair_sum(vector<int>nums,int size){
    int target=13;
    vector<pair<int,int>>ans;
    int left=0,right=size-1;
    while(left<right){
        int temp=nums[left]+nums[right];
        if(temp==target){
            ans.push_back({left,right});
        } else if(temp>target) right--;
        else left++;
    }
    return ans;
}

int main(){
    vector<int>nums={2,7,11,15};
    vector<pair<int,int>> result=Pair_sum(nums,nums.size());
    for(auto p:result){
        cout<<p.first<<" "<<p.second;
    }
}