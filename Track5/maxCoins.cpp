class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int coins = 0, n = piles.size();
        for(int i = n - 2; i >= n/3; i -= 2){
            coins += piles[i];
        }
        
        return coins;
    }
};
