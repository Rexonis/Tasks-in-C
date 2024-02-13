def evaluate_expression(expression):
    stack = []
    operators = {'+': lambda x, y: x + y, '-': lambda x, y: x - y, '*': lambda x, y: x * y}

    for element in expression:
        if element.isdigit():
            stack.append(int(element))
        elif element in operators:
            operand2 = stack.pop()
            operand1 = stack.pop()
            result = operators[element](operand1, operand2)
            stack.append(result)

    return stack[0]

# Чтение входных данных
N = int(input())
postfix_expression = input().split()

# Вычисление значения выражения
result = evaluate_expression(postfix_expression)

# Вывод результата
print(result)