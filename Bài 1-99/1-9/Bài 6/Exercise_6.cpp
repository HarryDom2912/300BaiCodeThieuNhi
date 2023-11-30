/*Viết chương trình nhập vào ba số nguyên. 
Hãy in ba số này ra màn hình theo thứ tự tăng dẫn và chỉ dùng tối đa một biến phụ*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, temp;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    /* a < b thì đổi chỗ, a >= b*/
    if(a < b){ 
        temp = a;
        a = b;
        b = temp;
    }
    /* a < c thì đổi chỗ , a >= c >= b, tức là a là lớn nhất*/
    if(a < c){
        temp = a;
        a = c;
        c = temp;
    }
    /* b < c thì đổi chỗ, b >= c, tức là c là nhỏ nhất*/
    if(b < c){
        temp = b;
        b = c;
        c = temp;
    }
    cout << "Tang dan: " << c << " " << b << " " << a << endl;
    return 0;
}