#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
class Chocolate;
class Marmelad;
const int para = 3; 

class Candy
{
private:

    string name;
    int ves;
    double price;
    string f;

public:
    Candy(string name, int ves, double price)
    {
        this->name = name;
        this->ves = ves;
        this->price = price;
    }
    string GetName()
    {
        return name;
    }

    void SetName(string name)
    {
        this->name = name;
    }
    int GetVes()
    {
        return ves;
    }

    void SetVes(int ves)
    {
        this->ves = ves;
    }
    double GetPrice()
    {
        return price;
    }

    void SetName(double price)
    {
        this->price = price;
    }
    string GetF()
    {
        return f;
    }

    void SetF(string f)
    {
        this->f = f;
    }
};

class Chocolate : public Candy {
public:
    bool dark = true;
    int s;
    string f;
    Chocolate() : Candy("Chocolate", 125 , 40)
    {
        cool();
        SetF(f);
    }
    void cool()
    {
        srand(time(NULL));
        s = 1 + rand() % 2;
        switch (s)
        {
        case 1:
            dark = true;
            f = "Шоколад чёрный";
            break;
        case 2:
            dark = false;
            f = "Шоколад белый";
            break;

        }
    }
};
class Jelly : public Candy {
public:
    string tas = "Томск";
    Jelly() :Candy("Jellybean", 50, 27)
    {
        SetF(tas);
    }
};
class Marmelad : public Candy {
public:
    string tast = "taste";
    Marmelad() :Candy("Marmelad", 100, 35)
    {
        SetF(tast);
    }
};
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Подарок собран " << "\n" << "\n";
    int pricing = 0, weight = 0;
    Chocolate chock;
    Marmelad marm;
    Jelly jel;
    Candy gift[para] = { chock, marm, jel};
    for (int i = 0; i < para; i++)
    {
        cout << gift[i].GetName() << "\n" << gift[i].GetVes() << " гр" << "\n" << gift[i].GetPrice() << " руб" << "\n" << gift[i].GetF() << "\n" << "\n";
        weight += gift[i].GetVes();
        pricing += gift[i].GetPrice();
    }
    cout << "Итого " << weight << " гр" << "\n";
    cout << "Итого " << pricing << " руб";
}