#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N ;
    cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int temp;
    for (int i = 0; i < N/2; i++){
            temp = arr[i];
            arr[i] = arr[N-1 - i];
            arr[N-1 - i] = temp;
    }
    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
