testcases = eval(input())

while testcases:

    year_input = eval(input())
    if (year_input == 2010 or year_input == 2015 or year_input == 2016 or year_input == 2017 or year_input == 2019):
        print("HOSTED")
    else:
        print("NOT HOSTED")
    testcases -= 1