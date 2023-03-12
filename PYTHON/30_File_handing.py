# ----------- FILE HANDLING -----------



# 1) open() function.

# -> The open() function takes two parameters - filename and mode.
# -> There are 4 different methods for opening a file:

    #1. "r" - Read   - Default ,Opens a file for reading, error if the file does not exist
    #2. "a" - Append - Opens a file for appending, creates the file if it does not exist
    #3. "w" - Write  - Opens a file for writing, creates the file if it does not exist
    #4. "x" - Create - Creates the specified file, returns an error if the file exists

# In addition you can specify if the file should be handled as binary or text mode

    # "t" - Text - Default value. Text mode
    # "b" - Binary - Binary mode (e.g. images)

# SYNTAX -

f = open("file_name","mode")


# To open a file for reading it is enough to specify the name of the file:
f = open("demofile.txt")
# The code above is the same as:
f = open("demofile.txt", "rt") #"r" for read,"t" for text, default values


# -------------------------------------------------------------------

