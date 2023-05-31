/*
 Tiền tố sang trung tố
 Báo lỗi
Đề bài
Có ba dạng biểu diễn cho các biểu thức số học và logic:

Infix(trung tố): Biểu diễn biểu thức dưới dạng trung tố là phép biểu diễn biểu thức trong đó phép toán được đặt giữa hai toán hạng. Ví dụ (A+B) * (C-D).

Prefix(tiền tố): Biểu diễn biểu thức dưới dạng tiền tố là phép biểu diễn biểu thức trong đó phép toán được đặt trước hai toán hạng. Ví dụ *+AB-CD (tương ứng với biểu thức trung tố(A+B)*(C-D).

Postfix(hậu tố): Biểu diễn biểu thức dưới dạng hậu tố là phép biểu diễn biểu thức trong đó phép toán được đặt sau hai toán hạng. Ví dụ AB+CD-* (tương ứng với biểu thức trung tố(A+B)*(C-D).

Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng tiền tố về dạng trung tố.


Dữ liệu vào
Dòng đầu ghi số bộ test. Mỗi bộ test  viết trên một dòng một biểu thức hậu tố, trong đó các toán hạng là các chữ cái tiếng anh in thường.


Dữ liệu ra
Mỗi  dòng in ra một biểu thức trung tố tương ứng.


Ví dụ
Input #1 

2
abc++
ab*c+
Output #1 

(a+(b+c))
(a*(b+c))*/
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
  //faster();
  int t; cin >> t;

  while(t--){
    string s;
    cin >> s;
    stack<string> st;
    f(i,0,s.size()-1){
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'||s[i]=='%'){
            string fi = st.top(); st.pop();
            string se = st.top(); st.pop();
            string tmp = "(" + se + s[i] + fi + ")";
            st.push(tmp);
        } else {
            st.push(string(1,s[i]));
        }
    }
    cout << st.top() << endl;
  }
  return 0;
}