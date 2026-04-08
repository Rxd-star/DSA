#include<bits/stdc++.h>
using namespace std;
int longest_subaray_incresing(vector<int>arr){
    if(arr.size()==0) return 0;
    int maxlen=1;
    int currsum=1;
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]<arr[i]){
            currsum++;
            maxlen=max(maxlen,currsum);

        }
        else{
        currsum=1;
        }
    }
    return maxlen;

}
int main(){
    vector<int>arr={1,3,5,2,4};
    cout<<longest_subaray_incresing(arr);
}