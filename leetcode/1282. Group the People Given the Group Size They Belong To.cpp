class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        vector<vector<int>> ans;
        for(int i=1; i<=groupSizes.size(); i++)
        {
            vector<int> temp;
            for(int j=0; j<groupSizes.size(); j++)
            {
                if(groupSizes[j]==i)
                {
                    temp.push_back(j);
                }
            }
            int k=0, size=i;
            while(k<temp.size())
            {
                vector<int> temp_temp;
                for(int x=0; x<size; x++)
                {
                    temp_temp.push_back(temp[k]);
                    k++;
                }
                ans.push_back(temp_temp);
            }
        }    
        return ans;
    }
};