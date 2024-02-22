class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int low = 0;
        int high = matrix.size() - 1;
        int mid;
        if (target < matrix[0][0] || target > matrix[matrix.size() - 1][matrix[0].size() - 1])
        {
            return false;
        }
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (target >= matrix[mid][0] && target <= matrix[mid][matrix[0].size() - 1])
            {
                break;
            }
            if (target < matrix[mid][0])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        int row = mid;
        low = 0;
        high = matrix[mid].size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (matrix[row][mid] == target)
            {
                return true;
            }
            if (matrix[row][mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return false;
    }
};