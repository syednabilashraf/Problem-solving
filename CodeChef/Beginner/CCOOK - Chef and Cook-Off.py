number_of_competitors = eval(input())

while number_of_competitors:
    problems_solved = input()

    counter = 0
    for i in range(len(problems_solved)):
        if ("1" in problems_solved[i]):
            counter += 1

    if counter == 0:
        print("Beginner")
    elif counter == 1:
        print("Junior Developer")
    elif counter == 2:
        print("Middle Developer")
    elif counter == 3:
        print("Senior Developer")
    elif counter == 4:
        print("Hacker")
    elif counter == 5:
        print("Jeff Dean")
    

    number_of_competitors -= 1