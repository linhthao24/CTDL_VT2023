/*
Mã gray 003
 Báo lỗi
Đề bài
Số nhị phân được xem là cách mặc định biểu diễn các số. Tuy nhiên, trong nhiều ứng dụng của điện tử và truyền thông lại dùng một biến thể của mã nhị phân đó là mã Gray. Mã Gray độ dài n có mã đầu tiên là n số 0, mã kế tiếp của nó là một xâu nhị phân độ dài n khác biệt với xâu trước đó một bít. Ví dụ với n=3 ta có 
2
3
2 
3
  mã Gray như sau: 000, 001, 011, 010, 110, 111, 101, 100. Hãy viết chương trình chuyển đổi một xâu mã Gray X có độ dài n thành một xâu mã nhị phân.


Dữ liệu vào
Dòng đầu tiên là số lượng test T.

T dòng kế tiếp ghi lại mỗi dòng một test.

Mỗi test là một xâu mã Gray độ dài n.

T, n thỏa mãn ràng buộc: 1≤T, n≤10.


Dữ liệu ra
Đưa ra kết quả mỗi test theo từng dòng


Ví dụ
Input #1 

2
01101
01011
Output #1 

01001
01101
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s, kq="";
        cin>>s;
        kq = s[0];
        for(int i = 1; i < s.size(); i++){
            int n = kq.size() - 1;
            if(kq[n] != s[i]) kq += "1";
            else kq += "0";
        }
        cout<<kq<<endl;
    }
    return 0;
}