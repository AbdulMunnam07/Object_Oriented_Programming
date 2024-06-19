// What is OOP? => Way of writing code in efficient manners

/* Before starting OOP we need to understand Objects & Classes 
Objects => Are entities in the real world (pen, mouse etc.)
Class => Is like a blueprint of these entities */

/*  Syntax of class
class Name {
    properities
    .
    .
    .
    methods()
}; */

/* #include <iostream>
#include <string>

using  namespace std;

class Teacher {
    // properties:
    string name;
    string dept;
    string subjects;
    double salary;


    // methods:
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t1;
    t1.name = "Abdul Munnam"
    t1.dept = "Software Engineering"
    t1.subjects = "C++"
    t1.salary = 80000

    cout << t1.name << endl;

    return 0;
}

The above code will not generate any output because we have not use Acess modifiers there (by default class has private Acess Modifiers) that is why the output is not showing */

/* So what is Acess Modifiers? => Special keyword (We have 3 Acess Modifiers in C++)
Private: (by default)
data & method acessible inside class only
Public:
data & methods acessible to everyone
Protected:
data & methods acessible inside class & to its derived class */

// Now by using Acess Modifiers

/* #include <iostream>
#include <string>

using  namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string subjects;
    
    // methods:
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t1;
    t1.name = "Abdul Munnam"
    t1.dept = "Software Engineering"
    t1.subjects = "C++"

    cout << t1.name << endl;

    return 0;
}

Output => Abdul Munnam  */

/* OOP has for major pillars
1. Encapsulation
2. Abstraction
3. Inheritence
4. Polymorphism
*/

/* 1. Encapsulation => is wrapping up of data & member function in a single unit called class 
data properties + member function = class (which is basically called encapsulation)
Your above Teacher class basically represent encapsulation
=> It's help in data hiding.
Let me give an exmaple

class Account{
private:
    double balance;
    string password; // data hiding concepte

public:
    string accountID;
    string username;
}; */


/* 2. Constructor => Special method invoked automatically at time of object creation. Used for initialization.
=> Same name as class
=> Constructor doesn't have a return typr
=> Only called once (automatically), at object creation
=> Memory allocation  happens when constructor is called
class Teacher {
private:
    double salary;

public:
    Teacher() {
        cout << "HI! I'm constructor";
    }

    string name;
    string dept;
    string subjects;
    
    // methods:
    void changeDept(string newDept) {
        dept = newDept;
    }
};*/

