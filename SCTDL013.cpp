/*
Tổ hợp
 Báo lỗi
Đề bài
Cho hai số nguyên dương N và K. Nhiệm vụ của bạn là hãy liệt kê tất cả các tập con K phần  tử của 1, 2, .., N. Ví dụ với N=5, K=3 ta có 10 tập con của 1, 2, 3, 4, 5 như sau: {1, 2, 3}, {1, 2, 4},{1, 2, 5},{1, 3, 4},{1, 3, 5},{1, 4, 5},{2, 3, 4},{2, 3, 5},{2, 4, 5},{3, 4, 5}.


Dữ liệu vào
- Dòng đầu tiên đưa vào số lượng test T.

-Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một cặp số tự nhiên N, K được viết trên một dòng.

-T, n thỏa mãn ràng buộc: 1≤T≤100; 1≤k ≤ n≤15.


Dữ liệu ra
- In ra kết quả trên 1 dòng ứng với mỗi testcase


Ví dụ
Input #1 

2
4 3
5 3
Output #1 

123 124 134 234
123 124 125 134 135 145 234 235 245 345
*/
#include<bits/stdc++.h>
using namespace std;
int n,k,a[20];
void out(){
    for(int i = 1; i <= k; i++) cout<<a[i];
    cout<<" ";
}
void sinh(int j){
    for(int i = a[j-1] + 1; i <= n-k+j; i++){
        a[j] = i;
        if( j == k) out();
        else sinh(j+1);
    }
}
main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        sinh(1);
        cout<<endl;
    }
}