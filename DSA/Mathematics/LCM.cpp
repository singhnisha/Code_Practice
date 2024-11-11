#include<iostream>
using namespace std;

int main(){
    int a,b,res=0;
    cin >> a >> b;
    res=max(a,b);
    while(1){
        if(res%a==0 && res%b==0){
            cout << res;
            break;
        }
        res++;
    }
    return 0;
}