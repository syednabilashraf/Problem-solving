testcases = eval(input())

while testcases:
    the_number = input()
    the_number = "".join(reversed(the_number))
    testcases = testcases - 1
    print(int(the_number))