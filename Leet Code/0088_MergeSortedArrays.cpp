#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0;
    nums1.erase(nums1.begin() + m, nums1.end());
    if (m == 0)
    {
        while (j < n)
        {
            nums1.push_back(nums2[j]);
            j++;
        }
        return;
    }
    while (i < m + n && j < n)
    {
        if (nums1[i] > nums2[j])
        {
            nums1.insert(nums1.begin() + i, nums2[j]);
            i++;
            j++;
        }
        else
            i++;
    }
    while (j < n)
    {
        nums1.push_back(nums2[j]);
        i++;
        j++;
    }
    return;
}
