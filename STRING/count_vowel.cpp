#include<bits/stdc++.h>
using namespace std;
int countvowel(string s){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    return count;
}


int main(){
    string s="rm is good boy";
    cout<<countvowel(s)<<endl;
    
}