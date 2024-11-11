#include<iostream>
using namespace std;

/*
Keep dividing the number by two, i.e, do n = n/2 iteratively. In any iteration, if n%2 
becomes non-zero and n is not 1 then n is not a power of 2. If n becomes 1 then it is a power of 2.
Time Complexity: O(log N)
Auxiliary Space: O(1) 
*/
bool isPowerOfTwo(int n){
    if(n==0)
        return false;
    while(n!=1){
        if(n%2 != 0)
            return false;
        n /= 2;
    }
    return true;
}

/*
All power of two numbers has only a one-bit set. 
So count the no. of set bits and if you get 1 then the number is a power of 2
Time complexity: O(log N)
Auxiliary Space: O(1)
*/
bool isPowerOfTwoUsingBitwise(int n){
    int count = 0;
    while(n>0){
        if((n&1)==1)
            count++;
        n = n >> 1;
    }
    if(count==1)
        return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    bool ret = isPowerOfTwo(n);
    if(ret)
        cout << "Yes\n";
    else
        cout << "No\n";
    ret = isPowerOfTwoUsingBitwise(n);
    if(ret)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}