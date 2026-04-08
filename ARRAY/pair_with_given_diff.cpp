#include<bits/stdc++.h>
using namespace std;
 bool isvalidpair(vector<int>arr,int target){
    sort(arr.begin(),arr.end());
    int i=0,j=1;
    while(i<arr.size()-1 && j<arr.size()){
        if(arr[j]-arr[i]==target && i!=j) {
            return true;
        }
        else if(arr[j]-arr[i]<target){
            
            j++;
        }
        else{
            i++;
        }
    }
    return false;

}
int main(){
    vector<int>arr={1,5,6,4,7};
    int target=3;
    cout<<(isvalidpair(arr,target)? true:false);
}