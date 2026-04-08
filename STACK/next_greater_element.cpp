#include<bits/stdc++.h>
using namespace std;
vector<int> next_greater(vector<int>&arr){
    int n=arr.size();
    vector<int>result(n,-1);
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty()&& s.top()<=arr[i]){
            s.pop();
        }
        if(!s.empty()){
            result[i]=s.top();
        }
        else{
            result[i]=n;
        }
        s.push(arr[i]);
    }
    return result;
}
int main() {
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    vector<int> nge = next_greater(arr);

    cout << "Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\nNext Greater Elements: ";
    for (int x : nge) cout << x << " ";
    cout << endl;

    return 0;
}
