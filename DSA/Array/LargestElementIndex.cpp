#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,8,20,10};
    int res = 0, arr_size = sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<arr_size; i++){
        if(arr[i] > arr[res])
            res = i;
    }
    cout << res;
    return 0;
}