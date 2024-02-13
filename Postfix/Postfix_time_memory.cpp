#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
#include <functional>
#include <chrono> // Для измерения времени выполнения
#include <iomanip> // Для вывода времени с точностью до миллисекунды
#include <ctime> // Для измерения памяти

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

    // Переменные для измерения времени выполнения
    auto start_time = std::chrono::steady_clock::now();

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
    int result = stack.top();

    // Замеряем время выполнения
    auto end_time = std::chrono::steady_clock::now();
    auto elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

    // Получаем объем памяти
    std::clock_t used_memory = std::clock() / (CLOCKS_PER_SEC / 1000);

    // Выводим время выполнения и объем памяти
    std::cout << "Время выполнения: " << elapsed_time.count() << " миллисекунд" << std::endl;
    std::cout << "Затраченная память: " << used_memory << " Мб" << std::endl;

    
    return result;
}

int main() {
    int N;
    std::cin >> N; // Вводим количество элементов выражения
    std::cout << "Входные данные 1: " << N << std::endl;
    // Создаем вектор для хранения постфиксного выражения
    std::vector<std::string> postfixExpression;
    postfixExpression.reserve(N);
    // Вводим элементы постфиксного выражения
    for (int i = 0; i < N; ++i) {
        std::string element;
        std::cin >> element;
        postfixExpression.push_back(element);
        std::cout << "Входные данные 2: " << element << std::endl;
    }
    // Вычисляем значение выражения и выводим результат
    int result = evaluateExpression(postfixExpression);
    std::cout << "Выходные данные: " << result << std::endl;
    
    

    return 0;
}