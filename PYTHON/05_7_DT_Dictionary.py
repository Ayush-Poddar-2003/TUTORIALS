#                                       DICTIONARY

# -> Dictionaries are used to store data values in key:value pairs.
# -> A dictionary is a collection which is ordered, changeable and do not allow duplicates.

# The values in dictionary items can be of any data type:

thisdict = {"brand": "Ford","model": "Mustang","year": 1964}

print(thisdict)
print(type(thisdict))
print(thisdict["brand"])

# Duplicates Not Allowed
# Duplicate values will overwrite existing values:

thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964,
  "year": 2020 # it will overcome
}
print(thisdict)


# ------------------- ACCESSING ITEMS --------------------
                                    
# You can access the items by referring to its key name, inside square brackets:
print(thisdict["brand"])

# There is also a method called get() that will give you the same result:
x = thisdict.get("brand") # access the items of a dictionary by referring to its key name
print(x)


# ----------------------- SOME FUNCTIONS ----------------------------

print(thisdict.keys())
print(thisdict.values())
print(thisdict.items())


#------------------------ ALTERING VALUES -----------------------------

#1) You can change the value of a specific item by referring to its key name:

thisdict["year"] = 2018
print(thisdict)

#2) The update() method will update from the given argument which must be a dictionary, or an iterable object with key:value pairs.

thisdict.update({"year": 2020})
print(thisdict)


#------------------------- ADDING ITEMS ----------------------------

# Adding an item is done by using a new index key and assigning a value to it:

thisdict["color"] = "red"
print(thisdict)

# The update() method will update the dictionary with the items from a given argument. 
# If the item does not exist, the item will be added.



# ----------------------- REMOVING ITEM ----------------------------

# There are several methods to remove items from a dictionary:

# The pop() method removes the item with the specified key name:
# The popitem() method removes the last inserted item 
# The del keyword removes the item with the specified key name:
# The del keyword can also delete the dictionary completely:
# The clear() method empties the dictionary:

print(thisdict)
thisdict.pop("model")
print("POP : ",thisdict)
thisdict.popitem()
print("POP item : ",thisdict)
del thisdict["brand"]
print("Delete item : ",thisdict)
#del thisdict
# print(thisdict) --> this will cause an error because "thisdict" no longer exists.





