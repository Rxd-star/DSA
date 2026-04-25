#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
         int low = 0, high = 0;
        for (int num : nums) {
            low = max(low, num);
            high += num;
        }
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isFeasible(nums, mid, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    
    bool isFeasible(vector<int>& nums, int maxSum, int k) {
        int count = 1;
        int currentSum = 0;
        for (int num : nums) {
            currentSum += num;
            if (currentSum > maxSum) {
                count++;
                currentSum = num;
                if (count > k) return false;
            }
        }
        return true;
    }
};
int main(){
    vector<int>nums={7,2,5,8,10};
    int k=2;
    Solution sol;
    int ans=sol.splitArray(nums,k);
    cout<<ans;
}