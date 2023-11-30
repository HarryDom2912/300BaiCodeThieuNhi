/*Số BHXH của Canada (SIN - Canadian Social Insurance Number) là một số có 9 chữ số, được kiểm tra tính hợp lệ như sau:
- Số phải nhất (vị trí là 1, tính từ phải sang), là số kiểm tra (check digit).
- Trọng số được tính từ phải qua trái (không tính check digit), bằng s1 + s2:
+ s1 là tổng các số có vị trí lẻ.
+ Các số có vị trí chẵn nhân đôi. Nếu kết quả nhân đôi có hai chữ số thì kết quả là tổng của hai chữ số này.
s2 là tổng các kết quả.
SIN hợp lệ có tổng trọng số với số kiểm tra chia hết cho 10.
Ví dụ: SIN 193456787
- Số kiểm tra là 7.
- Trọng số là tổng của s1 và s2, với:
+ s1 = 1 + 3 + 5 + 7 = 16
+ Các số có vị trí chẵn nhân đôi: (9*2) (4*2) (6*2) (8*2) => 18 8 12 16
s2 = (1+8)+8+(1+2)+(1+6) = 27
Trọng số bằng s1 + s2 = 16 + 27 = 43
Vì tổng trọng số với số kiểm tra 43 + 7 = 50 chia hết cho 10 nên số SIN hợp lệ.
Viết chương trình nhập một số SIN. Kiểm tra xem số SIN đó có hợp lệ hay không.
Nhập 0 để thoát*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int SIN_num;
    while (1)
    {
    int s1 = 0, s2 = 0, digit, count = 0;
    cout << "SIN (0 de thoat): ";
    cin >> SIN_num;
    if(SIN_num == 0) break;
    //Kiểm tra xem số SIN có phải là một số có 9 sô hay không 
    for(int pos = 0 ; SIN_num > 0; SIN_num /= 10, ++pos)
    {
        count++;
    }
    if(count != 9) cout << "SIN khong hop le!" << endl;
    else
        { 
            //Lấy số digit là số cuối cùng của dãy số
            digit = SIN_num%10;
            SIN_num /= 10; //Loại bỏ số cuối cùng ra khỏi dãy
            //Tính s1 và s2
            for(int pos = 0 ; pos < 8 && SIN_num > 0; SIN_num /= 10, ++pos)
            {
                int t = SIN_num%10;
                if(pos%2 != 0) s1 += t;
                if(pos%2 == 0) s2 += (t*2)/10 + (t*2)%10;
            }
            //Kiểm tra tính hợp lệ của số SIN}
            if((digit + s1 + s2)%10 == 0) cout << "SIN hop le!" << endl;
            else cout << "SIN khong hop le!" << endl;
        }
    }
    return 0;
}
