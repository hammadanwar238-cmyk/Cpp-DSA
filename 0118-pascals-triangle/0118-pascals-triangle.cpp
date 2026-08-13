class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;

        for (int i = 1; i <= numRows; i++) {
            vector<int> temp;

            for (int j = 1; j <= i; j++) {

                if (j == 1 || j == i) {
                    temp.push_back(1);
                }
                else {
                    temp.push_back(vec[i - 2][j - 2] +
                                   vec[i - 2][j - 1]);
                }
            }

            vec.push_back(temp);
        }

        return vec;
    }
};