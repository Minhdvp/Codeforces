/*#include<bits/stdc++.h>
using namespace std;
void Xuly(long long n, long long x, long long y){
	if(x>=y){
		for(int j=1; j<=n; j++){
			if(j*y>=n){
				cout<<j;
				break;
			}
		}
	}
	else{
		for(int j=1; j<=n; j++){
			if(j*x>=n){
				cout<<j;
				break;
			}
		}
	}
}
int main(){
	//Khai báo
	long long n, x, y, t;
	//Nhập dữ liệu
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>n>>x>>y;
		Xuly(n,x,y);
		cout<<endl;
	}
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

void Xuly(long long n, long long x, long long y) {
    if (x >= y) {
        cout << (n + y - 1) / y << endl;  // Làm tròn lên để đảm bảo xay hết trái cây
    } else {
        cout << (n + x - 1) / x << endl;
    }
}

int main() {
    long long t, n, x, y;
    cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        Xuly(n, x, y);
    }
    return 0;
}