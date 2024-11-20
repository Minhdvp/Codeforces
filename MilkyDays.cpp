#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> MilkAcquisition; // Đổi tên pii thành MilkAcquisition để mô tả rõ hơn

int main() {
    int t;
    cin >> t;

    while (t--) {
        int numberOfDays, maxMilkPerDay, milkFreshnessDuration;
        cin >> numberOfDays >> maxMilkPerDay >> milkFreshnessDuration;

        priority_queue<MilkAcquisition, vector<MilkAcquisition>, greater<MilkAcquisition>> milkQueue;

        for (int i = 0; i < numberOfDays; ++i) {
            int acquisitionDay, milkAmount;
            cin >> acquisitionDay >> milkAmount;
            milkQueue.push({acquisitionDay, milkAmount});
        }

        int satisfiedDays = 0, currentMilk = 0, day = 1;

        while (!milkQueue.empty()) {
            // Loại bỏ sữa đã hết hạn
            while (!milkQueue.empty() && milkQueue.top().first < day) {
                currentMilk -= milkQueue.top().second;
                milkQueue.pop();
            }

            // Thêm sữa mới
            while (!milkQueue.empty() && milkQueue.top().first == day) {
                currentMilk += milkQueue.top().second;
                milkQueue.pop();
            }

            // Kiểm tra xem có đủ sữa để uống không
            if (currentMilk >= maxMilkPerDay) {
                satisfiedDays++;
                currentMilk -= maxMilkPerDay;
            }

            day++;
        }

        cout << satisfiedDays << endl;
    }

    return 0;
}