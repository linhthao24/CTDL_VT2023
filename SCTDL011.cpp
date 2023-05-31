/*
Chuỗi nhị phân có bit 01 thỏa mã điều kiện
 Báo lỗi
Đề bài
Cho một số nguyên 
�
N, nhiệm vụ là tạo ra tất cả các chuỗi nhị phân có thể có độ dài 
�
N có chứa "01" làm chuỗi con chính xác hai lần.


Dữ liệu vào
- Số lượng bộ test 
�
(
�
≥
1
)
t(t≥1).

- Với mỗi bộ test, nhập vào số nguyên dương 
�
<
=
20
n<=20.


Dữ liệu ra
In ra kết quả trên 1 dòng ứng với mỗi testcase.


Ví dụ
Input #1 

1
4
Output #1 

0101*/
#include <bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(int i = a; i<=b; i++)
#define fr(i,a,b) for(int i = a; i>=b; i--)
#define fll(i,a,b) for(long long i = a; i<=b; i++)
#define fllr(i,a,b) for(long long i = a; i>=b; i--)

using namespace std;
int A[30];
int n;

bool check(){
    int cnt = 0;
    for (int j = 0; j < n-1; j++) {
        if (A[j] == A[j+1] - 1) {
            cnt++;
        }
        if (cnt > 2) {
            return 0;
        }
    }
    if (cnt == 2) {
        return 1; 
    }
    return 0;
}

void show(){
    f(i,0,n-1){
        cout << A[i];
    } cout << " ";
}

void sinh(int n, int k){
    f(i,0,1){
        A[k] = i;
        if(k==n-1){
            if(check()) show();
        } else {
            sinh(n,k+1);
        }
    }
}

int main(){
  int t; cin >> t;
  while(t--){
    cin >> n;
    if (n < 4) cout << -1;
    else {
        sinh(n,0);
        cout << endl;
    }
  }
  return 0;
}