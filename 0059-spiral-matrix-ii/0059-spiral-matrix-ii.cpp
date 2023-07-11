class Solution
{
    public:
        vector<vector < int>> generateMatrix(int n)
        {
            vector<vector < int>> answer(n,vector<int>(n,0));
            if (n == 0) return answer;
            int top = 0;
            int bottom = n - 1;
            int left = 0;
            int right = n - 1;
            int k = 1;
            while (left <= right && top <= bottom)
            {
               	// Traverse top row
                for (int i = left; i <= right; i++)
                {
                    answer[top][i] = k++;
                }
                top++;

               	// Traverse right column
                for (int i = top; i <= bottom; i++)
                {
                    answer[i][right] = k++;
                   	// ans.push_back(matrix[i][right]);
                }
                right--;

               	// Traverse bottom row
                if (top <= bottom)
                {
                	// Check if there are still rows left to traverse
                    for (int i = right; i >= left; i--)
                    {
                        answer[bottom][i] = k++;
                       	// ans.push_back(matrix[bottom][i]);
                    }
                    bottom--;
                }

               	// Traverse left column
                if (left <= right)
                {
                	// Check if there are still columns left to traverse
                    for (int i = bottom; i >= top; i--)
                    {
                        answer[i][left] = k++;
                       	// ans.push_back(matrix[i][left]);
                    }
                    left++;
                }
            }
            return answer;
        }
};