#               --- FOR LOOP ---


# A for loop is used for iterating over a sequence ( list,tuple,dictionary,set,string).

fruits = ["apple", "banana", "cherry"]

for x in fruits:
    print(x)

# -------------------------------------------------------
#           -- Looping Through a String ---

for x in "banana":
    print(x)


# -------------------------------------------------------
#           --- The break Statement ---

# With the break statement we can stop before it has looped through all the items:

for x in fruits:
    print(x)
    if x == "banana":
        break


# -------------------------------------------------------
#           --- The continue Statement ---

for x in fruits:
    if x == "banana":
        continue
    print(x)


# -------------------------------------------------------
#           --- The RANGE() Function ---

# To loop through a set of code a specified number of times, 
# we can use the range() function,

for x in range(6): # has start stop and end since it's end mentioned
    print(x) # 012345


# -------------------------------------------------------
#                   Else in For Loop

for x in range(6):
    print(x)
else:
    print("Finally finished!")

# NOTE: The else block will NOT be executed if the loop is stopped by a break statement.

for x in range(6):
    if x == 3: 
        break
    print(x)
else:
    print("Finally finished!")


# -------------------------------------------------------
#                   -- Nested Loops ---

adj = ["red", "big", "tasty"]
fruits = ["apple", "banana", "cherry"]
for x in adj:
    for y in fruits:
        print(x, y)


