#                                    TUPLE

# --> Im-mutable data type !!
# --> enclosed in ( )

# Tuple items can be of any data type:

    # tuple1 = ("apple", "banana", "cherry") ; STRINGS
    # tuple2 = (1, 5, 7, 9, 3)               ; NUMBERS
    # tuple3 = (True, False, False)          ; BOOLEAN

# EXAMPLE 1

thistuple = ("apple", "banana", "abc", 34, True, 40, "male")
print(thistuple)

# To determine how many items a tuple has, use the len() function:
print(len(thistuple))


# ------X--------X--------X---- IMPORTANT ----X--------X--------X--------X

# To create a tuple with only one item, you have to add a comma after the item, otherwise Python will not recognize it as a tuple.

thistuple = ("apple",)
print(type(thistuple))

# NOT a tuple
thistuple = ("apple")   # This will give string datatype
print(type(thistuple))