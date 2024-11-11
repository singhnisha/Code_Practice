// s1 and s2 string having same letters and count of letters may or may not be in same sequence

#include<iostream>
#include<algorithm>
#define CHAR 256
using namespace std;

// O(nlogn) O()
bool isAnagram(string &s1, string &s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}

//Efficient method
// O(n+CHAR) O(CHAR)
bool isAnagram2(const string &s1, const string &s2){
    int count[CHAR] = {0};
    if(s1.length() != s2.length())
        return false;
    for(int i=0; i<s1.length(); i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0; i<CHAR; i++)
        if(count[i] != 0)
            return false;
    return true;
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    if(isAnagram2(s1,s2))
        cout << "Yes\n";
    else
        cout << "No\n"; 
    return 0;
}