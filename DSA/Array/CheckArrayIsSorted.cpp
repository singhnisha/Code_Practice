#include <iostream>
using namespace std;

// O(n)
// For single element or no element it directly returns true as it doesn't go inside for loop
bool checkSortedArray(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1])
           return false; 
    }
    return true;
}
int main(){
    int arr[]={8,10,10,12,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << checkSortedArray(arr,n);
    return 0;
}