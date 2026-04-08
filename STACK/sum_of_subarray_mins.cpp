#include<bits/stdc++.h>
using namespace std;
class solution{
private:
vector<int>ns(vector<int>&arr){
    int n=arr.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&  arr[st.top()] >= arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        else{
            ans[i]=n;
        }
        st.push(i);
    }
    return ans;
}
vector<int>ps(vector<int>&arr){
    int n=arr.size();
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&arr[st.top()]>arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(i);
    }
    return ans;
    
}
public:
int subarray_mins(vector<int>&arr){
    vector<int>pse=ps(arr);
    vector<int>nse=ns(arr);
    int sum=0;
    int mod = 1e9 + 7; 
    for(int i=0;i<arr.size();i++){
       int left=i-pse[i];
       int right=nse[i]-i;
       long long freq=left*right*1ll;
       int val = (freq*arr[i]*1LL) % mod;
            
        sum = (sum + val) % mod;
    }
    return sum;
}
};
int main(){
    vector<int>arr={3,1,2,5};
    solution sol;
    int ans=sol.subarray_mins(arr);
    cout<<ans<<endl;
}