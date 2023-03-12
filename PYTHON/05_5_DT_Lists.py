#                             --- LIST ---


# -> Lists are used to store multiple items in a single variable.
# -> List items are ordered, indexed, changeable and allow duplicate values.
# -> enclosed in [ ]


ABC = ["ayush","aditi",102,10.9,"anshu",0.9999] # List items can be of any data type:

print(ABC) # result with [ ] and " "
print(type(ABC))
print(len(ABC))

# -----------------------------------------------------
#                The list() Constructor

# We can also use the list() constructor for creating a new list.

XYZ = list(("apple", "banana", "cherry")) # note the DOUBLE round-brackets
print(type(XYZ))


# -----------------------------------------------------
#                --- ARRAY Operatioms ---

# As we have indexing in list, we can iterate ,access & slice elements

thislist = ["apple", "banana", "cherry", "kiwi", "melon", "mango"]

print(thislist[1]) # apple , quotes won't be there
print(thislist[2:5]) # [ ] will be present
# Range goes till N-1

thislist[1] = "blackcurrant"    # We can change the values too


# -----------------------------------------------------
thislist = ["apple", "banana", "cherry"]    # SAMPLE 
tropical = ["mango", "pineapple", "papaya"]
# -----------------------------------------------------

#                   --- INSERT METHODS ---

# 1) insert( )
#    To insert a new list item, without replacing any of the existing values, 

thislist.insert(2, "watermelon")


#  2) append()
#     To add an item to the end of the list, use the append() method:

thislist.append("orange")


#   3) extend()
#      To append elements from another list/collection to the current list,
#      you can add any iterable object (tuples, sets, dictionaries etc.).

thislist.extend(tropical)


# -----------------------------------------------------

#                   --- DELETION METHODS ---

# 1)  remove( )
#     It removes the specified item

thislist.remove("banana")


# 2)  pop( )
#     It removes the specified index, 
#     If you do not specify the index, the pop() method removes the last item.

thislist.pop(1)
thislist.pop()


# 3)  del( )
#     It also removes the specified index,
#     It also deletes the list completely. 

del thislist[0]
del thislist


# 4)  clear() 
#     It empties the list

thislist.clear()

# ---------------------------------------------------------

# To determine if a specified item is present in a list use the in keyword:

thislist = ["apple", "banana", "cherry"]

if "apple" in thislist: # Dont forget " "
  print("Yes, 'apple' is in the fruits list")


# -----------------------------------------------------

#                  BASIC FUNCTIONS

num = [3,7,23,19,2,5]

num.sort()
print("Sorted list : ",num)

num.reverse()
print("\nReversed : ",num)
print("\nThis empties the list")