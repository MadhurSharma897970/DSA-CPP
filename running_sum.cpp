#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int>nums={1,2,3,4};
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        cout<<sum<<" ";
    }
    
}