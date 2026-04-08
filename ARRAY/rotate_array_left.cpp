#include<bits/stdc++.h>
using namespace std;
vector<int> rotate_array(vector<int>&arr,int k){
    vector<int>temp;
    for(int i=k;i<arr.size();i++){
        temp.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
        temp.push_back(arr[i]);
    }
    return temp;
    
}
int main(){
    vector<int>arr={1,2,3,4};
    int k=2;
    vector<int>res=rotate_array(arr,k);
    for(int i:res){
        cout<<i<<" ";
    }
}