class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int num=x;
        int lastdigit=0;
        long long int sum=0;
        while(x != 0)
        {
            lastdigit=x%10;
            sum=sum * 10+lastdigit;
            x=x/10;
        }
        return sum == num;
    }
};