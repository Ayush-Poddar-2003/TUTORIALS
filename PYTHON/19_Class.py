                          
                        # Python Classes/Objects


# Almost everything in Python is an object, with its properties and methods.
# A Class is like a "blueprint" for creating objects.

# Create a Class : To create a class, use the keyword class:

# Example 1 : Create a class named MyClass, with a property named x:

class MyClass:  # class bn gyi
    x = 5       # class ki property

print(MyClass) 
print("-----------------------------------------------------")


# Create Object : we can use the class named MyClass to create objects:

# Example 2 : Create an object named p1, and print the value of x:

class MyClass:  # class bn gyi
    x = 5       # class ki property

p1 = MyClass()  # p1 object bna
print(p1.x)     # object class se property access kr rha h
print("-----------------------------------------------------")



#                       The __init__() Function

# The examples above are classes and objects in their simplest form, and 
# are not really useful in real life applications.
# To understand the meaning of classes we have to understand the built-in __init__() function.

# All classes have a function called __init__(), 
# which is always executed when the class is being initiated.

# Uses - the __init__() function to assign values to object properties, operations 
# that are necessary to do when the object is being created:

# Example 3 : Create a class named Person, 
# use the __init__() function to assign values for name and age:

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

p1 = Person("John", 36)

print(p1.name)
print(p1.age)

# Note: The __init__() function is called automatically every time the class is being used to create a new object.
