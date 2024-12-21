#include<iostream>
using namespace std;

// O(n)
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int temp = arr[0], i;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[i-1] = temp;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}