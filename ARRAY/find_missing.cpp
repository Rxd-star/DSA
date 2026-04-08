#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>arr){
    sort(arr.begin(),arr.end());
    if(arr[0]!=1){
        return 1;
    }
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i+1]==arr[i]+1){
            continue;
        }
        else{
            return arr[i]+1;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={2};
    cout<<missing(arr);
}