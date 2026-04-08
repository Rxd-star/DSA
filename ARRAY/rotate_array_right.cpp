#include<bits/stdc++.h>
using namespace std;
vector<int> rotate_array_right(vector<int>&arr,int k){
    vector<int>temp;
    for(int i=arr.size()-k;i<arr.size();i++){
        temp.push_back(arr[i]);
    }
    for(int i=0;i<arr.size()-k;i++){
        temp.push_back(arr[i]);
    }
    return temp;
    
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int k=3;
    vector<int>res=rotate_array_right(arr,k);
    for(int i:res){
        cout<<i<<" ";
    }
}