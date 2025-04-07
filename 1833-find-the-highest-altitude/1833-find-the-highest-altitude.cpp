class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int max=0;
        vector<int>resultArray;
        resultArray.push_back(0);
         int temp=0;

        for(int i=0; i < gain.size(); i++)
        {
                int sum = gain[i] + resultArray[temp];
                cout << gain[i] << " "  << resultArray[temp] << " " << sum <<endl;
                temp++;
                if(sum > max) max=sum;
                resultArray.push_back(sum);
        }
 
    return max;
    }
};