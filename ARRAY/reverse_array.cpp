#include<bits/stdc++.h>
using namespace std;
void reversed(vector<int>&ans){
    int st=0;
    int end=ans.size()-1;
    while(st<end){
        swap(ans[st],ans[end]);
        st++;
        end--;
    }

}
int main(){
    vector<int>ans={1,2,3,4};
    int n=ans.size();
    reversed(ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}