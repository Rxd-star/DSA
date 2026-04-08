#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>arr){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];

    }
    int total=(n + 1) * (n + 2) / 2;
    return total-sum;

}
int main(){
    vector<int>arr={2};
    cout<<missing(arr);
}