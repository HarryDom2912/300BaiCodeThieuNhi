/*Viết trò chơi bao-đá-kéo với luật chơi: bao thắng đá, đá thắng kéo, kéo thắng bao. 
Người dùng nhập vào một trong ba ký tự b (bao), d (đá), k (kéo); 
máy tính sinh ngẫu nhiên một trong ba ký tự trên, thông báo kết quả chơi.*/

#include<bits/stdc++.h>

using namespace std;

int main()
{   
    char b, d, k, nhap;
    cout << "Nhap ky tu (b-d-k), ky tu khac de thoat: ";
    cin >> nhap;
    while (1)
    {   
        cout << "Nhap ky tu (b-d-k), ky tu khac de thoat: ";
        cin >> nhap;
        if(nhap != 'b' && nhap != 'd' && nhap != 'k') break;
        else
        {
            cout << "Computer: ";
            
        }
    }
    return 0;   
}