#include <iostream>
using namespace std;

int hammingWeight(int n) {
    int bits = 0;
    while (n != 0){
        if(n%2 == 1) bits += 1;
        n /= 2;
    }
    return bits;
}
int main(){
    int n;
    cin >>  n;
    try
    {
        if (n < 1 || n > INT32_MAX)
            throw (n);
        cout << hammingWeight(n) << endl;
    }

    catch(int e)
    {
        cerr << "Invalid input. \nInput positive integers only" << '\n';
    }

    return 0;
}