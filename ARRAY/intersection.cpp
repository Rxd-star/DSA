#include<bits/stdc++.h>
using namespace std;
vector<int>intersectionofarray(vector<int>arr1,vector<int>arr2){
    vector<int>result;
    int i=0,j=0;
    sort(arr1.begin(),arr1.end());
     sort(arr2.begin(),arr2.end());

    while(i<arr1.size()&& j<arr2.size()){
        if(arr1[i]==arr2[j]){
            if(result.empty()||result.back()!=arr1[i]){
            result.push_back(arr1[i]);}
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    return result;
}
int main(){
    vector<int>arr1={1,2,2,3,4};
    vector<int>arr2={1,2,2,3,5};
    vector<int>ans=intersectionofarray(arr1,arr2);
    for(int i:ans){
        cout<<i<<" ";
    }
}