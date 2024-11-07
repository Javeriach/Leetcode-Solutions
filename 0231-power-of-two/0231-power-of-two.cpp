class Solution {
public:
    
    bool determinePower(long long int result, int n){
        result=result * 2;
        if(result == n) return true;
        if(result>n) return false;
        return determinePower(result,n);
        // result=result/2;
        // if(result == 0) return true;
        // if(result == 2) return true;
        // if(result <2) return false;
        // return determinePower(result,n);
    }

    bool isPowerOfTwo(int n) {
        if(n == 1 ) return true;
        return determinePower(1,n);
    }
};