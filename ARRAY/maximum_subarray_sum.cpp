#include<bits/stdc++.h>
using namespace std;
int max_subarry(vector<int>arr){
    int currsum=0,maxsum=INT_MIN;
    for(int i=0;i<arr.size();i++){
        currsum+=arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0) currsum=0;
    }
    
    return maxsum;
}
int main(){
    vector<int>arr={1,3,4,5};
    cout<<max_subarry(arr);
}