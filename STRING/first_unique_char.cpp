#include<bits/stdc++.h>
using namespace std;
string first_unique_char(string s){
    unordered_map<char,int> mp;
    string res="";
    for(char ch:s){
        mp[ch]++;
    }
    for(auto a:mp){
        if(a.second==1){
            res+=a.first;
            break;
        }
    }
    return res;
}
int main(){
    string s="aba";
    cout<<first_unique_char(s);
}