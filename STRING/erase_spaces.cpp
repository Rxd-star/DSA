#include<bits/stdc++.h>
using namespace std;
string remove_spaces(string s){
    string res=" ";
    for(char ch:s){
        if(ch==' '){
            continue;
        }
        else{
            res+=ch;
        }
    }
    return res;

}
int main(){
    string s="my namme";
    cout<<remove_spaces(s);
}