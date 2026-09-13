class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate = 0;
        int missing = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
           int idx = abs(nums[i])-1;
           if(nums[idx]<0){
            duplicate = abs(nums[i]);
           }else{
            nums[idx] = -nums[idx];
           }
        }
        //missing number;
        for(int i = 0;i<n;i++){
            if(nums[i]>0){
              missing = i+1;
            }
        }
        return{duplicate,missing};
    }
};