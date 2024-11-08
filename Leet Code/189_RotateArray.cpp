#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int l = nums.size();

    k = k % l;
    if (k == 0)
        return;
    else if (l == 2)
        reverse(nums.begin(), nums.end());
    else
    {
        reverse(nums.begin(), nums.end() - k);
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
}
