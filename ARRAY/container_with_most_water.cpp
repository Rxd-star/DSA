#include<bits/stdc++.h>
using namespace std;
int container(vector<int>arr){
    int st=0, end=arr.size()-1;
    int maxwater=0;
    while(st<end){
        int height=min(arr[st],arr[end]);
        int width=end-st;
        int area=height*width;
        maxwater=max(maxwater,area);
        if(arr[st]<arr[end]){
            st++;
        }
        else{
            end--;
        }

    }
    return maxwater;

}
int main(){
    vector<int>arr={1,4,6,7};
    cout<<container(arr);
}