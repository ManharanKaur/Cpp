#include <iostream>
using namespace std;
int subtractProductAndSum(int n) {
    int a = n, product = 1, sum = 0;
    while (a){
        product *= (a%10);
        sum += (a%10);
        a /= 10;
    }
    return(product - sum);
}
int main(){
    int n;
    cin >>  n;
    try
    {
        if (n < 1 || n > 100000)
            throw (n);
        cout << subtractProductAndSum(n) << endl;
    }

    catch(int e)
    {
        cerr << "Invalid input. \nInput range: 1 <= n <= 10^5" << '\n';
    }
    

    return 0;
}