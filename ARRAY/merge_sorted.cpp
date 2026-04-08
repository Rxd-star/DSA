#include<bits/stdc++.h>
using namespace std;
void merge_sort(vector<int>&arr1,int n,int m ,vector<int>&arr2){
    int i=n-1;
    int j=m-1;
    int k=n+m-1;
    while(i>=0&&j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k]=arr1[i];
            k--;
            i--;

        }
        else{
            arr1[k]=arr2[j];
            k--;
            j--;
        }
    }
    while(j>=0){
        arr1[k]=arr2[j];
        k--;
        j--;

    }
}
int main(){
    vector<int>arr1={1,2,3,4,0,0,0};
    vector<int>arr2={5,6,7};
    int n=4;
    int m=3;
    merge_sort(arr1,n,m,arr2);
    for(int a:arr1){
        cout<<a<<" ";
    }
    cout<<endl;
}