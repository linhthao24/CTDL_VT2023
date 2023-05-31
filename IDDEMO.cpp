/*
Biến đổi dãy số
 Báo lỗi
Đề bài
Cho dãy số A[] gồm n số nguyên dương. Tam giác đặc biệt của dãy số A[] là tam giác được tạo ra bởi n hàng, trong đó hàng thứ 1 là dãy số A[], hàng i là tổng hai phần tử liên tiếp của hàng i-1 (2≤i≤n).


Dữ liệu vào
Dòng đầu tiên đưa vào số lượng bộ test T.

Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòngthứ nhất đưa vào N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào Nsố của mảng A[].

T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤10;


Dữ liệu ra
Đưa ra tam giác tổng của mỗi test theo từng dòng. Mỗi dòng của tam giác tổng được bao bởi ký tự [, ].


Ví dụ
Input #1 

1
5
1 2 3 4 5	
Output #1 

[1 2 3 4 5]
[3 5 7 9]
[8 12 16]
[20 28]
[48]
*/
#include <bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(int i = a; i<=b; i++)
#define fr(i,a,b) for(int i = a; i>=b; i--)
#define fll(i,a,b) for(long long i = a; i<=b; i++)
#define fllr(i,a,b) for(long long i = a; i>=b; i--)

using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int V[n][n];
    f(i,0,n-1) cin >> V[0][i];
    f(i,1,n-1){
        f(j,0,n-1-i){
            V[i][j] = V[i-1][j] + V[i-1][j+1];
        }
    }

    f(i,0,n-1){
        cout << "[";
        f(j,0,n-1-i){
            cout << V[i][j];
            if(j < n-1-i) cout << " ";
        }
        cout << "]" << endl;
    }

  }
  return 0;
}