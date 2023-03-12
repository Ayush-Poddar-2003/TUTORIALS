#                                   Python Try Except


# Try block : lets you test a block of code for errors.(tukke se chl gya to theek)

# Except block lets you handle the error. (agr nhi chla to ye waala)

# Else block lets you execute code when there is no error. (agr try chl gya to ye chl jayegi)

# Finally block lets you execute code, regardless of the result of the try and except blocks.
# kuch chle na chle ye chalega

# --------------------------------------------------------------------

# Genrally if an error occurs, Python normally stops and generates an error message.
# These errors/eception can be handled using the try statement:


try:
    print(x)   # This statement will raise an error, because x is not defined:
except:
    print("\ntry didn't work hence except is working")
print("----------------------------------------------------")

# Since the try block raises an error, the except block will be executed.
# Without this feature, the program will crash and raise an error:

#                               Many Exceptions
# You can define as many exception blocks as you want, 
# e.g. if you want to execute a special block of code for a special kind of error:

try:
    print(x)
except NameError:
    print("Variable x is not defined")
except:
    print("Something else went wrong")
print("----------------------------------------------------")


#                                        Else
# You can use the else keyword to define a block of code to be executed 
# if no errors were raised:
try:
    print("Hello from try")
except:
    print("Something went wrong")
else:
    print("Nothing went wrong from else")
print("----------------------------------------------------")


#                                        Finally
# The finally block, if specified, will be executed regardless if the try block 
# raises an error or not.

try:
    print(x)
except:
    print("Something went wrong")
else:
    print("Nothing went wrong from else")
finally:
    print("The 'try except' is finished from finally")
print("----------------------------------------------------")

