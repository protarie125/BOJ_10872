#include <iostream>

using namespace std;

using ll = long long;

ll solve(int N) {
    if (0 == N) {
        return 1;
    }

    return N * solve(N - 1);
}

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    cin >> N;

    cout << solve(N);

    return 0;
}