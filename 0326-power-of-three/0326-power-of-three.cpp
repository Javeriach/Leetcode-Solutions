class Solution {
public:
    bool determinePower(long long int result, int n){
        result=result * 3;
        if(result == n) return true;
        if(result>n) return false;
        return determinePower(result,n);
    }

    bool isPowerOfThree(int n) {
       
        if(n == 1 ) return true;
        return determinePower(1,n);
    }
};