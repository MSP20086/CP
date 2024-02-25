class Solution
{
public:
    bool exist(vector<vector<char>> &board, string word)
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (word[0] == board[i][j])
                {
                    if (search(board, word, i, j, 0))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool search(vector<vector<char>> &board, string word, int i, int j, int ind)
    {
        if (ind == word.size())
        {
            return true;
        }
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[ind])
        {
            return false;
        }
        char ch = board[i][j];
        board[i][j] = '#';
        bool op1 = search(board, word, i + 1, j, ind + 1);
        bool op2 = search(board, word, i - 1, j, ind + 1);
        bool op3 = search(board, word, i, j + 1, ind + 1);
        bool op4 = search(board, word, i, j - 1, ind + 1);
        board[i][j] = ch;
        return op1 || op2 || op3 || op4;
    }
};