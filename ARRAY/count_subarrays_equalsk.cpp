#include<bits/stdc++.h>
using namespace std;
int count_subarray(vector<int>arr,int k){
    int count=0;
    unordered_map<int,int>mp;
    mp[0]=1;
    int curr_sum=0;
    for(int i=0;i<arr.size();i++){
        curr_sum+=arr[i];
        if(mp.find(curr_sum-k)!=mp.end()){
            count+=mp[curr_sum-k];
        }
        mp[curr_sum]++;

    }
    return count;
}
int main(){
    vector<int>arr={1,2,3,6};
    int k=6;
    cout<<count_subarray(arr,k);
}
