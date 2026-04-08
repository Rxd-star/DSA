#include<bits/stdc++.h>
using namespace std;
pair<int,double>maxAvg(vector<int>&arr,int k){
    if(arr.size()<k) return {-1,0};
    int sum=0,maxsum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxsum=sum;
    int startindex=0;
    for(int i=k;i<arr.size();i++){
        sum+=arr[i]-arr[i-k];
        if(sum>maxsum){
            maxsum=sum;
            startindex=i-k+1;
        }
        
    }
    double maxavg = (double)maxsum / k;
    
    return{startindex,maxavg};
}
int main() {
    vector<int> arr = {1, 12, -5, -6, 50, 3};
    int k = 4;
    auto result = maxAvg(arr, k);
    cout << "Max average subarray starts at index " << result.first
         << " with average " << result.second << endl;
    return 0;
}
