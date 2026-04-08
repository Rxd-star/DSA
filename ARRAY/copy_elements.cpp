#include<bits/stdc++.h>
using namespace std;
vector<int> copied(vector<int>arr){
    int n=arr.size();
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }
    return temp;
}
int main(){
    vector<int>arr={1,2,3,4};
    vector<int>res=copied(arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}