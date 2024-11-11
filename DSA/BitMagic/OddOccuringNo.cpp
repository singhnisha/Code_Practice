#include<iostream>
using namespace std;

/*
Time Complexity: O(n^2)
Auxiliary Space: O(1)
*/
int oddNoTimesOccuringNumberNaiveSolu(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count%2 != 0){
            return arr[i];
        }
        count = 0;
    }
    return -1;
}

/*
Here ^ is the XOR operators;
Note :
1) x^0 = x
2) x^y=y^x (Commutative property holds)
3) (x^y)^z = x^(y^z) (Distributive property holds)
4) x^x=0
Using 1) and 4) to solve it. For example, 4^4 = 0, but 4^4^4 = 4^0 = 4
Time Complexity: O(n)
Auxiliary Space: O(1)
*/
int oddTimesOccuringNumberBitwiseSolu(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res ^ arr[i];
    }
    return res;
}

int main(){
    int arr[] = { 2, 3, 5, 4, 5, 2, 4,
                    3, 5, 2, 4, 4, 2 }; 
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << oddNoTimesOccuringNumberNaiveSolu(arr,n);
    cout << endl;
    cout << oddTimesOccuringNumberBitwiseSolu(arr,n);
    return 0;
}