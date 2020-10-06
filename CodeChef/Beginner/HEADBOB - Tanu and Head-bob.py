testcases = eval(input())

while testcases:

    recordings = eval(input())
    answers = input()

    if ("I" in answers):
        print("INDIAN")
    elif ("Y" in answers):
        print("NOT INDIAN")
    else:
        print("NOT SURE")
    testcases -= 1