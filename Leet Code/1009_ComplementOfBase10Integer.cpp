#include <iostream>
using namespace std;
int bitwiseComplement(int & n) {
    int complement = ~n;
    int mask = 0;
    if (n != 0){
        while (n!=0){
            mask = (mask << 1) | 1;
            n /= 2;
        }
        return complement & mask;
    }
    else {
        return 1;
    }
}

int main(){
    int n;
    cin >> n;
    try
    {
        if (n <= 0 || n > pow(10,9))
            throw (n);
        cout << bitwiseComplement(n) << endl;
    }
    catch(int e)
    {
        cerr << "Invalid input. \nInput positive integers only" << '\n';
    }
    return 0;
}