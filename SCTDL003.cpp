/*
Xâu nhị phân kế tiếp
 Báo lỗi
Đề bài
Cho xâu nhị phân X[], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân tiếp theo của X[]. Ví dụ X[] =”010101” thì xâu nhị phân tiếp theo của X[] là “010110”.


Dữ liệu vào
Dòng đầu tiên đưa vào số lượng test T.

Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu nhi phân X.

T, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤length(X)≤10^3


Dữ liệu ra
Mỗi dòng tương ứng với một testcase ghi kết quả tìm được


Ví dụ
Input #1 

2
010101
111111
Output #1 

010110
000000 
*/
#include <bits/stdc++.h>

using namespace std;
string s;

void sinh(){
	int i = s.length()-1;
	while(i>=0 && s[i]=='1') i--;
	if(i<0){
		for(int j=0;j<s.length();j++) 
			cout << '0';
		cout << endl;
	}
	else {
		s[i] = '1';
		for(int j=i+1;j<s.length();j++) 
			s[j] = '0';
		cout << s << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		sinh();
	}
}