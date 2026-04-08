#include<bits/stdc++.h>
using namespace std;
vector<int> anagrams(string s,string t){
    vector<int>ans;
    if(s.size()<t.size()) return ans;
    unordered_map<char,int>scount,tcount;
    for(char ch:t){
        tcount[ch]++;
    }
    int window=t.size();
    for(int i=0;i<s.size();i++){
        scount[s[i]]++;
        if(i>=window){
            char left=s[i-window];
            
             scount[left]--;
            if(scount[left]==0){
                scount.erase(left);
            }

        }
        if(scount==tcount){
            ans.push_back(i-window+1);
        }8
    }
    return ans;
}
int main() {
    string s = "cbaebabacd";
    string t = "abc";

    vector<int> result = anagrams(s, t);

    cout << "Anagram indices: ";
    for(int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
