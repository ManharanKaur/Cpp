#include <iostream>
using namespace std;
    int mySqrt(int x) {
        int l = 1;
        int r = x/2;
        int mid, ans;
        
        while (l <= r){
            mid = l + (r - l)/2;
            long long int square = (long long)mid*mid;
            if (square == x){
                ans = mid;
                break;
            }
            else if (square > x)
                r = mid - 1;
            else if (square < x){
                ans = mid;
                l = mid + 1;
            }
        }
        return ans;
    }

int main(){
    int number;
    cin >> number;
    try
    {
        if (number < 0 || number > INT32_MAX)
            throw (number);
        cout << mySqrt(number) << endl;
    }

    catch(int e)
    {
        cerr << "Invalid input. \nInput positive integers only" << '\n';
    }

    return 0;
}