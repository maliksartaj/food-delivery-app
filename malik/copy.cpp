#include <iostream>
#include <vector>

using namespace std;

// Function to count the number of ways to reach the top of the stairs
int countWaysToReachTop(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    vector<int> ways(n + 1);
    ways[0] = 1;
    ways[1] = 1;

    for (int i = 2; i <= n; ++i) {
        ways[i] = ways[i - 1] + ways[i - 2];
    }

    return ways[n];
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int result = countWaysToReachTop(n);
    cout << "Number of ways to reach the top: " << result << endl;

    return 0;
}
10