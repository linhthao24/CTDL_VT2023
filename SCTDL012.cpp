/*
Bội số
 Báo lỗi
Đề bài
Cho số nguyên N. Nhiệm vụ của bạn cần tìm số nguyên X nhỏ nhất là bội của N, và X chỉ chứa hai chữ số 0 và 9.


Dữ liệu vào
- Dòng đầu tiên là số lượng bộ test T (T ≤ 10000).Mỗi bộ test chứa số nguyên N trên một dòng (1 ≤ N ≤ 500).


Dữ liệu ra
- In ra kết quả trên 1 dòng ứng với mỗi testcase


Ví dụ
Input #1 

3
2
5
11
Output #1 

90
90
99
*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define f(i,a,b) for(int i = a; i<=b; i++)
#define fr(i,a,b) for(int i = a; i>=b; i--)
#define fll(i,a,b) for(long long i = a; i<=b; i++)
#define fllr(i,a,b) for(long long i = a; i>=b; i--)

using namespace std;


ull boiSo(int k){
    ull n = 9,d;
    queue<ull> q;
    q.push(n);
    while(!q.empty()){
        d = q.front();
        q.pop();
        f(i,0,1){
            if(d%k==0) return d;
            d*=10;
            d+=i*9;
            
            q.push(d);
            d/=10;
        }
    }
    return 0;
}

int main(){
  int t; cin >> t;
  while(t--){
    int k;
    cin >> k;
    cout << boiSo(k) << endl;
  }
  return 0;
}