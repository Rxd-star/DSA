#include<bits/stdc++.h>
using namespace std;
int longest_sub(string s){
    int l=0,maxlen=0;
    unordered_set<char> seen;
    for(int r=0;r<s.size();r++){
        while(seen.find(s[r])!=seen.end()){
            seen.erase(s[l]);
            l++;
        }
        seen.insert(s[r]);
        maxlen=max(maxlen,r-l+1);
    }
    return maxlen;
}
int main(){
    string s="abbbacababa";
    cout<<longest_sub(s);
}