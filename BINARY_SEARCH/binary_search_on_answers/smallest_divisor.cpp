#include<bits/stdc++.h>
using namespace std;
class solution{
    private:
    int divisor(vector<int>&arr,int i,int threshold){
        long long sum=0;
        for(int j=0;j<arr.size();j++){
            sum+=ceil((double)arr[j]/i);
            if(sum>threshold){
                break;
            }
        }
        return (sum<=threshold)? i:-1;
    }
    public:
    int smallest_divisor(vector<int>&arr,int threshold){
        int st=0;
        int end=*max_element(arr.begin(),arr.end());
        while(st<=end){
            int mid=st+(end-st)/2;
            if(divisor(arr,mid,threshold)==-1){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return st;
    }
};
int main(){
    vector<int>arr={1,2,5,9};
    int threshold=6;
    solution sol;
    int ans=sol.smallest_divisor(arr,threshold);
    cout<<ans;
}
