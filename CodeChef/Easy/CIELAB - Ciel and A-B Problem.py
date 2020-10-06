a, b = map(int, input().split())

answer = a - b

# print(answer)

if (answer % 10 == 9):
    answer -= 1
else:
    answer += 1

print(answer)