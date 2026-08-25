#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int>arr={2, 2, 1, 1, 1, 2, 2};
    int n=arr.size();
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            cout<<"Majority element is: "<<arr[i];
            return 0;
        }
    }

}