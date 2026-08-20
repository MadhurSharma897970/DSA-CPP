#include<iostream>
using namespace std;
#include<climits>

// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(int);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // int min=arr[0];
    // for(int i=1;i<size;i++){
    //     if(arr[i]<min) min=arr[i];
    // }
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int minIndex,maxIndex;

    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            minIndex=i;
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
            maxIndex=i;
        }
    }
    cout<<"The minimum number is: "<<smallest<<" at index "<<minIndex;
    cout<<"The maximum number is: "<<largest<<" at index "<<maxIndex;
}

