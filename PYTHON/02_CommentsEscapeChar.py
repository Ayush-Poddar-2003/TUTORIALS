# ------------------ COMMENT ------------------

# Single line comment

# Since Python will ignore string that are not assigned to a variable, 
# We use it as multiline comments.
# Any ' " quotes can be used.

"""
string without
assigning to
variable can be
used as mutliple 
line comment
"""

# -------------- MULTIPLE STATEMENTS IN SINGLE LINE ----------------

# The semicolon ( ; ) allows multiple statements on the single line 

print("hello");print("ayush")


# -------------------- ESCAPE CHARACTERS ----------------------

# To insert characters that are illegal in a string, use an escape character.
# An escape character is a backslash \ followed by the character

e = "hello \" WORLD \" "
print(e)   # hello "WORLD" 

# Other characters used 

"""
            \'	Single Quote	
            \\	Backslash	
            \n	New Line	
            \t	Tab	
            \b	Backspace	
            \r	Carriage Return	same like \n 
"""

#  \123 - digits after \ are treated as Octal value	

txt = "\110\145\154\154\157"
print(txt) # output - Hello


