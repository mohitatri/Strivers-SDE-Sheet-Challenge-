#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	vector<int> rows(matrix.size());
        vector<int> columns(matrix[0].size());

        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    rows[i]=1;
                    columns[j]=1;
                }
            }
        }

        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(rows[i]==1)
                {
                    matrix[i][j]=0;
                }

                if(columns[j]==1)
                {
                    matrix[i][j]=0;
                }
            }
        }
}
