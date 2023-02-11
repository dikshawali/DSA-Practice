class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) 
    {
        //bubble sort
        int r=score.size(), c=score[0].size();
        // int i, j;
        // for (i = 0; i < n - 1; i++)

        //     // Last i elements are already in place
        //     for (j = 0; j < n - i - 1; j++)
        //         if (arr[j] > arr[j + 1])
        //             swap(&arr[j], &arr[j + 1]);
        // }

        //our column is fixed, only we have to sort our rows

        for(int i=0; i<r; i++)
        {
            //sorting (0,k) to (r,k)
           for (int j = 0; j < r-i-1; j++)
            {
                if (score[j][k] < score[j + 1][k])
                {
                    // swap(&arr[j], &arr[j + 1]);
                    vector<int> temp;
                    // cout<<"we're replacing arrays at"<<j<<" and "<<j+1<<'\n';
                    temp=score[j];
                    score[j]=score[j+1];
                    score[j+1]=temp;
                }
            }
            cout<<'\n';
        }
        return score;
    }
};