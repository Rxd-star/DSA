#include<bits/stdc++.h>
using namespace std;
bool isomorphic(string s1,string s2){
    if(s1.size()<s2.size()) return false;
    unordered_map<char,int> mp;
    unordered_map<char,int>tp;
    for(int i=0;i<s1.size();i++){
        if(mp.find(s1[i])==mp.end()){
            mp[s1[i]]=i;

        }
        if(tp.find(s2[i])==tp.end()){
            tp[s2[i]]=i;
        }
        if(mp[s1[i]]!=tp[s2[i]]) return false;
    }
    return true;
}
int main(){
    string s1="add";
    string s2="bcc";
    cout<<isomorphic(s1,s2);
}