# FUNCTION :-
# A function is a block of code which only runs when it is called.

# FUNCTION DEFINITION :
    # In Python a function is defined using the "def" keyword:

# FUNCTION CALLING :
    # To call a function, use the function name followed by parenthesis:


def func1():
    print("Hello from a function 1")

func1() 

# ---------------------------------------

# ARGUMENT AND PARAMETER :-

# No of Arguments should be equal to No of Parameters BUT 
# IfFFF you do not know how many arguments that will be passed , add * before the parameter name 


def func2(*kids):
    print("The youngest child is " + kids[2])  

func2("Emil", "Tobias", "Linus")


# ---------------------------------------

# KEYWORD ARGUMENTS : You can also send arguments with the key = value syntax.


def func3(child3, child2, child1):
    print("The youngest child is " + child3)

func3(child1 = "Emil", child2 = "Tobias", child3 = "Linus")


# If you do not know how many keyword arguments that will be passed into your function, 
# add two asterisk ** before the parameter name in the function definition.

def func_name(**kid):
    print("His last name is " + kid["lname"])

func_name(fname = "Tobias", lname = "Refsnes")


# ---------------------------------------

# DEFAULT PARAMETER VALUE : If we call the function without argument, it uses the default value:

def func_name(country = "Norway"):
    print("I am from " + country)

func_name("Sweden")
func_name("India")
func_name()
func_name("Brazil")


# ---------------------------------------

# Passing a List as an Argument
# You can send any data types of argument to a function (string, number, list, dictionary etc.)

def func_name(food):
    for x in food:
        print(x)

fruits = ["apple", "banana", "cherry"]
func_name(fruits)


print("--------------------------------------")


# Return Values
# To let a function return a value, use the return statement:

def func_name(x):
    return 5 * x

print(func_name(3))
print(func_name(5))
print(func_name(9))
print("--------------------------------------")


# The pass Statement
# function definitions cannot be empty, but if you for some reason have a function 
# definition with no content, put in the pass statement to avoid getting an error.

def myfunction():
    pass


