#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        vector<int> wealth(n);
        for (int i = 0; i < n; i++) {
            cin >> wealth[i];
        }

        // Find the maximum wealth and its index
        int max_wealth = *max_element(wealth.begin(), wealth.end());
        int max_index = max_element(wealth.begin(), wealth.end()) - wealth.begin();

        // Calculate the total wealth and average wealth
        int total_wealth = accumulate(wealth.begin(), wealth.end(), 0);
        double average_wealth = total_wealth / (double)n;

        // Calculate the minimum gold needed to make more than half unhappy
        int unhappy_count = 0;
        for (int i = 0; i < n; i++) {
            if (wealth[i] < average_wealth / 2) {
                unhappy_count++;
            }
        }

        int min_gold = -1;
        if (unhappy_count > n / 2) {
            min_gold = ceil((average_wealth / 2 - wealth[max_index]) * n);
        }

        cout << min_gold << endl;
    }

    return 0;
}