#include<iostream>
using namespace std;

const int CHAR = 256;

// O(n^2) O(1)
int findLeftmostDuplicateChar(const string &s){
    for(int i=0; i<s.length(); i++)
        for(int j=i+1; j<s.length(); j++)
            if(s[i]==s[j])
                return i;
    return -1;
}

// O(n) O(CHAR)
int findLeftmostDuplicateChar2(const string &s){
    int count[CHAR] = {0};
    for(int i=0; i<s.length(); i++)
        count[s[i]]++;
    for(int i=0; i<s.length(); i++)
        if(count[s[i]] > 1)
            return i;
    return -1;
}

// O(n) O(CHAR)
int findLeftmostDuplicateChar3(const string &s){
    int fIndex[CHAR];
    fill(fIndex,fIndex+CHAR,-1);
    int res = INT32_MAX;
    for(int i=0; i<s.length(); i++){
        int f = fIndex[s[i]];
        if(f == -1)
            fIndex[s[i]] = i;
        else
            res = min(res,f);
    }
    return(res==INT32_MAX)?-1:res;
}

int main(){
    string s;
    cin >> s;
    int res = findLeftmostDuplicateChar3(s);
    cout << res << endl;
    return 0;
}