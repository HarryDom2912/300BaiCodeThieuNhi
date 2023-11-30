/*Nhập vào diện tích S của một mặt cầu. Tính thể tích V của mặt cầu này.
S = 4*pi*R^2
V = (4/3)*pi*R^3 
pi = 3.141593*/

#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main(){
    const float pi = 3.141593;
    float S = 0;
    cout << "Nhap dien tich S: ";
    cin >> S;
    //Tính giá trị của R
    float R = 0, i = 4*pi;
    R = sqrt(S/i);
    //Tính giá trị của V
    float V = 0;
    V = i/3*pow(R,3);
    cout << "The tich V = " << V << endl;
    return 0;
}