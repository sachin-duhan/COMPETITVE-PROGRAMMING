int guess(int num);

class Solution
{
public:
    int guessNumber(int n)
    {
        int high = n;
        int low = 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int r = guess(mid);
            if (r == 0)
                return mid;
            else if (r < 0)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
    }
};