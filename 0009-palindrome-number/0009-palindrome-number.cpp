class Solution {
public:
    bool isPalindrome(int x) {
        int ogNumber = x;
        long int reverse = 0;
        while(x>0){
            int rem = x % 10;
            reverse = reverse * 10 + rem;
            x = x / 10;
        }  
        if(reverse == ogNumber){
            return true;
        }else{
            return false;
        }
    }
};