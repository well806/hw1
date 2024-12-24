#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = { 3, 5, 7, 2, 8, -1, 4 };

    if (!numbers.empty()) {
        int maxNumber = *max_element(numbers.begin(), numbers.end());
        cout << "Максимум в списке: " << maxNumber << endl;
    }
    else {
        cout << "Список пуст." << endl;
    }

    return 0;
}
