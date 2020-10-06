testcases = eval(input())

maximum_lead = 0
winner = 0
player1 = 0
player2 = 0

for i in range(testcases):
    a, b = map(int, input().split())
    player1 += a
    player2 += b
    if player1 - player2 > maximum_lead:
        winner = 1
        maximum_lead = player1 - player2
    elif player2 - player1 > maximum_lead:
        winner = 2
        maximum_lead = player2 - player1

print(winner, maximum_lead)