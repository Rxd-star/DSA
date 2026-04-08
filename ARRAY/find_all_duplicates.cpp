#include<bits/stdc++.h>
using namespace std;
vector<int> duplicates(vector<int>arr){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==arr[i-1]){
            ans.push_back(arr[i]);
        }
    }
    return ans;

}
int main(){
    vector<int>arr={1,1,2,3,3,4};
    vector<int>res=duplicates(arr);
    for(int i:res){
        cout<<i<<" ";
    }
}


