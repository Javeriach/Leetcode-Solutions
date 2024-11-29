class Solution {
public:
    double calculatePower(double x , int n)
    {

        if(n == 0) return 1;
        if(x  == 0) return x;
        
        double res=calculatePower(x,n/2);
        res=res * res;
        if(n % 2 == 0) return res;
        else return res * x;
      
    }

    double myPow(double x, int n) {

        if(x == 0) return 0;
        if(n == 0) return 1;

        long double sum=1;
        double result = (calculatePower(x,n));
        if(n > 0) return result;
        else return 1/result;

    }
};