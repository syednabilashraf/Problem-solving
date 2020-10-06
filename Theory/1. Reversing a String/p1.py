def algo_reverse(my_string):
    new_string = ""
    for char in my_string:
        new_string = char + new_string
    return new_string

my_string = "omae wa mou shindeiru"
print(my_string[::-1])
print(my_string)

print(algo_reverse(my_string))

# No built in function for python.
# This is the same as the algo approach, which is reverse iterate through the string.
