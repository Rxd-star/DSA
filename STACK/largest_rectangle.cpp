#include<bits/stdc++.h>
using namespace std;
class solution{
private:
vector<int>pse(vector<int>&arr){
    int n=arr.size();
    vector<int>ans(n,-1);
    stack<int>s;
    for(int i=0;i<arr.size();i++){
        while(!s.empty()&& arr[s.top()]>=arr[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=s.top();
        }
        s.push(i);
    }
    return ans;
}
vector<int>nse(vector<int>&arr){
    int n=arr.size();
    vector<int>ans(n,-1);
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty()&& arr[s.top()]>=arr[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=s.top();
        }
        else{
            ans[i]=n;
        }
        s.push(i);
    }
    return ans;
}
public:
int largest_histogram(vector<int>arr){
    vector<int>left=pse(arr);
    vector<int>right=nse(arr);
    int maxarea=0;
    for(int i=0;i<arr.size();i++){
        int height=arr[i];
        int width=right[i]-left[i]-1;
        int area=height*width;
        maxarea=max(maxarea,area);
    }
    return maxarea;
}
};
int main() {
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    solution sol;
    cout << "Largest Rectangle Area: " << sol.largest_histogram(arr) << endl;
    return 0;
}
