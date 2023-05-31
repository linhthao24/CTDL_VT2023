/*
DAYSO004 - Dãy con đơn điệu tăng dài nhất
 Báo lỗi
Đề bài
Cho dãy số nguyên n phần tử a1, a2, … an với 1≤n≤
1
0
5
10 
5
 và 0≤|ai|≤
1
0
9
10 
9
 .Một dãy con đơn điệu tăng của dãy trên là dãyai1​​,ai2​​,…,aik​​sao cho:i1​<i2​<…<ik​vàai1​​<ai2​​<…<aik​​.Hãy tìm số phần tử của dãy con tăng dài nhất.


Dữ liệu vào
-Số lượng testcase t (t>0).

- Với mỗi testcase, nhập vào số nguyên n và n phần tử của dãy số.


Dữ liệu ra
- Mỗi dòng tương ứng một testcase, cho biết độ dài dãy con tăng dài nhất.


Ví dụ
Input #1 

1
6
1 2 5 4 6 2
Output #1 

4*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define f(i,a,b) for(int i = a; i<=b; i++)
#define fr(i,a,b) for(int i = a; i>=b; i--)
#define fll(i,a,b) for(long long i = a; i<=b; i++)
#define fllr(i,a,b) for(long long i = a; i>=b; i--)
#define faster() ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int MOD = 1e9+7;

using namespace std;


int main(){
  faster();
  int t; cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    f(i,0,n-1) cin >> a[i];
    vector<int> L(n,1);
    f(i,0,n-1){
        f(j,0,i-1){
            if(a[i] > a[j]) L[i] = max(L[i], L[j]+1);
        }
    }
    cout << *max_element(L.begin(),L.end()) << endl;
  }
  return 0;
}