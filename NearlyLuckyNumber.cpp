/*#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai dữ liệu
	string n;
	//Nhập dữ liệu
	getline(cin, n);
	//Xử lý bài toán
	for(int i=0; i<n.length(); i++){
		if(n[i]!='4' and n[i]!='7'){
			cout<<"NO";
			break;
		}
		if(i==n.length()-1) cout<<"YES";
	}
	return 0;
}*/
#include <iostream>

using namespace std;

bool isLuckyDigit(int digit) {
    return digit == 4 || digit == 7;
}

bool isNearlyLucky(long long n) {
    int count = 0;
    while (n > 0) {
        if (isLuckyDigit(n % 10)) {
            count++;
        }
        n /= 10;
    }
    return isLuckyDigit(count);
}

int main() {
    long long n;
    cin >> n;

    if (isNearlyLucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}