class Solution {
public: 
    void allcombination(vector<int>& candidate, int target, int idx, int sum, vector<int> &ans, vector<vector<int>> &combinations ){
        if(sum > target) return;
        if(sum==target){
            combinations.push_back({ans});
            return;
        }
        for(int i=idx;i<candidate.size();i++){
            ans.push_back(candidate[i]);
            allcombination(candidate, target, i, sum+candidate[i], ans, combinations );
            ans.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidate, int target) {
        vector<vector<int>> combinations;
        vector<int> ans;
        allcombination(candidate, target, 0, 0, ans, combinations);
        return combinations; 
    }
};