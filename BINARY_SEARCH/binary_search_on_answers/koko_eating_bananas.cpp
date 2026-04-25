#include <bits/stdc++.h>
using namespace std;
class solution {
private:
    int totalh(vector<int>& piles, int speed) {
        int totalhour = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalhour += ceil((double)piles[i] / (double)speed);
        }
        return totalhour;
    }

    int maxhour(vector<int>& piles) {
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

public:
    int koko_eating(vector<int>& piles, int h) {
        int st = 1, end = maxhour(piles);
        while (st <= end) {
            int mid = st + (end - st) / 2;
            int total = totalh(piles, mid);
            if (total <= h) {      
                end = mid - 1;   
            } else {
                st = mid + 1;    
            }
        }
        return st;
    }
};

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int hourly = 8;
    solution sol;
    int ans = sol.koko_eating(piles, hourly);
    cout<<"minimum speed "<<ans; 
}

