class Solution
{
public:
    void func(int index, string substr, int leftOpen, int rightOpen, int n, vector<string> &res)
    {
        if (index == 2 * n - 1)
        {
            substr += ")";
            res.push_back(substr);
            return;
        }

        if (leftOpen < n)
        {
            substr += "(";
            func(index + 1, substr, leftOpen + 1, rightOpen, n, res);
            substr.pop_back();
        }

        if (rightOpen < leftOpen)
        {
            substr += ")";
            func(index + 1, substr, leftOpen, rightOpen + 1, n, res);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        string substr = "(";
        func(1, substr, 1, 0, n, res);
        return res;
    }
};