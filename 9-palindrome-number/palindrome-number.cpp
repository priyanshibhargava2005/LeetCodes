class Solution {
public:
    bool isPalindrome(int x) {
        int reversed=x;
        double rev=0;
        double r=0;
        if (x<0){
            return false;
        }
                while (reversed!=0){
                    r=reversed%10;
                    rev=rev*10+r;
                    reversed=reversed/10;
                }
                if (x==rev){
                    return true;
                }
                else{
                    return false;
                }
    }
};