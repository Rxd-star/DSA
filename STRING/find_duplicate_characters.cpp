#include<bits/stdc++.h>
using namespace std;
string duplicate_letter(string s){
    string res="";
    unordered_map<char,int>mp;
    for(char ch:s)
    {
        mp[ch]++;

    }
    for(auto c:mp){
        if(c.second>1){
            res+=c.first;

        }
    }
    return res;
    
    
}
int main(){
    string s="programming";
    cout<<duplicate_letter(s);
}