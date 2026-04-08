#include<bits/stdc++.h>
using namespace std;
int second_largest(vector<int>arr){
    int first=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && first!=arr[i]){
            second=arr[i];
        }
    }
    return second;
}
int main(){
    vector<int>arr={1,3,5,7};
    cout<<second_largest(arr);
}