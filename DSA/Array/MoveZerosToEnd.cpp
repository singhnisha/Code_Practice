#include<iostream>
using namespace std;

// O(n)
void optimizedSol(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;    // count of non-zero numbers
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

// O(n^2)
int main(){
    int arr[] = {10, 5, 0, 0, 8, 0, 9, 0};
    int n = sizeof(arr)/sizeof(arr[0]),temp = 0;
    optimizedSol(arr,n);
    cout << endl;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            for(int j=i+1; j<n; j++){
                if(arr[j] != 0){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    cout << "result: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}