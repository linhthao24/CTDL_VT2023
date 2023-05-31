/*
Mã gray 002
 Báo lỗi
Đề bài
Số nhị phân được xem là cách mặc định biểu diễn cácsố. Tuy nhiên, trong nhiều ứng dụngcủađiện tử và truyền thông lại dùng một biến thể của mã nhị phân đó là mã Gray. MãGrayđộ dài n có mã đầu tiên là n số 0,mã kế tiếp của nó là một xâu nhị phân độ dài n khác biệt vớixâu trước đó một bít. Ví dụ với n=3 ta có 23mã Gray như sau: 000, 001, 011, 010, 110, 111, 101, 100. Hãy viết chương trìnhchuyển đổi một xâu mã nhị phân X có độ dài n thành mộtxâu mã Gray.


Dữ liệu vào
Dòng đầu tiên là số lượng test T.

T dòng kế tiếp ghi lại mỗi dòng mộttest. Mỗi test là một xâu nhị phân độ dài n.

T, nthỏa mãn ràng buộc: 1≤T, n≤10.


Dữ liệu ra
- Đưa ra kết quả mỗi test theo từng dòng.


Ví dụ
Input #1 

2
01001
01101
Output #1 

01101
01011
*/
#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<s[0];
        for(int i = 1; i < s.length(); i++){
            int res = (s[i] - '0')^(s[i-1] - '0');
            cout<<res;
        }
        cout<<endl;
    }
}