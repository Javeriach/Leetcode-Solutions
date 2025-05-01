class Solution {
public:
    int countDigits(int num) {
        int newNum=num;
        int singleDigit;
        int count=0;
        
        while(newNum != 0)
        {
           
            singleDigit=newNum % 10;
            newNum=newNum / 10;
            if(singleDigit == 0) continue;
            if(num % singleDigit == 0) count++;
        }
        return count;
    }
};