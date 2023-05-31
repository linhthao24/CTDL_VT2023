/*
Sinh hoán vị
 Báo lỗi
Đề bài
Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của 1, 2, .., N. Vídụ với N = 3 ta có kết quả: 123, 132, 213,231, 312, 321


Dữ liệu vào
Dòng đầu tiên đưa vào số lượng test T.

Những dòng kế tiếp đưa vào các bộ test.

Mỗi bộ test là một số tự nhiên N được viết trên một dòng.

T, n thỏa mãn ràng buộc: 1≤T, N≤10.


Dữ liệu ra
- Đưa ra kết quả mỗi test theo từng dòng.


Ví dụ
Input #1 

1
2
Output #1 

12 21*/
#include<bits/stdc++.h>
using namespace std;
int n, a[12],check[12] = {};
void out(){
    for(int i = 1; i <= n; i++) cout<<a[i];
    cout<<" ";
}
void quaylui(int i){
    for(int j = 1; j <=n ; j++){
        if(check[j] == 0){
            check[j] = 1;
            a[i] = j;
            if(i == n) out();
            else quaylui(i+1);
            check[j] = 0;
        }
    }
}

main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        quaylui(1);
        cout<<endl;
    }
}