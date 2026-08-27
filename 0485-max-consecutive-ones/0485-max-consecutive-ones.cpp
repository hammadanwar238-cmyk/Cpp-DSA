class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int freq=0, maxfreq=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                freq +=1;
            }else{
                freq =0;
            }
            maxfreq=max(maxfreq,freq);
        }
        return maxfreq;
        
    }
};