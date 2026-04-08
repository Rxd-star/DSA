#include<bits/stdc++.h>
using namespace std;
int linearsearch(vector<int>arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,4,6};
    int target=6;
    cout<<linearsearch(arr,target);
}