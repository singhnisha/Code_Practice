#include<iostream>
using namespace std;

// Time Complexity: O(min(a,b))
int main(){
    int a,b,res=0;
    cin >> a >> b;
    res = min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            cout << res;
            break;
        }
        res--;
    }
    return 0;
}