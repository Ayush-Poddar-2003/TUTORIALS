#               --- Conditions and If statements ---


# Python relies on indentation to define scope in the code. 
# Other programming languages often use curly-brackets for this purpose.

# NOTE : If statement without : & indentation (will raise an error):

a = 33
b = 200
c = 100 

if  a>b and a>c:
    print("a is greatest")

elif  b>a and b>c:
    print("b is greatest") 

else:
    print("c is greatest")


# ----------------------------------------------------
#              --- SHORT HAND IF ---

# You can put both on the same line as the if statement.

a = 25
b = 3

if a>b: print("a is greater than b")  

# ----------------------------------------------------

#       --- CONDITIONAL / TERNARY OPERATORS ---

# if else in one line

print("A") if a > b else print("B")

# You can also have multiple else statements on the same line:

print("A") if a > b else print("=") if a == b else print("B")


# ----------------------------------------------------
#           --- NESTED IF ELSE ---

x = 41

if x > 10:
    print("Above ten,")
    if x > 20:
        print("and also above 20!")
    else:
        print("but not above 20.")


# ----------------------------------------------------
#         --- The pass Statement ---

# if statements cannot be empty, but if you no content, put in the 
# pass statement to avoid getting an error.

a = 33
b = 200
if b > a:
    pass
