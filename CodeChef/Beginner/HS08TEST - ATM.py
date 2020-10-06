inp = input().split()

request = eval(inp[0])
balance = eval(inp[1])

if (request + 0.50 > balance and request % 5 == 0):
    balance
elif (request + 0.50 < balance  and request % 5 == 0):
    balance = balance - request - 0.50
elif (request + 0.50 == balance and request % 5 == 0):
    balance = 0

print("{0:.2f}".format(balance))