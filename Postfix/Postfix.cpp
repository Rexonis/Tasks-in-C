#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
#include <functional>

// Функция для вычисления значения выражения в постфиксной нотации
int evaluateExpression(const std::vector<std::string>& expression) {
    // Создаем стек для хранения операндов
    std::stack<int> stack;
    // Создаем словарь операторов и соответствующих им функций
    std::unordered_map<char, std::function<int(int, int)>> operators = {
        {'+', [](int x, int y) { return x + y; }},
        {'-', [](int x, int y) { return x - y; }},
        {'*', [](int x, int y) { return x * y; }}
    };

    // Перебираем каждый элемент выражения
    for (const std::string& element : expression) {
        // Если элемент является числом, помещаем его в стек
        if (isdigit(element[0])) {
            stack.push(std::stoi(element));
        } 
        // Если элемент является оператором
        else if (operators.find(element[0]) != operators.end()) {
            // Извлекаем два последних операнда из стека
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            // Применяем оператор к операндам и помещаем результат в стек
            int result = operators[element[0]](operand1, operand2);
            stack.push(result);
        }
    }

    // Результат выражения находится на вершине стека
    return stack.top();
}

int main() {
    int N;
    std::cin >> N; // Вводим количество элементов выражения

    // Создаем вектор для хранения постфиксного выражения
    std::vector<std::string> postfixExpression;
    postfixExpression.reserve(N);
    // Вводим элементы постфиксного выражения
    for (int i = 0; i < N; ++i) {
        std::string element;
        std::cin >> element;
        postfixExpression.push_back(element);
    }

    // Вычисляем значение выражения и выводим результат
    int result = evaluateExpression(postfixExpression);
    std::cout << result << std::endl;

    return 0;
}
