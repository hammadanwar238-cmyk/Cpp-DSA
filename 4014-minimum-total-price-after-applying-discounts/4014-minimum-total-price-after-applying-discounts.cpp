class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int p =prices.size()-1;
        int d =discounts.size()-1;
        double ans=0;
        while(p>=0 && d>=0){
            ans +=prices[p]*(100-discounts[d])/100.0;
            p--;
            d--;
        }
        while(p>=0){
            ans+=prices[p];
            p--;
        }
        return ans;
    }
};