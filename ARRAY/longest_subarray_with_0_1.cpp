#include<bits/stdc++.h>
using namespace std;
int longest_subarry(vector<int>arr){
    unordered_map<int,int> mp;
    int sum=0;
    int maxlen=0;
    for(int i=0;i<arr.size();i++){
        sum+=(arr[i]==0?-1:1);
        if(sum==0){
            maxlen=i+1;
        }
        else if(mp.find(sum)!=mp.end()){
            maxlen=max(maxlen,i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }
    }
    return maxlen;
}
int main(){
    vector<int>arr={0,1,0,1,0};
    cout<<longest_subarry(arr);
}