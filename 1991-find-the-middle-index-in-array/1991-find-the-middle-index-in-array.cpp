
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        for(int i=0; i< nums.size();i++){
            int left_sum=0;
            int right_sum=0;
            for(int j=0; j<i; j++){
                left_sum += nums[j]; 
            }
            for(int k=i+1; k<nums.size();k++){
                right_sum += nums[k];
            }
            if(left_sum==right_sum){
                return i;
            }
            
        }
        return -1;
    }
};