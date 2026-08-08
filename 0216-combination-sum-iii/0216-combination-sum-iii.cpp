class Solution {
public:
    void getAllCombinations(int k, int n, int idx, int sum, vector<int> &ans, vector<vector<int>> &allCombinations){
        vector<int> vec={1,2,3,4,5,6,7,8,9};
        if(ans.size()==k){
            if(sum==n){
                allCombinations.push_back({ans});
                return;
            }
        }
        for(int i=idx; i<9;i++){
            ans.push_back(vec[i]);
            getAllCombinations(k, n, i+1, sum+vec[i], ans, allCombinations);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> allCombinations;
        vector<int> ans;
        getAllCombinations(k, n, 0, 0, ans, allCombinations);
        return allCombinations; 
    }
};