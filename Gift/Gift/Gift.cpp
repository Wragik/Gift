// Gift.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
struct gift
{
    char name[15];
    long int ves;
    long double price;
    char id[30];
};

int main()
{
    int z = 0, k = 0;
    const int n = 2;
    struct gift gf[4];

    /////////////////////////////

    strcpy_s(gf[0].name, "Candy");
    gf[0].ves = 15;
    gf[0].price = 4;
    strcpy_s(gf[0].id, "Твёрдый и сладкий");
    
    //---------------------------//

    strcpy_s(gf[1].name, "JellyBean");
    gf[1].ves = 50;
    gf[1].price = 10;
    strcpy_s(gf[1].id, "Красивый дизайн");
    //---------------------------//

    strcpy_s(gf[2].name, "cookie");
    gf[2].ves = 100;
    gf[2].price = 18;
    strcpy_s(gf[2].id, "Калорийность 162 ккал");

    //---------------------------//
    strcpy_s(gf[3].name, "Chocolate");
    gf[3].ves = 150;
    gf[3].price = 22;
    strcpy_s(gf[3].id, "Сделано в Щвейцарии");

    /////////////////////////////
    
    setlocale(LC_ALL, "rus");
    cout << "Сладкий подарок собран" << "\n" << "\n";
    int s;
    srand(time(NULL));
    for (int i = 0; i < 4; i++)
    {
        
        s = rand() % 4;
        for (int j = 0; j < 1; j++)
        {
            cout << gf[s].name << "\n" << gf[s].ves << " гр" << "\n" << gf[s].price << " руб" << "\n" << gf[s].id << "\n" << "\n";
            z += gf[s].price;
            k += gf[s].ves;
        }
        
    }
    cout << "Цена равна " << z << " руб" << "\n";
    cout << "Вес равен " << k << " гр";
}
