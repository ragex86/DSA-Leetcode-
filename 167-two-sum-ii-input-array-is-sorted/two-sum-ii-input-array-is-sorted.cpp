class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int currsum = 0;
        int st = 0;
        int end = numbers.size()-1;

        while(st<end){
            currsum = numbers[st]+numbers[end];

            if(currsum == target){
               
                return {st+1,end+1};
            }
            else if(currsum<target){
                st++;
            }else{
                end--;
            }
        }
        return {st+1,end+1};
    }
};