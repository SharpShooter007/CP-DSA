class Solution
{
public:
    double myPow(double x, int n)
    {

        if (n == 0)
            return 1;
        if (n == 1)
            return x;

        if (n == -1)
            return 1 / x;

        double res = myPow(x, n / 2);

        if (n % 2 == -1)
            return (res * res) / x;
        if (n % 2 == 1)
            return x * res * res;

        return res * res;
    }
};