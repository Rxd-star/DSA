#include<bits/stdc++.h>
using namespace std;
string reverseword(string s){
    string res=" ";
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        string word=" ";
        while(i<s.size()&& s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            res+=" "+word;
        }
    
    }
    return res.substr(1);
    


}
int main(){
    string s="my name";
    cout<<reverseword(s);
}