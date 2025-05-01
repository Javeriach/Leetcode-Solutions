class Solution {
public:
    int reverse(int x) {
        
        long long int sum=0;
        int secondSum=0;
        int min=-pow(2,31);
        int max=pow(2,31)-1;

        while(x != 0)
        {
            int digit=x%10;
            x=x/10;
            sum=sum * 10 + digit;

            if( (sum >= min && sum <= max))
             secondSum = secondSum * 10 + digit;
             else return 0;

        }
        
        return secondSum;
    }
};