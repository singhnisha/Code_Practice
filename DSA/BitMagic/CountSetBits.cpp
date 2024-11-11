#include<iostream>
using namespace std;

/*
Time Complexity: O(log n) - rotation = no. of bits for representing number
Auxiliary Space: O(1)
*/
int main(){
    unsigned int n, count = 0;;
    cin >> n;
    while(n){
        count += n&1;
        n >>= 1;
    }
    cout << count;
    return 0;
}