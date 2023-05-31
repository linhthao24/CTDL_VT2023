/*
Sinh xâu AB
 Báo lỗi
Đề bài
Xâu ký tự str được gọi là xâu AB nếu mỗi ký tựtrong xâu hoặc là ký tự ‘A’ hoặc là ký tự ‘B’. Ví dụ xâu str=”ABBABB” là xâu ABđộ dài 6. Nhiệm vụ của bạn là hãy liệt kê tất cả các xâuAB có độ dài n.


Dữ liệu vào
Dòng đầu tiên đưa vào số lượng test T.

Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên n.

T, n thỏa mãn ràng buộc: 1≤T≤100; 1≤n≤100.


Dữ liệu ra
Đưa ra kết quả mỗi test theo từng dòng. Mỗi xâucách nhau 1 khoảng trống.


Ví dụ
Input #1 

1
2
Output #1 

AA AB BA BB*/
#include<bits/stdc++.h>
using namespace std;
int n;
char a[32];
void out(){
    for(int i = 0; i < n; i++) cout<<a[i];
    cout<<" ";
}
void Sinh(int j){
    for(int i = 0; i <= 1; i++){
        a[j] = i + 'A';
        if(j == n-1) out();
        else Sinh(j+1);
    }
}
main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        Sinh(0);
        cout<<endl;
    }
}