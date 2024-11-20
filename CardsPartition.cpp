#include <iostream>
#include <vector>

using namespace std;

// Hàm tìm ước chung lớn nhất (GCD) bằng thuật toán Euclid
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int n, k, t;
    
    cin >> n >> k;  // Nhập số lượng loại thẻ và số tiền

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];  // Nhập số lượng thẻ của mỗi loại
    }

    // Tính tổng số thẻ hiện có
    int total_cards = 0;
    for (int i = 0; i < n; ++i) {
        total_cards += a[i];
    }

    // Tính số thẻ còn lại sau khi mua
    int remaining_cards = total_cards - k;

    // Tìm GCD của tất cả số lượng thẻ và số thẻ còn lại
    int result = a[0];
    for (int i = 1; i < n; ++i) {
        result = gcd(result, a[i]);
    }
    result = gcd(result, remaining_cards);

    cout << result << endl;  // In ra kích thước bộ bài tối đa


    return 0;
}