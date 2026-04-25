#include<bits/stdc++.h>
using namespace std;
class solution{
    private:
    int reqd(vector<int>& arr,int cap){
        int load=0,day=1;
        for(int i=0;i<arr.size();i++){
            if(load+arr[i]>cap){
                day+=1;
                load=arr[i];
            }
            else{
                load+=arr[i];
            }
        }
        return day;
    }
    int sumw(vector<int>& arr){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return sum;
    }
    public:
    int capacity(vector<int>&arr,int days){
        int st=*max_element(arr.begin(),arr.end());
        int end=sumw(arr);
        while(st<=end){
            int mid=st+(end-st)/2;
           int reqdays= reqd(arr,mid);
            if(reqdays<=days){
                end=mid-1;;
            }
            else{
                st=mid+1;
            }

        }
        return st;
    }
};
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    solution sol;
    int ans=sol.capacity(arr,days);
    cout<<"the capacity is"<<endl;
    cout<<ans;

}