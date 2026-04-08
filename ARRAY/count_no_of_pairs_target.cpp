#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countPairs(vector<int>& arr, int target) {
    unordered_map<int,int> freq;
    int count = 0;
    for(int num : arr) {
        int complement = target - num;
        if(freq[complement] > 0) {
            count += freq[complement];
        }
        freq[num]++;
    }
    return count;
}

int main() {
    vector<int> arr = {1, 5, 7, -1, 5};
    int target = 6;
    cout << "Number of pairs = " << countPairs(arr, target);
    return 0;
}