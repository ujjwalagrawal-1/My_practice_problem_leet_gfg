class Solution
{
    public:
        bool checkStraightLine(vector<vector < int>> &coordinates)
        {
            double Y = (coordinates[1][1] - coordinates[0][1]);
            double X = (coordinates[1][0] - coordinates[0][0]);
            if (X == 0)
            {
                for (int i = 2; i < coordinates.size(); i++)
                {
                    if (coordinates[i][0] != coordinates[0][0])
                    {
                        return false;
                    }
                }
                return true;
            }
            double slope = Y / X;

            for (int i = 2; i < coordinates.size(); i++)
            {
                double y = slope *(coordinates[i][0] - coordinates[0][0]) + coordinates[0][1];
                if (y != coordinates[i][1])
                {
                    return false;
                }
            }
            return true;
        }
};