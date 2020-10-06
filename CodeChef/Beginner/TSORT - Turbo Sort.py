number_of_digits = eval(input())

list = []

for i in range(number_of_digits):
    list.append(eval(input()))

list.sort()

for i in list:
    print(i)