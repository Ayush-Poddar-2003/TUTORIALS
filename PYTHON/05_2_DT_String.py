#                      --- STRINGS ---


# NOTE : Python does not have a character data type, 
# a single character is simply a string with a length of 1.

# ----------------------------------------------------------------------

# Strings are surrounded by either single quotation , or double quotation marks
# We can assign a multiline string by using three quotes(double/single quote will lead to error):

a =   'hello'
b =   "Hello"
c = """ayush
is  
sexy """

print(type(a))
print(type(b))
print(type(c))

# OR

print('''ayush
is 
sexy 
boy''')


# ----------------------------------------------------------------------
#                     --- SLICING ---

# Since strings are like arrays hence we can do iterations

a = "Hello, World!"
print(a[1]) #1

for x in "banana":
    print(x)

b = "Hello, World!"

print(b[2:5])
print(b[:5])
print(b[2:])
print(b[-5:-2]) #simply replace -ve vy +ves you'll get the answers

# ----------------------------------------------------------------------

#                --- SOME BASIC FUNCTIONS ---

a = "Hello, World!"

print(len(a))
print(a.upper())
print(a.lower())
print(a.title())
print(a.swapcase())
print(a.capitalize())

print(a.isdigit())
print(a.islower())
print(a.isupper())
print(a.istitle())
print(a.isalnum())
print(a.isspace())

print(a.startswith("H"))
print(a.endswith("!"))

print(a.find("!"))

print(a.count("o"))
print(a.replace("H", "J"))

print(a.strip())        # removes any whitespace from START or end:
print(a.split(","))     # returns a list where the text b/W the separator becomes list items.

list1 = ['g', 'e', 'e', 'k', 's']
print("".join(list1))
 
# Joining with string
list1 = " geeks "
print("$".join(list1))

# ---------------------------------------------------------------------

# To check if a certain character is present we can use 'in' which returns either T/F

txt = "The best things in life are free!"
print("free" in txt)    # true

# ---------------------------------------------------------------------

#                    --- FORMAT { } ---

# As we cannot combine strings and numbers like this:

"""
    age = 36
    txt = "My name is John, I am " + age
    print(txt) 
""" # ERROR

# The format() method takes the passed arguments, and places them in the string where the placeholders {} are:

age = 36
txt = "My name is John, and I am {} "
print(txt.format(age))


# Can take multiple parameters too !!!

quantity = 3
itemno = 567
price = 49.95

myorder = "I want {} pieces of item {} for {} dollars."
print(myorder.format(quantity, itemno, price))

#You can use index numbers {0} placed in the correct placeholders:

quantity = 3
itemno = 567
price = 49.95
myorder = "I want to pay {2} dollars for {0} pieces of item {1}."

print(myorder.format(quantity, itemno, price))


