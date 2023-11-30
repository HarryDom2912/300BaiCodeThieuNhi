/*Viết chương trình nhập vào ba số thực là ba cạnh của một tam giác. Kiểm tra ba cạnh được nhập có hợp lệ hay không. 
Nếu hợp lệ, hãy cho biết loại tam giác và tính diện tích tam giác đó.*/

#include<bits/stdc++.h>
#define eps 1e-10

using namespace std;

int main(){
    double a, b, c, p, S;
    int flag = 0;
    cout << "Nhap 3 canh cua tam giac: ";
    cin >> a >> b >> c;
    //Kiểm tra tam giác 
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        flag = 0;   //Tam giác thường
        if( a == b || a == c || b == c) flag++; //Tam giác cân //flag = 1
        if( a == b && b == c) flag++;   //Tam giác đều //flag = 2
        if(abs(a*a + b*b - c*c) < eps || abs(a*a + c*c - b*b) < eps || abs(c*c + b*b - a*a) < eps) flag += 3; //Tam giác vuông //flag = 3
        
        switch (flag)
        {
        case 0: cout << "Tam giac thuong" << endl; break;
        case 1: cout << "Tam giac can" << endl; break;
        case 2: cout << "Tam giac deu" << endl; break;
        case 3: cout << "Tam giac vuong" << endl; break;
        case 4: cout << "Tam giac vuong can " << endl;
        }
    } else cout << "Tam giac khong hop le" << endl;
    
    //Tính diện tích hình tam giác đã cho
    p = (a + b + c) / 2;    //p lá nửa chu vi của tam giác
    S = sqrt(p * (p - a) * (p - b) * (p - c));  //Dùng công thức Heron để tính diện tích hình tam giác
    cout << "Dien tich S = " << S << endl;
    
    return 0;
}