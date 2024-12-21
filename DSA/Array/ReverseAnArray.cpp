#include<iostream>
using namespace std;

// O(n) time complexity
// O(1) auxillary space start,end,n,temp apart from input arr[]
int main(){
    int arr[] = {10,5,7,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start=0, end=n-1;
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}