#include <iostream>

using namespace std;

int get_input() {
    int input;
    cout << "Введіть число: ";
    cin >> input;

    return input;
}

bool is_even(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int sum_of_digs(int num) {
    int sum = 0, temp;

    while (num > 0) {
        temp = num % 10;
        sum = sum + temp;
        num = num / 10;
    }

    return sum;
}

int prod_of_digs(int num) {
    int prod = 1;

    while (num != 0) {
        prod = prod * (num % 10);
        num = num / 10;
    }

    return prod;
}

int main(void) {

    int num = get_input();
    if (is_even(num)) {
        cout << "Добуток цифр: " << prod_of_digs(num) << endl;
    }
    else {
        cout << "Сума цифр: " << sum_of_digs(num) << endl;
    }

    return 0;
}