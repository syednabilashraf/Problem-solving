total_fuel = 0

with open('input.txt') as masses:
    for mass in masses:
        required_fuel = int((int(mass) / 3)) - 2
        additional_required = int(required_fuel / 3) - 2

        # print("Initial Total: " + str(total_fuel))
        while additional_required > 0:
            # print("Initial additional: " + str(additional_required))
            total_fuel += additional_required
            additional_required = int(additional_required / 3) - 2
        
        total_fuel += required_fuel
    print(total_fuel)
    

