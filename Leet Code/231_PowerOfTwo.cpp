#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;// eg (4&3= 0) (4&5 = 4) 
}
int main(){
    int n;
    cin >> n;
    cout << isPowerOfTwo(n);
}