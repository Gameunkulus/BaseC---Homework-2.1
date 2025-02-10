// Homework-2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

enum class months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    int a;   
    while (true) {
        cout << "Введите номер месяца: ";
        cin >> a;
        if (a == 0) {
            cout << "До свидания" << endl;
            return false;
        }
        months month = static_cast<months>(a); 
        switch (month) {
        case (months::January):
            cout << "Январь" << endl;
            break;
        case (months::February):
            cout << "Февраль" << endl;
            break;
        case (months::March):
            cout << "Март" << endl;
            break;
        case (months::April):
            cout << "Апрель" << endl;
            break;
        case (months::May):
            cout << "Май" << endl;
            break;
        case (months::June):
            cout << "Июнь" << endl;
            break;
        case (months::July):
            cout << "Июль" << endl;
            break;
        case (months::August):
            cout << "Август" << endl;
            break;
        case (months::September):
            cout << "Сентябрь" << endl;
            break;
        case (months::October):
            cout << "Октябрь" << endl;
            break;
        case (months::November):
            cout << "Ноябрь" << endl;
            break;
        case (months::December):
            cout << "Декабрь" << endl;
            break;
        default: cout << "Неправильный номер!" << endl;
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
