#include<bits/stdc++.h>
using namespace std;
int min_element(vector<int>arr){
    int n=arr.size();
    int min_val=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min_val){
            min_val=arr[i];
        }
    }
    return min_val;
}
int main(){
    vector<int>arr={7,8,9,10};
    cout<<min_element(arr);
}