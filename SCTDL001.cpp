/*
Sinh xâu nhị phân N bit
 Báo lỗi
Đề bài
Cho một số nguyên dương N. Nhiệm vụ là tạo ra tất cả các chuỗi nhị phân của N bit. Các chuỗi nhị phân này phải theo thứ tự tăng dần.



Dữ liệu vào
- Số lượng testcaset(t≥1).

- Với mỗi testcase, nhập vào 1 số theo tuần tự số nguyên dươngN (N<30)


Dữ liệu ra
- Mỗi dòng tương ứng với một testcase ghi kết quả tìm được


Ví dụ
Input #1 

1
2
Output #1 

0 0
0 1
1 0
1 1*/
#include<bits/stdc++.h>
using namespace std;
int n,a[32];
void out(){
    for(int i = 0; i < n; i++) cout<<a[i]<<" ";
    cout<<endl;
}
void Sinh(int j){
    for(int i = 0; i <= 1; i++){
        a[j] = i;
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
    }
}