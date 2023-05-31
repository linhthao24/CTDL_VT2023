/*
chuỗi nhị phân theo hợp lệ
 Báo lỗi
Đề bài
Cho một chuỗi chứa các ký tự đại diện '0', '1' và '?' tạo ra tất cả các chuỗi nhị phân có thể được hình thành bằng cách thay thế mỗi ký tự đại diện bằng '0' hoặc '1'.

Dữ liệu vào
Số lượng testcaset(t≥1).

- Vớimỗi testcase, nhập vào 1 chuỗi có độ dài <
1
0
3
10 
3
  chứa cả 3 kí tự 0,1 và ?


Dữ liệu ra
- Mỗi dòng tương ứng với một testcase liệt kê tất cả các kết quả có thể tìm được.
*/
#include<bits/stdc++.h>
using namespace std;
void Sinh(string s, int vt, string kq ){
    if(vt == s.length()){
        cout<<kq<<endl;
        return;
    }
    if(s[vt] == '?' ) {
        Sinh(s, vt + 1, kq + '0');
        Sinh(s, vt + 1, kq + '1');
    }
    else{
        Sinh(s,vt+1,kq+s[vt]);
    }
}
main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Sinh(s, 0, "");
    }
}