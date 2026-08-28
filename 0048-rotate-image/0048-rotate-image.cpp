class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            // row is matrix[]
            reverse(matrix[i].begin(),matrix[i].end());//Points to the first element of the row 
                                                 //Represents the position just after the last element
        }
        
    }
};