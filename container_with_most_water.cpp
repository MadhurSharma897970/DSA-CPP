#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    int n=height.size();
    int max_water=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int width=j-i;
            int min_height=min(height[i],height[j]);
            int area=width*min_height;
            max_water=max(max_water,area);
        }
    }
    cout<<"Maximum water capacity: "<<max_water;
}