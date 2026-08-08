class Solution {
public: 
    void allcombination(vector<int>& candidate, int target, int idx, int sum, vector<int> &ans, vector<vector<int>> &combinations ){
        if(sum > target) return;
        if(sum==target){
            combinations.push_back({ans});
            return;
        }
        for(int i = idx; i < candidate.size(); i++) {

            // skip duplicate choices at the same level
            if(i > idx && candidate[i] == candidate[i-1])
                continue;

            // choose
            ans.push_back(candidate[i]);

            // move forward because each number can be used only once
            allcombination(candidate, target, i+1,
                        sum + candidate[i],
                        ans, combinations);

            // backtrack
            ans.pop_back();
        }
    
        
        /*ans.push_back(candidate[idx]);
        allcombination(candidate, target, idx+1, sum+candidate[idx], ans, combinations );
        ans.pop_back();
        int i=idx+1;
        while(idx<candidate.size() && candidate[i]==candidate[i-1]){
            i++;
        }
        allcombination(candidate, target, i, sum+candidate[i], ans, combinations );*/

        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidate, int target) {
        sort(candidate.begin(),candidate.end());
        vector<vector<int>> combinations;
        vector<int> ans;
        allcombination(candidate, target, 0, 0, ans, combinations);
        return combinations; 
    }
};