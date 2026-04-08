#include<bits/stdc++.h>
using namespace std;
int max_element(vector<int>arr){
    int n=arr.size();
    int max_val=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max_val){
            max_val=arr[i];
        }
    }
    return max_val;
}
int main(){
    vector<int>arr={7,8,9,10};
    cout<<max_element(arr);
}