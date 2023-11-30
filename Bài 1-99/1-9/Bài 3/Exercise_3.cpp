/*Viết chương trình nhập vào tọa độ (xC, yC) là tâm của một đường tròn, và R là bán kính của đường tròn đó. 
Nhập vào tạo độ (xM, yM) của điểm M. Xác định điểm M nằm trong, nằm trên hay nằm ngoài đường tròn.*/

#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float xC, yC, R, xM, yM;
    cout << "Nhap toa do tam C(xC, yC)? ";
    cin >> xC >> yC;
    cout << "Nhap ban kinh R? ";
    cin >> R;
    cout << "Nhap toa do M(xM, yM)? ";
    cin >> xM >> yM;
    //Kiểm tra vị trí của M so với đường tròn
    if(sqrt((xC-xM)*(xC-xM)+(yC-yM)*(yC-yM)) < R){
        cout << "M nam trong C()";
    }
    if(sqrt((xC-xM)*(xC-xM)+(yC-yM)*(yC-yM)) == R){
        cout << "M nam tren C()";
    }if(sqrt((xC-xM)*(xC-xM)+(yC-yM)*(yC-yM)) > R){
        cout << "M nam ngoai C()";
    }
    return 0;

}