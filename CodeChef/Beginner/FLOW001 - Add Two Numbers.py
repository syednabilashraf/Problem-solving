testcases = eval(input())

while testcases:
    inp = input().split()
    a = eval(inp[0])
    b = eval(inp[1])
    print(a + b)
    testcases = testcases - 1