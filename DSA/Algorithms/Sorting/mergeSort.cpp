#include<iostream>
using namespace std;
void merge(int arr[], int const left, int const mid, int const right){
    int const leftArrSize = mid - left+1;
    int const rightArrSize = right - mid;

    //temporary array
    auto *leftArr = new int[leftArrSize],
        *rightArr = new int[rightArrSize];

    //copy data to temp arrs
    for(auto i=0; i<leftArrSize; i++)
        leftArr[i] = arr[left+i];
    for(auto j=0; j<rightArrSize; j++)
        rightArr[j] = arr[mid+1+j];
    
    auto i=0,j=0;
    int indexOfMergeArr = left;
    for(i=0,j=0; i<leftArrSize && j<rightArrSize; i++,j++){
        if(leftArr[i]<=rightArr[j]){
            arr[indexOfMergeArr]=leftArr[i];
            i++;
        } else {
            arr[indexOfMergeArr]=rightArr[j];
            j++;
        }
        indexOfMergeArr++;
    }

    //copy remaining elements
    while(i<leftArrSize){
        arr[indexOfMergeArr]=leftArr[i];
        i++;
        indexOfMergeArr++;
    }
    while(j<rightArrSize){
        arr[indexOfMergeArr]=rightArr[j];
        j++;
        indexOfMergeArr++;
    }
    delete[] leftArr;
    delete[] rightArr;
}
void mergesort(int arr[],int const start, int const end){
    if(start>=end)
        return;
    int mid = start + (end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
void printArr(int arr[], int arr_size){
    for(auto i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {-2,-6,11,5,9,7,15};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,arr_size-1);
    printArr(arr,arr_size);
    return 0;
}