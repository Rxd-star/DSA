#include<bits/stdc++.h>
using namespace std;
int count_subarrays(vector<int>arr,int k){
    int count=0;
    unordered_map<int,int> mp;
    int sum=0;
    mp[0]=1;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
        int rem = ((sum % k) + k) % k;
        if(mp.find(rem)!=mp.end()){
            count+=mp[rem];
        }
        mp[rem]++;

    }
    return count;

}
int main(){
    vector<int>arr={1,2,4,5,6};
    int k=4;
    cout<<count_subarrays(arr,k);
}