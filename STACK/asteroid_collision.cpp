#include<bits/stdc++.h>
using namespace std;
vector<int>asteroid(vector<int>&arr){
    stack<int>st;
    bool destroyed=false;
    for(int num:arr){
        while(!st.empty()&&num<0&&st.top()>0){
            if(st.top()<-num){
                st.pop();
            }
            else if(st.top()==-num){
                st.pop();
            }
            destroyed=true;
            break;
        }
        if(!destroyed){
        st.push(num);
        }
    }
  vector<int>result(st.size());
   for(int i=st.size()-1;i>=0;i--){
    result[i]=st.top();
    st.pop();
    
}
return result;
}
int main(){
    vector<int>arr={10,2,-5};
    vector<int>res=asteroid(arr);
    for(int i:res){
        cout<<i<<" ";
    }
    cout<<endl;
}