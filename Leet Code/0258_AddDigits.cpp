#include <iostream>
using namespace std;

int addDigits(int num) {
    int sum = 0, digit;
    while (num > 0){
        digit = num%10;
        sum += digit;
        num /= 10;
    }
    if (sum/10)
        return addDigits(sum);
    else return sum;
}

int main(){
    int n;
    cin >>  n;
    try
    {
        if (n < 0 || n > INT32_MAX)
            throw (n);
        cout << addDigits(n) << endl;
    }

    catch(int e)
    {
        cerr << "Invalid input. \nInput positive integers only" << '\n';
    }

    return 0;
}