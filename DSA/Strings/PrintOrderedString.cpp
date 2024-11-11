#include<iostream>
using namespace std;

int main(){
    string s = "Geeksforgeeks";
    int count[26]={0};  //for 26 alphabets
    //First find the frequencies of individual charaters
    cout<<s.length() << endl;
    for(int i=0; i<s.length(); i++)
        count[s[i]-'a']++;  //s[i]=g, ASCII value of 'g' - 'a', will update respective count[] array index
    for(int i=0; i<26; i++){
        if(count[i]>0)
            cout << (char)(i+'a') << " - " << count[i] << endl;
    }
    return 0;
}