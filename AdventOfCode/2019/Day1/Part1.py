total_fuel = 0 

with open('input.txt') as masses:
    for mass in masses:
        total_fuel += int((int(mass) / 3)) - 2

print(total_fuel)