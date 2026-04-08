#include<bits/stdc++.h>
using namespace std;
void dnf(vector<int>&arr){
    int st=0,mid=0,end=arr.size()-1;
    while(mid<end){
        if(arr[mid]==0){
            swap(arr[mid],arr[st]);
            mid++;
            st++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[end]);
            mid++;
            end--;
        }
    }
}
int main(){
    vector<int>arr={0,1,0,2};
    dnf(arr);
    for(int i:arr){
        cout<<i<<" ";
    }
}