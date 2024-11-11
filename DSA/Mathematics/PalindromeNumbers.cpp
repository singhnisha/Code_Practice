#include<iostream>
using namespace std;

int main(){
    int n,res=0;
    cin >> n;
    int temp = n;
    while(n){
        res=res*10+n%10;
        n/=10;
    }
    if(temp==res){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}