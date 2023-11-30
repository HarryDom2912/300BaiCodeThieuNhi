/*Viết chương trình giải phương trình bậc 1: ax + b = 0 (a, b nhập từ bàn phím). 
Xét tất cả các trường hợp có thể.*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    double a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    //Trường hợp a = 0;
    if(a == 0) cout << "Phuong trinh vo nghiem" << endl;
    //Trường hợp a != 0, b = 0;
    else if(b == 0) cout << "Phuong trinh co mot nghiem duy nhat la 0" << endl;
    //Trường hợp a!= 0, b!= 0;
        else cout << "Phuong trinh co nghiem la x = " << -b/a << endl; 
    return 0;
}