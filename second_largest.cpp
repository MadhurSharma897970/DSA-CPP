#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={10,5,8,20,15};
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int x:arr){
        if(x>largest){
            second_largest=largest;
            largest=x;
        }
        else if(x>second_largest && x!=largest){
            second_largest=x;
        }
    }
    cout<<"The second largest element is: "<<second_largest;
    return 0;
}