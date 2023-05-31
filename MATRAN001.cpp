/*
MATRAN001 - Đường đi lớn nhất
 Báo lỗi
Đề bài
Cho một ma trận các số nguyên không âm A có kích thước N hàng và M cột. Giả sử trên ma trận, từ ô (i, j) ta có thể di chuyển đến mộttrong các ô (i+1, j-1), (i+1, j) hoặc (i+1, j+1). Độ dài đường đi xuất phát từ một ô bất kỳ dòng đầu tiên đến một ô ở dòng thứ N được tính bằng tổng giá trị của các ô đi qua.

Hãy tìm một đường đi từ dòng đầu tiên đến dòng cuối cùng của ma trận sao cho độ dài đường đi là lớn nhất.


Dữ liệu vào
-Số lượng testcase t.

- Với mỗi testcase, nhập vào hai số nguyên dương N và M; N dòng tiếp theo, mỗi dòng chứa M số nguyên không âm của ma trận A.


Dữ liệu ra
- Mỗi dòng tương ứng một testcase, cho biết độ dài đường đi lớn nhất tìm được


Ví dụ
Input #1 

1
3 3
1 2 3
6 5 4
7 8 9
Output #1 

17*/
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a[120][120],sum[150][150];
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			sum[i][0]=-INT_MAX;
			sum[i][m+1]=-INT_MAX;
		}
		for(int i=1;i<=m;i++) sum[1][i]=a[1][i];
		for(int i=2;i<=n;i++){
			for(int j=1;j<=m;j++){
				sum[i][j]=a[i][j]+max(sum[i-1][j-1],max(sum[i-1][j],sum[i-1][j+1]));
			}
		}
		int kq=-INT_MAX;
		for(int i=1;i<=m;i++){
			kq=max(kq,sum[n][i]);
		}
		cout<<kq<<"\n";
	}
}