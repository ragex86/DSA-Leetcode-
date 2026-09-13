class Solution {
public:
    int trap(vector<int>& height) {
        int  n = height.size();
        int low = 1;
        int high = n-2;
        int lowmax = height[0];
        int highmax = height[n-1];
        int answer=0;
       while(low<=high){
        lowmax = max(lowmax,height[low]);
        highmax = max(highmax,height[high]);
        if(lowmax<highmax){
            answer+= lowmax - height[low];
            low++;
        }else{
            answer+= highmax -height[high];
            high--;
        }
        
       }
       return answer;

    }
};