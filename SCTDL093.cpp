/*
SCTDL093 - Tiền tố sang hậu tố
 Báo lỗi
Đề bài
Có ba dạng biểu diễn cho các biểu thức số học và logic:

Infix(trung tố): Biểu diễn biểu thức dưới dạng trung tố là phép biểu diễn biểu thức trong đó phép toán được đặt giữa hai toán hạng. Ví dụ (A+B) * (C-D).

Prefix(tiền tố): Biểu diễn biểu thức dưới dạng tiền tố là phép biểu diễn biểu thức trong đó phép toán được đặt trước hai toán hạng. Ví dụ *+AB-CD (tương ứng với biểu thức trung tố(A+B)*(C-D).

Postfix(hậu tố): Biểu diễn biểu thức dưới dạng hậu tố là phép biểu diễn biểu thức trong đó phép toán được đặt sau hai toán hạng. Ví dụ AB+CD-* (tương ứng với biểu thức trung tố(A+B)*(C-D).

Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng tiền tố về dạng hậu tố.


Dữ liệu vào
Dòng đầu ghi số bộ test. Mỗi bộ test viết trên một dòng một biểu thức tiền tố, trong đó các toán hạng là các chữ cái tiếng anh in thường.


Dữ liệu ra
Mỗidòng in ra một biểu thức hậu tố tương ứng.


Ví dụ
Input #1 

2	
*+ab-cd	
*-a/bc-/akl	
Output #1 

ab+cd-*
abc/-ak/l-*
*/
#include<bits/stdc++.h>
using namespace std;
int kt(char i){
    if( i == '+' || i == '-' || i == '*' || i == '/') return 1;
    else return 0;
}
void solve(){
    string s;
    cin>>s;
    cin.ignore();
    stack <string> st;
    for(int i = s.length() - 1; i >= 0; i--){
        if(kt(s[i]) == 0) st.push(string(1,s[i]));
        else{
            string str1 = st.top(); st.pop();
            string str2 = st.top(); st.pop();
            string tmp = str1 + str2 + s[i];
            st.push(tmp);
        }
    }
    cout<<st.top()<<endl;
}
int main(){
	int t; 
	cin>>t;	
	cin.ignore();
	while(t--){
		solve();
	}
}