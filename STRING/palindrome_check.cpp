#include<bits/stdc++.h>
using namespace std;
bool palindrome_check(string s){
    int st=0,end=s.size()-1;
    while(st<end){
      if(s[st]==s[end]) return true;
      else return false;
    }
    return true;
}
int main(){
    string s="racecar";
    cout<<palindrome_check(s);
}
// if it is said in question that it should not alphaneumaric then we shoud add condition