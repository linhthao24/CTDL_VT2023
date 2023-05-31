/*
Đếm số kí tự nhìn thấy trong mã nguồn
 Báo lỗi
Đề bài
Chương trình viết bằng 
�
+
+
C++  muốn chạy được trên máy tính phải trải qua quá trình biên dịch mã nguồn thành mã máy.

Mã nguồn 
�
+
+
C++ là các file có định dạng 
.
�
�
�
.cpp cấu thành từcác kí tự trong bảng mã ASCII.

Cho một file mã nguồn C++ có tên là 
�
�
�
�
.
�
�
�
main.cpp. Hãy viết chương trình đếm số lượng kí tự nhìn thấy được trong file đó.


Dữ liệu vào (From File: main.cpp)
File mã nguồn 
�
�
�
�
.
�
�
�
main.cpp


Dữ liệu ra (To File: output.txt)
Số lượng kí tự nhìn thấy trong file 
�
�
�
�
.
�
�
�
main.cpp


Ví dụ
Input #1 

main(){
}
Output #1 

8
Input #2 

#include <iostream>
main(){
    std::cout << "Hello";
}
Output #2 

45*/
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
main(){
    ifstream in("main.cpp");
    ofstream out("output.txt");
    int cnt = 0;
    char kt;
    while(in.get(kt)){
        if(kt != 32 && kt != '\n' && kt != '\t')cnt++;
    }
    out<<cnt<<endl;
    in.close();
    out.close();
}