testcases = eval(input())

while testcases:
    the_number = input()
    print(eval(the_number[0]) + eval(the_number) % 10)
    testcases -= 1