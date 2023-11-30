/*Viết chương trình giải phương trình bậc 2: ax^2 + bx + c = 0 (a, b, c nhập từ bàn phím). 
Xét tát cả các trường hợp có thể.*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c, delta;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    //Trường hợp a = 0
    if(a == 0){
        if(b == 0) cout << "Phuong trinh vo nghiem" << endl;
        else cout << "Phuong trinh co nghiem duy nhat la x = " << -c/b << endl;
    }
    else
    {
        //Tính delta
        delta = b*b - 4*a*c;
        if(delta < 0) cout << "Phuong trinh vo nghiem" << endl;
        else if(delta == 0) cout << "Phuong trinh co nghiem duy nhat la x = " << -b/(2*a) << endl;
            else cout << "Phuong trinh co nghiem la x1 = " << (-b + sqrt(delta))/(2*a) << " x2 = " << (-b - sqrt(delta))/(2*a) << endl;
    }
    return 0;
}