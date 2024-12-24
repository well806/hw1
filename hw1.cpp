#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;

    int number;
    char choice;

    do {
        cout << "Введите целое число: ";
        cin >> number;
        numbers.push_back(number);

        cout << "Хотите ввести еще одно число? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    if (!numbers.empty()) {
        int maxNumber = *max_element(numbers.begin(), numbers.end());
        cout << "Максимум в списке: " << maxNumber << endl;
    }
    else {
        cout << "Список пуст." << endl;
    }

    return 0;
}
