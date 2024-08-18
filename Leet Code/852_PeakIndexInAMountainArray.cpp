#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;
    int mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        // loop will break when left == right e.i peak element reached
    }
    return left;
}

int main()
{
    int count;
    cin >> count;
    vector<int> arr(count);
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    try
    {
        if (arr.size() < 3 || arr.size() > 100000)
            throw runtime_error("Invalid length of array (3 <= arr.size() <= 100000)");

        for (int i = 0; i < count; i++)
        {
            if (arr[i] < 0 || arr[i] > 1000000)
                throw runtime_error("Invalid input (0 <= arr[i] <= 1000000)");
        }

        int peakIndex = peakIndexInMountainArray(arr);

        if (arr[peakIndex] == arr[peakIndex + 1] || arr[peakIndex] == arr[peakIndex - 1] || peakIndex == 0 || peakIndex == count - 1)
            throw runtime_error("Not a Mountain array.");


        for (int i = 0; i < peakIndex; i++)
            if (arr[i] > arr[i + 1])
                throw runtime_error("Not a Mountain array.");

        for (int i = peakIndex; i < count; i++)
            if (arr[i] < arr[i + 1])
                throw runtime_error("Not a Mountain array.");

        cout << "Peak Index: " << peakIndex << endl;
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}