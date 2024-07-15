# OOP in Python
# ----------------
# TO map with real world scenarios, we stated using object in code. This is called object Oriented Programming


# CLass & Object in Python
# Before starting OOP we need to understand Objects & Classes 
# Objects => Are entities in the real world (pen, mouse etc.)
# Class => Is like a blueprint of these entities
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

___________________________________________________________________________________________________________


# __init__ Function
# Constructor
# All classes have a function called _init_(), which is always executed when the class is being initiated.

# Let's some code for constructor
class Student:

    College_Name = "Govt. COllege"
    name = "Anonymous"  # CLass attribut < Obj attribute

    # Default contructors
    def __init__(self):
        print("I'm default constructor")

    #Parameterized Constructors
    def __init__(self, name, Marks):   # This is a parameter for object and we can give many parameters as we want
        print(self)  # Object
        self.name = name    # Obj attribute > Class attribute
        self.Marks = Marks    
        print("Adding new student in database......")

s1 = Student("Abdul Munnam", 72)  # Output => Adding new student in database......
print(s1) # Output => Object ; as we can see self and s1 has same output
print(s1.name, s1.Marks)  # Abdul Munnam    72
print(Student.College_Name)
# 2nd Method to access class attribute
print(s1.College_Name)

s2 = Student("Ali Ahmad", 80)  # Output => Adding new student in database......
print(s2) # Output => Object ; as we can see self and s1 has same output
print(s2.name, s2.Marks)  # Ali Ahmad    80
print(Student.College_Name)
# 2nd Method to access class attribute
print(s2.College_Name)

# Constructor always avoke by itself
# The self parameter is a reference to the current instance of the class, and is used to acess variables that belong to the class



_____________________________________________________________________________________________________________


# Methods => Are functions  that belongs to objects.

class Students:

    def __init__(self, name, Marks):  
        self.name = name
        self.Marks = Marks   

    def welcome(self):
        print("Welcome Students")

    def get_marks(self):
        return self.Marks
    

s1 = Student("Habib", 97)
s1.welcome()
print(s1.get_marks())



_____________________________________________________________________________________________________________

# Static Methods => Methods that don't use the self parameter (Work at class level)

class Student:
    @staticmethod     # decorator
    def college():
        print("ABC College")

# decorator allow us to wrap another function in order to extend the behavior of the wrapped function, without permanene modifying it.



_________________________________________________________________________________________________________________

# Important Concepts

# 1. Abstraction => Hiding the implementation details of a class and only showing the essential features to the user.

class car:
    def __init__(self):
        self.accelerator = False
        self.brk = False
        self.clutch = False

    def start(self):
        self.clutch = True
        self.accelerator = True
        print("Car start......")


car1 = car()
car1.start()

# 2. Encapsulation => Wrapping data and function into a single unit (Object).

____________________________________________________________________________________________________________________

# Note: Here is only two Pilars of OOP. I'll update other two later












