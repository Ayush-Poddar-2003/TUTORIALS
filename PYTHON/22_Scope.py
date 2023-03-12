
#                               Python Scope

# A variable is only available from inside the region it is created. This is called SCOPE.

# Local Scope : A variable created inside a function has local scope and 
#               can only be used inside that function.

def myfunc():
    x = 300   # LOCAL SCOPE
    print(x)

myfunc()
print("-------------------------------------------------")

# Function Inside Function
# Since the variable x is not available outside the function, 
# but it is available for any function inside the function:

def myfunc():
    x = 300
    def myinnerfunc():  
        print(x)      
    myinnerfunc()

myfunc()
print("-------------------------------------------------")


#     ---X--------------X---------------X- GLOBAL SCOPE -X---------------X---------------X----------------X

# A variable created in the main body of the Python code is a global variable 
# and belongs to the global scope.

x = 300
def myfunc():
    print(x)

myfunc()
print("-------------------------------------------------")


# If you operate with the same variable name inside and outside of a function, 
# Python will treat them as two separate variables, one available in the global scope 
# (outside the function) and one available in the local scope (inside the function):

x = 300 # GLOBAL WAALA

def myfunc():
    x = 200 # LOCAL WALA
    print(x)

myfunc()
print(x) # The function will print the local x, and then the code will print the global x:
print("-------------------------------------------------")


#                                     Global Keyword

# If you need to create a global variable, but are stuck in the local scope, you can use the global keyword.

def myfunc():
    global x #The global keyword makes the variable global.
    x = 300

myfunc()
print(x)
print("-------------------------------------------------")

# Also, use the global keyword if you want to make a change to a global variable inside a function.

x = 300

def myfunc():
    global x
    x = 200

myfunc()
print(x)
