#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, d, k;
    cin >> t;

    while (t--) {
        cin >> n >> d >> k;

        // Tạo mảng để lưu trữ số lượng công việc chồng lấn với mỗi ngày
        vector<int> overlap(n + 1, 0);

        // Đánh dấu các công việc vào mảng overlap
        for (int i = 0; i < k; i++) {
            int l, r;
            cin >> l >> r;
            for (int j = l; j <= r; j++) {
                overlap[j]++;
            }
        }

        // Tìm ngày bắt đầu tốt nhất cho anh trai
        int max_overlap = 0, max_start = -1;
        for (int i = 1; i <= n - d + 1; i++) {
            int current_overlap = 0;
            for (int j = i; j < i + d; j++) {
                current_overlap += overlap[j];
            }
            if (current_overlap > max_overlap) {
                max_overlap = current_overlap;
                max_start = i;
            }
        }

        // Tìm ngày bắt đầu tốt nhất cho mẹ
        int min_overlap = INT_MAX, min_start = -1;
        for (int i = 1; i <= n - d + 1; i++) {
            int current_overlap = 0;
            for (int j = i; j < i + d; j++) {
                current_overlap += overlap[j];
            }
            if (current_overlap < min_overlap) {
                min_overlap = current_overlap;
                min_start = i;
            }
        }

        cout << max_start << " " << min_start << endl;
    }

    return 0;
}