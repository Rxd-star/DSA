#include<bits/stdc++.h>
using namespace std;
vector<int> remove_consecutive(vector<int>&arr){
    stack<int>st;
    vector<int>res;
    for(int i:arr){
        while(st.empty()|| st.top()!=i){
            st.push(i);
            res.push_back(i);
        }
    }
    return res;
}
int main(){
    vector<int>arr={1,1,2,2,2,3,3,4,4,4,5};
    vector<int>ans=remove_consecutive(arr);
    for(int j:ans){
        cout<<j<<" ";
    }
    cout<<endl;
}