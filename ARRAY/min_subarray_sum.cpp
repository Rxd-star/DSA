#include<bits/stdc++.h>
using namespace std;
int min_subarray_sum(vector<int>arr){
    int curr_sum=0,minsum=INT_MAX;
    for(int i=0;i<arr.size();i++){
        curr_sum+=arr[i];
        minsum=min(minsum,curr_sum);

    }
    return minsum;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    cout<<min_subarray_sum(arr);
}