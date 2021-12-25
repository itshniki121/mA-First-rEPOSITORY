

#include <iostream>

using namespace std;
/// <Работу выполнил>
/// Саламатин Тихон Михайлович
/// <Группа>
/// <M3111>

int main()
{
    // Установка Русского языка
    setlocale(LC_ALL, "Russian");
    char oper;
    double a, b, res;
    cout << "Выберите операцию:\n";
    cout << "(+, -, *, /) \n";
    cin >> oper;
    switch (oper)
    {
    
    case '+':
            cout << "Введите данные \n";
            cin >> a >> b;
            res = a + b;
            break; 
    case '-':
            cout << "Введите данные \n";
            cin >> a >> b;
            res = a - b;
            break; 
   
    case '*':
            cout << "Введите данные \n";
            cin >> a >> b;
            res = a * b;
            break; 
    case '/':
            cout << "Введите данные \n";
            cin >> a >> b;
            res = a / b;
            break; 
    defoult: 
            return 0;
    }
    
    cout << "Ответ = " << res;
}

