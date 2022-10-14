#include<iostream>
#include<windows.h>
using namespace std;

int main (){
    SetConsoleOutputCP(65001);
    system("cls"); Sleep(3000);
    cout<<"Welcome to ricardo game\n"; Sleep(1000);
    cout<<"Ricardo là dota\n";
    cout<<"get ready\n"; Sleep(2000); //khởi động
       
        
        for (int j=10; j >= 0 ; j--){ //đếm 10 ->0 
            system("cls");
    cout<<"Welcome to ricardo game\n"; //3 lệnh này để in giữ nguyên
    cout<<"Ricardo là dota\n";
    cout<<"get ready\n"; 
            
            cout << j; Sleep(1000); //biến đếm
        }
    while (TRUE){
        cout<<"DOTA DOTA "; //in =))
    }

    return 0;
}