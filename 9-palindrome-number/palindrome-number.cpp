class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0;
        int m = x;
        while(x>0){
         int lastdigit = x%10;
         reverse = reverse * 10 + lastdigit;
         x = x/10;
       
        }
        if(reverse==m){
            return true;
        }else{
            return false;
        }
    }
};