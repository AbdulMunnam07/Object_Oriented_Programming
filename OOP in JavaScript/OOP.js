// Before starting Object-Oriented Programming in JS, you need in to understand one importand thing that: "javaScript is not pure object oriented programming language" However C++, python, Java etc. are pure object oriented programming

// So Now let's get started!
// As we know OOP base on two important things that are "Objects" and "Classes" these are the main structure that OOP base on it

// What is class?? => Class is just like a blue print for any object creation
// Syntax => class Name {........}

// Let's take one example to create class

`class Student {
    constructor () {
        this.name = "Abdul Munnam"
        this.age = 20
        this.height = "6 Foot"
    }
}`

/* Well, you have created class but what is the "contructor", "this" in class? 
Ok, Let me explain
constructor: it is just like birth certificate for class 
- but the question is that why we used it??
- We used it in that case when we assign same values to many objects
let's explain it with the help of example */ 

class Student {
    constructor(name, age, syllabus) {
        this.name = name;
        this.age = age ;
        this.syllabus = syllabus;
    }
}

// here "this" refers to the object that we will create like s2, s3 ....

let s2 = new Student("Abdul Munnam", 20, "Full Book")
let s3 = new Student("Ali Ahmad", 19, "Full Book")

console.log(s2, s3);

/* There are two types of constructors 
- Parameterized
- Non-Parameterized 
here we used parameterized constructor */


// Let's discuss Inheritance in OOP

// You can inherit one class properties the another class. Example is given below
class Car {
    constructor (model) {
        this.model = model;
    }
}

class Fortuner extends Car {
    constructor (color, CarNum) {
        super("A12")
        this.color = color
        this.CarNum = CarNum

    }
}


let c1 = new Fortuner("Black", "01")
console.log(c1.model);

// Note: super() method can only called once



// Now discuss about getter and setter function

class Person {
    constructor(firstName, lastName) {
      this._firstName = firstName;
      this._lastName = lastName;
    }
  
    get fullName() {
      return `${this._firstName} ${this._lastName}`;  
  
    }
  
    set fullName(value) {
      const parts = value.split(' ');
      this._firstName = parts[0];
      this._lastName = parts[1];
  
    }
  }
  
  const person = new Person('Abdul', 'Munnam');  // By using this method getter function doing because we give seperate first and last name
  console.log(person.fullName); // Output: Abdul Munnam 
  
// What if we give one string as an input? to handle this case we used setter function

person.fullName = 'Muhammad Habib';
console.log(person.fullName);




/* last concept is static method
static method allow you to access any method properties within class youo can not access it's properties through objects */

class Student {
    constructor(name,age) {
        this.name = name;
        this.age = age;
    }
    static  marks(mark) {
        this.marks = mark
    }
}

let s4 = new Student("Saad",18)
console.log(s4.marks);