#                                    BOOLEAN

# Booleans represent one of two values: True or False.

# When you run a condition in an if statement, Python returns True or False:

# -------------------------------------------------
# NOTE : Most Values are TRUE -

    # Any string is True, except empty strings.
    # Any number is True, except 0
    # Any list, tuple, set, and dictionary are True, except empty ones.

# SYNTAX : print(bool(" "))

print(bool("abc"))
print(bool(123))
print(bool(["apple", "cherry", "banana"]))

# Some Values are False
#   empty values, such as (), [], {}, "",  0, and the value None.

print(bool(False))
print(bool(None))
print(bool(0))
print(bool(""))
print(bool(()))
print(bool([]))
print(bool({}))


#                               