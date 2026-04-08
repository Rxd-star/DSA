#include<bits/stdc++.h>
using namespace std;
int maxproduct(vector<int>arr){
    int maxprod=arr[0];
    int minprod=arr[0];
    int maxproduct=INT_MIN;
    int minproduct=INT_MAX;
    for(int i=1;i<arr.size();i++){
        if(arr[i]<0){
            swap(maxprod,minprod);
        }
        maxprod*=arr[i];
        minprod*=arr[i];
        maxproduct=max(maxproduct,maxprod);
        minproduct=min(minproduct,minprod);
    
    }
    return maxproduct;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    cout<<maxproduct(arr);
}