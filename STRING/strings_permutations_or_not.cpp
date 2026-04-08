#include<bits/stdc++.h>
using namespace std;
bool permutation_or_not(string s1,string s2){
    if(s1.size()!=s2.size()) return false;
    vector<int>count(256,0);
    for(int i=0;i<s1.size();i++){
        count[s1[i]]++;
    }
    for(char i:s2){
        count[i]--;
    }
    for(int val:count){
        if(val!=0) return false;
    }
    return true;
}
int main(){
    string s1="abcde";
    string s2="bcdew";
    cout<<(permutation_or_not(s1,s2)? "true":"false");
}