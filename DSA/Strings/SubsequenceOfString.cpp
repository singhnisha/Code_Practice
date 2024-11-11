#include<iostream>
using namespace std;
#define CHAR 256;
// O(n+m) O(1)
bool isSubsequenceStr(const string &s1, const string &s2, int n, int m){
    int i,j;
    if(n<m)
        return false;
    // Check till end of both the string is reached, s2 is substring
    for(i=0,j=0; i<n && j<m; i++)
        if(s1[i] == s2[j])
            j++;
    return (j==m);
}

// O(n+m) O(n+m)
bool isSubsequenceStr2(const string &s1, const string &s2, int n, int m){
    if(m==0)
        return true;
    if(n==0)    //Can't move to top, else it will be dependented on only n value then return finally
        return false;
    if(s1[n-1] == s2[m-1]){
        return isSubsequenceStr2(s1, s2, n-1, m-1);
    } else {
        return isSubsequenceStr2(s1, s2, n-1, m);
    }
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int m = s2.length();
    if(isSubsequenceStr2(s1,s2,n,m))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}