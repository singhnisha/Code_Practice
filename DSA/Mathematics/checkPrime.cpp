#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    for(i=2; i<=n; i++){
        if(n%i==0)
            break;
    }
    if(i==n)
        cout << "Yes Prime\n";
    else
        cout << "Not Prime\n";
    return 0;
}