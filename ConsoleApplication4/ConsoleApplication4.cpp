#include <iostream>
using namespace std;
class Fraction
{
private:
    int top;
    int bot;
public:

    void Init()
    {
        cout << "Введите числитель дроби: " << endl;
        cin >> top;
        cout << "Введите знаменатель дроби: " << endl;
        cin >> bot;
        system("cls");
    }

    void Init(int a, int b)
    {
        top = a;
        bot = b;
    }
    
    void Print()
    {
        cout << top << endl << "-" << endl << bot << endl << endl;
    }

    int GetTop()
    {
        return top;
    }

    int GetBot()
    {
        return bot;
    }
    Fraction Sum(Fraction second)
    {
        int ResTop;
        int ResBot;
        ResTop = GetTop() * second.GetBot() + GetBot() * second.GetTop();
        ResBot = GetBot() * second.GetBot();
        Fraction res;
        res.Init(ResTop, ResBot);
        return res;
    }

    Fraction Sub(Fraction second)
    {
        int ResTop;
        int ResBot;
        ResTop = GetTop() * second.GetBot() - GetBot() * second.GetTop();
        ResBot = GetBot() * second.GetBot();
        Fraction res;
        res.Init(ResTop, ResBot);
        return res;
    }


    Fraction Mul(Fraction second)
    {
        int ResTop;
        int ResBot;
        ResTop = GetTop() * second.GetTop();
        ResBot = GetBot() * second.GetBot();
        Fraction res;
        res.Init(ResTop, ResBot);
        return res;
    }

    Fraction Div(Fraction second)
    {
        int ResTop;
        int ResBot;
        ResTop = GetTop() * second.GetBot();
        ResBot = GetBot() * second.GetTop();
        Fraction res;
        res.Init(ResTop, ResBot);
        return res;
    }
    

};
Fraction Menu(Fraction first, Fraction second)
{
    Fraction res;
    int select;
    cout << "Действия с дробями: " << endl;
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cout << "3. Умножение" << endl;
    cout << "4. Деление" << endl;
    cout << "Что из этого вы хотите сделать?" << endl;
    cin >> select;
    switch (select)
    {
    case 1:
        res = first.Sum(second);
        break;
    case 2:
        res = first.Sub(second);
        break;
    case 3:
        res = first.Mul(second);
        break;
    case 4:
        res = first.Div(second);
        break;
    default:
        break;
    }
    system("cls");
    return res;
}

int main()
{
    setlocale(LC_ALL, "ru");
    Fraction first;
    Fraction second;
    Fraction res;
    first.Init();
    second.Init();
    first.Print();
    second.Print();
    res = Menu(first,second);
    res.Print();
}

