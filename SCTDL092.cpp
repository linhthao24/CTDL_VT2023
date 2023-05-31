/*
Đề bài
Hãy sử dụng ngăn xếp để thực hiện việc chuyển các biểu thức trung tố sang hậu tố


Dữ liệu vào
Dòng 1 ghi số N (không quá 20) là số biểu thức trung tố (đúng khuôn dạng) chỉ bao gồm các phép cộng, trừ, nhân,chia, các chữ cái thường từ a đến z và các dấu ngoặc đơn. N dòng tiếp theo mỗi dòng ghi một biểu thức.


Dữ liệu ra
Ghi ra màn hình các biểu thức hậu tố kết quả.


Ví dụ
Input #1 

1	
((a+b)*(c+d))	
Output #1 

ab+cd+**/
#include<bits/stdc++.h>
using namespace std;
int xxx(char s){
    if( s == '+' || s == '-') return 1;
    if( s == '*' || s == '/') return 2;
    else return 0;
}
main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> x;
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i]>='A' && s[i]<='Z') cout<<s[i];
            else if(s[i] == '(') x.push(s[i]);
            else if(s[i] == ')'){
                while(x.size() && x.top() != '('){
                    cout<<x.top();
                    x.pop();
                }
                x.pop();
            }else{
                while(x.size() && (xxx(x.top()) >= xxx(s[i]))){
                    cout<<x.top();
                    x.pop();
                }
                x.push(s[i]);
            }
        }
        while(x.size()){
            if(x.top() == '(') x.pop();
            else{
                cout<<x.top();
                x.pop();
            }
        }
        cout<<endl;
    }
}
