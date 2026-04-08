#include<bits/stdc++.h>
using namespace std;
string longest_prefix(vector<string>&s){
    sort(s.begin(),s.end());
    string first=s[0];
    string last=s[s.size()-1];
    string ans=" ";
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]!=last[i]) return ans;
        else ans+=first[i];
    }
    return ans;
}
int main(){
    vector<string>s={"flower","flyover","fly"};
    cout<<longest_prefix(s);
}