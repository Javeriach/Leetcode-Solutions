class Solution {
public:
    double myPow(double x, int n) {
        x = helper(x,n);
        if(n > 0) return x;
        else return 1/x;
    }

    double helper(double x, int n)
    {
        if(n == 0) return 1;
        if(x == 0) return 0;

        // 2 * 2^2 * 2^2 
        double res= helper(x,n/2);
        res=res * res;
        if(n % 2 == 0) return res;
        else return res*x;
    }
};