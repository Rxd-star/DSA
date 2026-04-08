#include<bits/stdc++.h>
using namespace std;
int remove_dup(vector<int>arr){
    sort(arr.begin(),arr.end());
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    vector<int>arr={1,2,3,3,4};
    cout<<remove_dup(arr);
}