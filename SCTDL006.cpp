/*
Tách số
 Báo lỗi
Đề bài
Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các cách phân tích số tự nhiên  N thành tổng các số tự nhiên nhỏ hơn hoặc bằng N. Phép hoán vị vủa một cách được xem là  4 giống nhau. Ví dụ với N = 5 ta có kết quả là: (5), (4, 1), (3, 2), (3, 1, 1), (2, 2, 1), (2, 1, 1, 1), (1, 1, 1, 1, 1) .


Dữ liệu vào
Dòng đầu tiên đưa vào số lượng test T.

Những dòng kế tiếp đưa vào các bộ test.

Mỗi bộ test là một số tự nhiên N được viết trên một dòng.

T, n thỏa mãn ràng buộc: 1≤T, N≤10


Dữ liệu ra
Với mỗi test in ra kết quả tìm được trên 1 dòng.


Ví dụ
Input #1 

1
4
Output #1 

(4)(31)(22)(211)(1111)*/
#include<bits/stdc++.h>
using namespace std;
int n, a[12];
void out(int n){
    cout<<"(";
    for(int i = 1; i < n; i++) cout<<a[i];
    cout<<a[n]<<")";
}
void quaylui(int i, int k, int sum){
    for(int j = k; j >= 1; j--){
        if(sum + j <= n){
            a[i] = j;
            if(sum + j == n) out(i);
            else quaylui(i+1,j,sum+j);
        }
    }
}

main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        quaylui(1,n,0);
        cout<<endl;
    }
}