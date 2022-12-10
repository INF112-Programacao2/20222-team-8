/*#include <stdio.h>
#include <time.h>

int main(void) {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("Data: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
}*/

#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SYSTEMTIME tm;//variável do sistema referente ao tempo
    GetSystemTime(&tm);//comando que pega o tempo e coloca em tm
    int w=20,i,dia,mes,ano=0;
    char dias;
 //   do{
        GetSystemTime(&tm);//comando que pega o tempo
        cout<<"hora    : "<<tm.wHour-2<<endl;//mostra as horas
        cout<<"minuto  : "<<tm.wMinute<<endl;//mostra os minutos
        cout<<"segundo : "<<tm.wSecond<<endl;//mostra os segundos
       // cout<<"A Hora eh -> "<<tm.wHour-2<<" : "<<tm.wMinute<<" : "<<tm.wSecond<<endl;

        cout << "Dia: " << tm.wDay << endl;//mpostra o dia do mês
        cout << "Mes: " << tm.wMonth << endl;//mostra o mês do ano
        cout << "Ano: " << tm.wYear << endl;//mostra o ano
        Sleep(999);
       // system("cls");
        w--;
   // }while(w);
   return 0;
    
}