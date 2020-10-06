testcases = eval(input())

while testcases:
    numbers = input().split()
    a = eval(numbers[0])
    b = eval(numbers[1])
    print(a % b)
    testcases -= 1