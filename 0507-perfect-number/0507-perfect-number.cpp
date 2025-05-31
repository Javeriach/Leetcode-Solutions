class Solution {
public:
    bool checkPerfectNumber(int num) {

        vector<int>list;
        
        for(int i=1; i*i <= num;i++)
            {
                if(num % i == 0)
                {
                    list.push_back(i);
                    if(num / i != i)
                    {
                        cout << num/i <<endl;
                        list.push_back(num/i);
                    }
                }
            }
        
      int sum=0;
        for(int i=0;i<list.size();i++)
            {
                if(list[i] != num)
                sum+=list[i];
            }

        return sum == num;
    }
};