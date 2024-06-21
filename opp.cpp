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


/* 2. Constructor => Special method invoked automatically at time of object creation. Used for initialization. (v.v.imp)
=> 1. Same name as class
=> 2. Constructor doesn't have a return typr
=> 3. Only called once (automatically), at object creation
=> 4. Memory allocation  happens when constructor is called
=> Note: Constructor always declare public because we call it from main function.


class Teacher {
private:
    double salary;

public:
    Teacher() { 
        cout << "HI! I'm constructor";
        dept = "Computer Science"
    }


    Teacher(string n, string d, string s, double sal) { 
        name = n;
        dept = d;
        salary = sal;
        subject = s;
    }


    string name;
    string dept;
    string subjects;
    
    // methods:
    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
    }
};


    int main() {
    // For non-parameterized Constructor
    Teacher t1;
    cout << t1.dept << endl;

    // For parameterized Constructor
    Teacher t1 ("Abdul Munnam", "Computer Science", "C++", 9000);
    t1.getInfo();
    return 0;
    }

    // For copy constructor
    Teacher (Teacher orgObj) {
        cout << "Hey! I am copy Contructor" << endl;
        this -> name = orgObj.name
        this -> object = orgObj.object
        this -> subject = orgObj.subject
        this -> salary = orgObj.salary
    }

    As you can see here we do not need to give any value of dept to the object t1. So this the function of constructor. 
    }


There are three types of constructors
1. Parameterized
2. Non-Parameterized
3. Copy => used to cpy properties of one object into another

Constructor Overloading => Two or more construct having same name but having different type of data (example of Polymorphism)  

Now we will discuss another concept know as "this" pointer => this is a special point in C++ that points to the current object.
this -> prop is same as *(this).prop  

    // For parameterized Constructor

    Teacher(string name, string dept, string subject, double salary) { 
        name = name;   // But when we write in this way it will be confusing for compiler so we can use here "this" concept
        this -> dept = name;
        this -> salary = name;
        this -> subject = subject;


    } 

    void main() {
        Teacher t2(t1);
        t2.getInfo ();
    }

Now we will discuss two basic types of copy constructors
=> 1. Shallow copy: A shollow copy of an object copies all of the members values from one object to another
=> 2. Deep copy: A deep copy, on the other hand, not only copies the member values but also makes copies of nay dynamically allocated memory that the member points to


// Let's take an example of Shallow copy

class Student () {
public:
    string name;
    double* cgpaPtr;

    Student (string name, double cgpa) {
        this -> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa

    }
-----------------------------------------------------------
for shallow copy
    Student (Student &obj) {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
------------------------------------------------------------
for deep copy
    Student (Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "cgpa : " << cgpaPtr << endl;
    }  
};


void main() {

    // By parametrized constructor
    Student s1 ("Abdul Munnam", 3.9);
    s1.getInfo();

    // by Copy constructor
    Student s2(s1);
    s2.getInfo();

    // here is the core concept
    Student s1("habibi", 3.5);
    Student s2(s1); / Name let's suppose "ALiyar"

    s1.getInfo();
    *(s2.cgpaPtr) = 3.7;
    s1.getInfo();

    s2.name = "ALiyar"
    s2.getInfo();
}

So it was all about constructors */



/*Destructor  -> Opposite of constructor

class Studnet {
public:
    string name;
    double cgpaPtr;

    Student(string name, double cgpa) {
        this -> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // destructor has same name as class so

    ~Student() {
        cout << "HI, I delete everything";
        delete cgpaPtr;   // if you do use destructor then it will cause memmory leak
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "cgpa : " << cgpaPtr << endl;
    }  
};


    void main() {
        Student s1("Abdul Munnam, 3.6);
        s1.getInfo();

    }     */




   