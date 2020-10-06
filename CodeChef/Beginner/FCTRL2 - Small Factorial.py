def factorial(number):
    result = 1
    for i in range(1, number + 1):
        result = result * i
    return result

testcases = eval(input())

while testcases:
    number = eval(input())
    facto = factorial(number)
    print(facto)
    testcases -= 1