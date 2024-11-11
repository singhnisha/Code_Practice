/*If we look carefully, all the divisors are present in pairs. For example if n = 100, then the various pairs of divisors are: (1,100), (2,50), (4,25), (5,20), (10,10). We, however, have to be careful if there are two equal divisors as in the case of (10, 10). In such case, we’d print only one of them. 

Using this fact we could speed up our program significantly. Instead of iterating from 1 to N, we only need to iterate from 1 to sqrt(N). This is because if a number N has a factor, say A then either A or (N/A) will always lie in the range [1, sqrt(N)]. 

So, we can find all the factors of N till sqrt(N): f1, f2, f3 …. fn, then all factors which are greater than sqrt(N) will be N/f1, N/f2, N/f3 ….. N/fn. We need to be careful when N is a perfect square because then we will have duplicate occurrence of sqrt(N).
*/

#include<iostream>
using namespace std;

void printDivisor(int n){
    // Note that this loop runs till square root
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            // If divisors are equal, print only one
            if(n/i==i)
                cout << i << " ";
            else    // Otherwise print both
                cout << i << " " << n/i << " ";
        }
    }
}

int main(){
    int n;
    cin >> n;
    printDivisor(n);
    return 0;
}