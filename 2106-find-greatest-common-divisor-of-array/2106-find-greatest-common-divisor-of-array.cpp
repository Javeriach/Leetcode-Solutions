class Solution {
public:
    int findGCD(vector<int>& nums) {

       sort(nums.begin(), nums.end());
       int num1=nums.front();
       int num2=nums.back();
       
       unordered_set<int> divisors1=Divisors(num1);
       unordered_set<int> divisors2=Divisors(num2);
       vector<int>common_result;

       for(int d : divisors1 )
       {
           if(divisors2.find(d) != divisors2.end())
            {
                    common_result.push_back(d);
            }
       }
       if(common_result.size() == 0)
       {
          return 1;
       }

    sort(common_result.begin(),common_result.end());
     return common_result.back();
    }
private:

 unordered_set<int> Divisors(int num)
 {
    unordered_set<int>divisors;

     for(int i=1; i<=num;i++)
     {
         if(num % i == 0 && divisors.find(i) == divisors.end())
         {
            divisors.insert(i);
         }
     }

     return divisors;
 }
    
};
