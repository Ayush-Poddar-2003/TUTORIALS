
#           --- TYPE CASTING ---

# Process of changing DT

# 1. EXPLICIT TYPECASTING :-

# The conversion done manually.
# It can be achieved with built-in type conversion functions such as int(), float(), hex(), oct(), str(), etc .


# 1) OTHERS --> Integer

x = int(1)      #  1
y = int(2.8)    #  2
z = int("3")    #  3
print(x,y,z)

# NOTE : int("a") = ERROR , CHARACTER strings CAN'T CHANGE into INT


#2) OTHERS --> Floats:

x = float(1)     # x will be 1.0
y = float(2.8)   # y will be 2.8
z = float("3")   # z will be 3.0
w = float("4.2") # w will be 4.2
print(x,y,z,w)

#w= float("a")   ERROR , CHARACTER strings CAN'T CHANGE into FLOAT


#3) OTHERS --> Strings:

y = str(2)    # y will be '2'
z = str(3.0)  # z will be '3.0'
x = str("s1") # x will be 's1'
# -------------------------------------------------------------

# 2. IMPLICIT TYPECASTING :-

# In python we dont have a need to assign DT , It is done by interpreter itself

# Python automatically converts a --> int
a = 7
print(type(a))
 
# Python automatically converts b --> float
b = 3.0
print(type(b))
 
# Python automatically converts c --> float 
c = a + b
print(c)
print(type(c))