def evalRPN(tokens):
    stack = []
    for token in tokens:
        if token in ["+", "-", "*", "/"]:
            op2 = stack.pop()
            op1 = stack.pop()
            if token == "+":
                stack.append(op1 + op2)
            elif token == "-":
                stack.append(op1 - op2)
            elif token == "*":
                stack.append(op1 * op2)
            elif token == "/":
                stack.append(int(op1 / op2))
        else:
            stack.append(int(token))
    return stack.pop()

# test cases
print(evalRPN(["2", "1", "+", "3", "*"])) # 9
print(evalRPN(["4", "13", "5", "/", "+"])) # 6
print(evalRPN(["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"])) # 22
