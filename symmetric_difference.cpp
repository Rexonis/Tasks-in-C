#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

std::vector<int> symmetric_difference(const std::vector<int>& A, const std::vector<int>& B) {
    std::set<int> set_A(A.begin(), A.end());
    std::set<int> set_B(B.begin(), B.end());

    std::vector<int> set_C;
    std::set_symmetric_difference(set_A.begin(), set_A.end(), set_B.begin(), set_B.end(), std::back_inserter(set_C));

    return set_C;
}

int main() {
    std::string input_string;
    std::getline(std::cin, input_string);

    std::vector<int> tokens;
    size_t pos = 0;
    while ((pos = input_string.find(' ')) != std::string::npos) {
        tokens.push_back(std::stoi(input_string.substr(0, pos)));
        input_string.erase(0, pos + 1);
    }
    tokens.push_back(std::stoi(input_string)); // Добавляем последнее число

    size_t index = std::find(tokens.begin(), tokens.end(), 0) - tokens.begin();

    std::vector<int> set_A(tokens.begin(), tokens.begin() + index);
    std::vector<int> set_B(tokens.begin() + index + 1, tokens.end());

    std::vector<int> result = symmetric_difference(set_A, set_B);

    result.erase(std::remove(result.begin(), result.end(), 0), result.end());

    if (result.empty()) {
        std::cout << 0 << std::endl;
    } else {
        std::sort(result.begin(), result.end());
        for (int num : result) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}