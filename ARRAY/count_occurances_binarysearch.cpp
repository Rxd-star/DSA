#include<bits/stdc++.h>
using namespace std;
class Solution{
private:
 int first_occurance(vector<int>&arr,int target){
    int st=0,end=arr.size()-1,ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>target){
            end=mid-1;
            
        }
        else{
            st=mid+1;
        }
    }
    return ans;
 }
 int last_occurance(vector<int>&arr,int target){
    int st=0,end=arr.size()-1,ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            ans=mid;
            st=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
            
        }
        else{
            st=mid+1;
        }
    }
    return ans;
 }
 public:
int count_binarysearch(vector<int>&arr,int target){
    int first=first_occurance(arr,target);
    if(first==-1) return 0;
    int last=last_occurance(arr,target);
    return last-first+1;
}
};

    
int main(){
    vector<int>arr={1,2,3,3,4,4};
    int target=1;
    Solution sol;
    int res=sol.count_binarysearch(arr,target);
    cout<<res;
}