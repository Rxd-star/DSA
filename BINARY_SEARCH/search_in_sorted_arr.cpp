#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>arr,int target){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;

}
int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target;

    cout << "Enter target element: ";
    cin >> target;

    int index = binary_search(arr, target);

    if(index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}