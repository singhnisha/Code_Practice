#include<iostream>
using namespace std;

// Time complexity: O(n)
// Space complexity: O(1)
void optimizedSolution(int arr[], int n){
    int res = 1;
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    for(int i=0; i<res; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Time complexity: O(n)
// Space complexity: O(n) -> temp[] array used
int main(){
    int arr[] = {10, 20, 20, 30, 30, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n],res=1;
    temp[0] = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[i-1]){
            temp[res] = arr[i];
            res++;
        }
    }
    optimizedSolution(arr,n);
    for(int i=0;i<res;i++){
        arr[i] = temp[i];
        cout << arr[i] << " ";
    }
    
    return 0;
}