# OOP in Python
# ----------------
# TO map with real world scenarios, we satated using object in code. This is called object Oriented Programming


# CLass & Object in Python
# --------------------------
# Class is a blur print for creating objects.

# Let's try to create class:
class Student:
    name = "Muhammad Habib"

# Let's try to create object(instance)
s1 = Student()
print(s1.name)

s2 = Student()
print(s1.name)

# You can created many objects as you want w.r.t class


# __init__ Function
# Constructor
# All classes have a function called _init_(), which is always executed when the class is being initiated.

# Let's some code for constructor
class Student:

    def __init__(self, name, Marks):   # This is a parameter for object and we can give many parameters as we want
        print(self)  # Object
        self.name = name    
        self.Marks = Marks    
        print("Adding new student in database......")

s1 = Student("Abdul Munnam", 72)  # Output => Adding new student in database......
print(s1) # Output => Object ; as we can see self and s1 has same output
print(s1.name, s1.Marks)  # Abdul Munnam    72

s2 = Student("Ali Ahmad", 80)  # Output => Adding new student in database......
print(s2) # Output => Object ; as we can see self and s1 has same output
print(s2.name, s2.Marks)  # Ali Ahmad    80

# Constructor always avoke by itself
# The self parameter is a reference to the current instance of the class, and is used to acess variables that belong to the class



