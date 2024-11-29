class Solution {
public:
    
    bool calculatePower(int n,long long int sum)
    {
        if(sum == n)
        {
            return true;
        }else if(sum > n) return false;
        return calculatePower(n,sum*4);
    }
    bool isPowerOfFour(int n) {
         if(n < 1) return false;
         if(n == 1) return true;
         long long int sum=1;
         return calculatePower(n,sum);
    }
};