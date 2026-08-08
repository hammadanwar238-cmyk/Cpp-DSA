class Solution {
public:
    bool isPalindrome(string st){
        string rev= st;
        reverse(rev.begin(),rev.end());
        if(st==rev) return true;
        return false;
    } 
    void getAllParts(string s,int idx, vector<string> &ans, vector<vector<string>> &allParts){
        if(idx==s.size()){
            allParts.push_back(ans);
            return;
        }
        for(int i=idx; i<s.size();i++){
            string st= s.substr(idx,i-idx+1);
            if(isPalindrome(st)){
                ans.push_back(st);
                getAllParts(s, i+1, ans, allParts);
                ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> allParts;
        vector<string> ans;
        getAllParts(s, 0, ans, allParts);
        return allParts;
    }
};