class Solution
{
public:
    string getHint(string secret, string guess)
    {
        unordered_map<char, int> freq;
        int bull = 0;
        int n = guess.length();
        for (int i = 0; i < n; i++)
        {
            freq[guess[i]]++;
            if (guess[i] == secret[i])
            {
                bull++;
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (freq[secret[i]] > 0)
            {
                count++;
                freq[secret[i]]--;
            }
        }
        string ans = to_string(bull) + 'A' + to_string(count - bull) + 'B';
        return ans;
    }
};