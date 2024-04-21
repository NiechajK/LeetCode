class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp_1(nums);
        vector<int> temp_2(k);
        k = k % nums.size();
        for(int i = 0; i<k; i++){
            nums[i] = temp_1[nums.size()-k+i];
        }
        
        for(int j=k; j<nums.size(); j++){
            nums[j] = temp_1[j-k];
            //std::cout<<temp_1[j];
        }

    }
};