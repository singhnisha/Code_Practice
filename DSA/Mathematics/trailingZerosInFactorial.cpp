#include<iostream>
using namespace std;

// If we have a pair of 2*5 in it's factorial then number is going to end with one 0's
// So if factorial has multiple of 5 then we are going to have that many 0's
// Be careful during 25, 125 etc number which has 5 two times or more in it 
// so "5^k <= n" -->> "k <= log(5)n"
// n/5, n/125, ... count should give the result
int findTrailingZero(int n){
    int res = 0;
    for(int i=5; i<=n; i*=5){
        res = res + n/i;
    }
    return res;
}

int main(){
    int n, res, fact=1, count=0;
    cin >> n;
    for(int i=2; i<=n; i++){
        fact = fact * i;
    }
    cout << fact << endl;
    while(fact%10==0){
            count++;
            fact/=10;
    }
    cout << count << endl;
    int ret = findTrailingZero(n);
    cout << ret;
    return 0;
}