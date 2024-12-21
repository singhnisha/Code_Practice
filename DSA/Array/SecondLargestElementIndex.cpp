#include<iostream>
using namespace std;

// O(n)
int main(){
    int arr[] = {20,10,20,8,12,5,10};
    int res=-1, n = sizeof(arr)/sizeof(arr[0]),largest=0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        } else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res])
                res = i;
        }
    }
    cout << res << endl;
}