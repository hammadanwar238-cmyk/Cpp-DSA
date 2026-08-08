class Solution {
public:
    void getCombinations(int n, int open, int close, string &ans, vector<string> &vec){
        if(ans.size()==n*2){
            vec.push_back(ans);
            return;
        }
        if(open<n){
                ans.push_back('(');
                getCombinations(n, open+1, close, ans, vec);
                ans.pop_back();

        }if(close<open){
            
            ans.push_back(')');
            getCombinations(n, open, close+1, ans, vec);
            ans.pop_back();     
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> vec;
        string ans;
        getCombinations(n ,0, 0, ans, vec);
        return vec;
    }
};