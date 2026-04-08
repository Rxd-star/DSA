#include<bits/stdc++.h>
using namespace std;
bool subarray(vector<int>arr,int k){
    unordered_set<int>mp;
    mp.insert(0);
    int curr_sum=0;
    for(int i=0;i<arr.size();i++){
        curr_sum+=arr[i];
        if(mp.find(curr_sum-k)!=mp.end()){
            return true;
        }
        mp.insert(curr_sum);

    }
    return false;
}
int main(){
    vector<int>arr={1,2,3,6};
    int k=122;
    cout<<(subarray(arr,k)?"true":"false");
}