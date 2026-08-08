class Solution {
public:
    void getAllCombinations(int n, int k, int idx, vector<int> &ans, vector<vector<int>> &combinations){
        if(ans.size()==k){
            combinations.push_back({ans});
            return;
        }
        for(int i=idx;i<=n;i++){
            ans.push_back(i);
            getAllCombinations(n, k, i+1, ans, combinations );
            ans.pop_back();
        }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> combinations;
        vector<int> ans;
        getAllCombinations(n, k, 1, ans, combinations );
        return combinations;
    }
};