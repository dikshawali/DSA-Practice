#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) 
    {
        vector<int> ans;
        ans.push_back(first);
        int second=first;
        for(int i=0; i<encoded.size(); i++)
        {
            ans.push_back((second^encoded[i]));
            second=(second^encoded[i]);
        }

        return ans;
    }
};