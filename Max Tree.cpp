#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Ввод количества элементов
    int N;
    std::cin >> N;

    // Ввод массива A
    std::vector<int> A;
    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;
        A.push_back(num);
    }

    // Сортировка массива по возрастанию
    std::sort(A.begin(), A.end());

    // Вычисление максимального произведения
    int max_product;

    // Если все числа неотрицательные или все отрицательные
    if (A[0] >= 0 || A[N - 1] <= 0) {
        max_product = A[N - 3] * A[N - 2] * A[N - 1];
    } else {
        // Иначе выбираем максимум из двух вариантов
        max_product = std::max(A[0] * A[1] * A[N - 1], A[N - 3] * A[N - 2] * A[N - 1]);
    }

    // Вывод максимального произведения
    std::cout << max_product << std::endl;

    return 0;
}