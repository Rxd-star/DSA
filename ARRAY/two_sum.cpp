#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

 vector<int>twosum(vector<int>& arr, int target) {
    unordered_map<int,int> freq;
    for(int i=0;i<arr.size();i++) {
        int complement = target - arr[i];
        if(freq.find(complement)!=freq.end()){
            return {freq[complement],i};

        }
        freq[arr[i]]=i;
        
    }
    return { };
}

int main() {
    vector<int> arr = {1, 5, 7, -1, 5};
    int target = 6;
    vector<int>ans= twosum(arr, target);
    for(int num:ans){
        cout<<num<<" ";
    }
    return 0;
}