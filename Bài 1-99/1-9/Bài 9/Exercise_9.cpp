/*VIết chương trình nhập vào số x chỉ số đo của một góc, tính bằng phút.
Cho biết nó thuộc góc vuông thứ bao nhiêu của vòng tròn lượng giác.
Tính cos(x), dùng hàm do math.h cung cấp*/

#include<bits/stdc++.h>
#define PI 3.141593

using namespace std;

int main(){
    double x;
    cout << "Nhap so do x cua goc (phut) ";
    cin >> x;
    //Chuyển x từ phút sang độ
    x = x/60;
    //Kiểm tra xem x thuộc góc phần tư lượng giác nào và tính cos(x)
   cout << "x thuoc goc vuong thu " << (int)ceil((x/90))%4 << endl;
   cout << "cos(x) = " << cos(x*PI/180) << endl;
    return 0;
}