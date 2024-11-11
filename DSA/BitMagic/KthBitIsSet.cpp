#include<iostream>
using namespace std;

// O(1)
int main(){
    int n,k;
    cin >> n >> k;
    if(n&(1<<k))
        cout << "Yes\n";
    else
        cout << "No\n";
    if((n>>k)&1)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}