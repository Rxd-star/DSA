#include<bits/stdc++.h>
using namespace std;
int duplicate(vector<int>arr){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]==arr[i+1]){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,2,3,4};
    cout<<duplicate(arr);
}