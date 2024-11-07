#include <iostream>
#include <cmath>

// Функція для обчислення факторіала
long long factorial(int n) {
	long long result = 1;
	for (int i = 1; i <= n; ++i) {
	result *= i;
    }
    return result;
}

// Функція для обчислення sinh(x) за допомогою ряду Тейлора
double sinh_taylor(double x, int terms) {
    double result = 0.0;
    for (int n = 0; n < terms; ++n) {
        // Додаємо n-ий член ряду: x^(2n+1) / (2n+1)!
        result += std::pow(x, 2 * n + 1) / factorial(2 * n + 1);
    }
    return result;
}

int main() {
    double x;
    int terms;

    // Введення значення x та кількості членів ряду
    std::cout << "Введіть значення x: ";
    std::cin >> x;
    std::cout << "Введіть кількість членів ряду: ";
    std::cin >> terms;

    // Обчислення sinh(x) за допомогою ряду Тейлора
    double result = sinh_taylor(x, terms);
    std::cout << "sinh(" << x << ") ≈ " << result << std::endl;

    return 0;
}



