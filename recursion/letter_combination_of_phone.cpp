class Solution
{
public:
    void func(vector<string> &res, unordered_map<char, string> &mp, int index, string output, string digits)
    {

        if (index == digits.size())
        {
            if (output.size() > 0)
            {
                res.push_back(output);
            }
            return;
        }
        string str = mp[digits[index]];
        for (int i = 0; i < str.size(); i++)
        {
            output.push_back(str[i]);
            func(res, mp, index + 1, output, digits);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        unordered_map<char, string> mp;
        vector<string> res;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        func(res, mp, 0, "", digits);
        return res;
    }
};