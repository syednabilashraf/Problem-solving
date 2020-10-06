# Python implementation of finding a substring within the string.

first_string = input("Enter a string: ")
second_string = input("Enter the substring to search for: ")

# the find(string_name) returns the first index where the substring is found and -1 if nothing is found.


# The code below just checks if the substring exists or not

if first_string.find(second_string) > -1:
    print("Found")
else:
    print("Not found")