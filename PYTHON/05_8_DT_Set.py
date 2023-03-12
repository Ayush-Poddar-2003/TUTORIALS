#                           SETS

# Sets are used to store multiple items in a single variable.
# A set is a collection which is unordered, unchangeable*, and unindexed.
# Note: Set items are unchangeable, but you can remove items and add new items.

thisset = {"apple", "banana", "12", "cherry","25.5"}
print(thisset)
print(type(thisset))
print("-----------------------------------------------")

# Duplicates Not Allowed
# Duplicate values will be ignored:

thisset = {"apple", "banana", "cherry", "apple"}
print(thisset)
print("-----------------------------------------------")



#   1                     ACCESS ITEM

# You cannot access items in a set by referring to an index or a key.
# But you can loop through the set items 

thisset = {"apple", "banana", "cherry"}
for x in thisset:
  print(x)

print("-----------------------------------------------")


#                                        ADD ITEMS

# To add one item to a set use the add() method.

thisset = {"apple", "banana", "cherry"}
thisset.add("orange")
print(thisset)
print("-----------------------------------------------")

# To add items from another set into the current set, use the update()/union() method.

thisset = {"apple", "banana", "cherry"}
tropical = {"pineapple", "mango", "papaya"}
thisset.update(tropical)
print(thisset)
print("-----------------------------------------------")

# The union() method returns a new set with all items from both sets:

set1 = {"a", "b" , "c"}
set2 = {1, 2, 3}
set3 = set1.union(set2)
print(set3)
print("-----------------------------------------------")


#                                         REMOVE ITEM

# To remove an item in a set, use the 

# 1) Remove()

thisset = {"apple", "banana", "cherry"}
thisset.remove("banana")
print(thisset)
print("-----------------------------------------------")

# 2) Discard()

thisset = {"apple", "banana", "cherry"}
thisset.discard("banana")
print(thisset)
print("-----------------------------------------------")

# Note: If the item to remove does not exist, remove() will raise an error.
# Note: If the item to remove does not exist, discard() will NOT raise an error.

# Note: Sets are unordered,the pop() method, you do not know which item that gets removed.

# 3) The clear() method empties the set:

thisset = {"apple", "banana", "cherry"}
thisset.clear()
print(thisset)
print("-----------------------------------------------")

# The del keyword will delete the set completely:

thisset = {"apple", "banana", "cherry"}
del thisset
print(thisset)
print("-----------------------------------------------")
