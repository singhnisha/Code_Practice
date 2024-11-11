#include<iostream>
#include<algorithm>
using namespace std;
// O(n) O(n)
bool isPal(string &str){
    string s1 = str;
    reverse(s1.begin(),s1.end());
    return (str == s1);
}

// O(n) O(1)
bool isPal2(string &str){
    int start = 0;
    int end = str.length()-1;
    while(start<=end){
        if(str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}
int main(){
    string s,s1;
    cin >> s;
    if(isPal2(s))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}