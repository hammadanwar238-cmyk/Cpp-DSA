class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while(true){
            
            if(seen.count(n)) return false;
            seen.insert(n);
            int sum =0;
            while(n!=0){
                int dig= n%10;
                sum+= dig*dig;
                n/=10;
            }
            if(sum==1) return true;
            n =sum;
        } 
    }
};