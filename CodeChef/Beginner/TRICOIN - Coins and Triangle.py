def evaluate(number):
    return (number * (1 + number) / 2)

testcases = eval(input())
while testcases:
    number_of_coins = eval(input())
    
    low = 1
    high = number_of_coins
    
    while True:
        mid = int((high + low) / 2)
        result = evaluate(mid)
        if (result == number_of_coins or low > high):
            break
        elif (result > number_of_coins):
            high = mid - 1
        else:
            low = mid + 1

    print(mid) 
    testcases -= 1