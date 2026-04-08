#include<bits/stdc++.h>
using namespace std;
int count_occurances(vector<int>arr,int target){
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int>arr={1,1,1,3,4};
    int target=1;
    cout<<count_occurances(arr,target);
}