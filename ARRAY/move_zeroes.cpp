#include<bits/stdc++.h>
using namespace std;
void move_zeroes(vector<int>&arr){
    int st=0;
    int end=arr.size()-1;
    while(st<end){
        if(arr[st]==0){
            swap(arr[st],arr[end]);
            st++;
            end--;
        }
        else{
            st++;

        }
    }

}
int main(){
    vector<int>arr={0,1,0,2,2};
    move_zeroes(arr);
    for(int i:arr){
        cout<<i<<" ";
    }
}