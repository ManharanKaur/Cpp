#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x = nums.size();

    int i = 0, j = 0;
    while (i < x && j < x)
    {
        while (nums[i] != 0)
        {
            i++;
            if (i == x)
                return;
        }
        while (nums[j] == 0 || j <= i)
        {
            j++;
            if (j == x)
                return;
        }
        if (nums[i] == 0 && nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
            j++;
        }
    }
}