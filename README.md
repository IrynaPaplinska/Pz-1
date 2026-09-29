# Pz-1
Практична робота №1_2: Вказівники (Частина 1)
**Виконав:** студент групи 4СОМ Паплінська Ірина (Варіант №1)

##  Завдання.
**Завдання:** <img width="608" height="66" alt="image" src="https://github.com/user-attachments/assets/d8bcf713-6551-413d-bdcd-74e5f7ee59dc" />


### 💻 Код програми:
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
<img width="763" height="740" alt="image" src="https://github.com/user-attachments/assets/f65e9207-3d0d-43e4-b20a-ab621298524f" />
<img width="1542" height="733" alt="image" src="https://github.com/user-attachments/assets/03353d4c-e8b0-47aa-ad98-7aaf1c701c9e" />

### 👁️ Візуалізація пам'яті:
<img width="1243" height="833" alt="image" src="https://github.com/user-attachments/assets/42a8f3e6-1d1e-4b72-ac8e-5bcd2ef42f00" />
<img width="1280" height="828" alt="image" src="https://github.com/user-attachments/assets/3bc85f73-4680-4ad1-a676-98c2697376f8" />
<img width="1291" height="823" alt="image" src="https://github.com/user-attachments/assets/8bb09331-f5b7-41db-87e9-26fadbe1771e" />
<img width="1308" height="833" alt="image" src="https://github.com/user-attachments/assets/87e87a35-f0b7-4161-aae3-7cd91655aa17" />
У практичній роботі продемонстровано базову роботу з вказівниками в мові C++: створення звичайних змінних для збереження даних замовлення (orderNumber, weight, price), отримання їхніх адресах за допомогою оператора &, створення відповідних вказівників та зміну значень безпосередньо в пам'яті через їх розіменування (*). Також реалізовано функцію changePrice, яка приймає вказівник як аргумент і модифікує початкове значення вартості безпосередньо за його адресою.
