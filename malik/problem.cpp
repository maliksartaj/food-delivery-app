#include <iostream>

using namespace std;


int countWaysToReachTop(int n) {
    if (n == 0 || n == 1 ) {
        return 1;
    }
    int* ways = new int[n + 1];  
    ways[0] = 1;
    ways[1] = 1;

    for (int i = 2; i <= n; ++i) {
        ways[i] = ways[i - 1] + ways[i - 2];
    }

    int result = ways[n];
    delete[] ways;  

    return result;
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int result = countWaysToReachTop(n);
    cout << "Number of ways to reach the top: " << result << endl;

    return 0;
}
