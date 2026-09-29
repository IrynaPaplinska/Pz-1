#include <iostream>
using namespace std;
void changePrice(double* price) {
    *price = *price + 30; 
}
int main() {
    int orderNumber = 101;
    cout << "Номер замовлення: " << orderNumber << endl;
    cout << "Адреса orderNumber: " << &orderNumber << endl;
    int* ptr = &orderNumber;
    cout << "Адреса через вказівник: " << ptr << endl;
    cout << "Значення через вказівник: " << *ptr << endl;
    *ptr = 150;
    cout << "Новий номер замовлення: " << orderNumber << endl;
    double weight = 2.5;
    double* weightPtr = &weight;
    cout << "\nВага замовлення: " << weight << " кг" << endl;
    cout << "Адреса weight: " << &weight << endl;
    cout << "Адреса через weightPtr: " << weightPtr << endl;
    cout << "Вага через вказівник: " << *weightPtr << " кг" << endl;
    *weightPtr = 3.2;
    cout << "Нова вага: " << weight << " кг" << endl;
    double price = 120.0;
    cout << "\nПочаткова вартість: " << price << " грн" << endl;
    changePrice(&price);
    cout << "Нова вартість: " << price << " грн" << endl;
    return 0;
}