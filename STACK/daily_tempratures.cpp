#include<bits/stdc++.h>
using namespace std;
class solution{
public:
vector<int>daily_tempratures(vector<int>arr){
    int n=arr.size();
    stack<int>st;
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        while(!st.empty()&& arr[i]>arr[st.top()]){
            int previdx=st.top();
            st.pop();
            ans[previdx]=i-previdx;
        }
        st.push(i);
    }
    return ans;
}
};
int main(){
    vector<int>arr={74,75,76,87,31,97};
    solution sol;
    vector<int>ans=sol.daily_tempratures(arr);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;


}