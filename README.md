# OOPS_Elective_Program_C-
This repository contains **Object-Oriented Programming (OOPS)** concepts implemented using **C++**, with simple examples and programs.
# Student Details
| Details | Information |
|---------|-------------|
| Name | Arpita J Chougule |
| USN | 01FE23BEC357 |
| Roll No | 656 |
| Div | F |
| Semester | 	VII |
# Repository Structure
```text

OOPS_Elective_Programs/
│
├── Programs/
│   ├── 1_C++_Fundamentals/
│   ├── 2_Classes_and_Objects/
│   ├── 3_Member_Functions_and_Constructors/
│   ├── 4_Destructor_and_Static_Data_Members/
│   ├── 5_Static_Member_Functions_and_Friend_Functions/
│   ├── 6_Inheritance/
│   ├── 7_Multilevel_Inheritance_and_Access_Control/
│   ├── 8_Constructor_Initializer/
│   ├── 9_Multiple_Inheritance/
│   ├── 10_Diamond_Inheritance/
│   ├── 11_Polymorphism/
│   └── 12_Exception_Handling/
│
└── README.md

```
# Class-wise Programs
## 1.C++ Fundamentals
  C++ fundamentals are the basic concepts of C++ programming, including variables, data types, operators, input/output statements, conditional statements, loops, arrays, and functions.
| Program | Concept |
| ------- | ------- |
| Simple.cpp | Demonstrates basic C++ output using cout to display personal information |
| User_input.cpp | Demonstrates taking two numbers as input and performing addition |
| Ran_op.cpp | Demonstrates declaring different data types such as int, char, and float |
| Rect_area.cpp | Demonstrates calculating the area of a rectangle using user-provided length and breadth |
| Largest.cpp | Demonstrates finding the largest element in an array using a for loop |
| CString_len.cpp | Demonstrates finding the length of a character array (C-string) using strlen() |
| String_len.cpp | Demonstrates finding the length of a C++ string using the length() function |
| Palindrome.cpp | Demonstrates checking whether a given string is a palindrome using character comparison |
| Swap_pass_by_value.cpp | Demonstrates call by value, where swapping inside the function does not change the original variables |
| Swap_pass_by_ref.cpp | Demonstrates call by reference, where swapping through reference parameters changes the original variables |
| Swap_pass_by_pointer.cpp | Demonstrates call by address using pointers, where the original variables are swapped using their memory addresses |
## 2.Classes and Objects
# Class: A class is a user-defined data type that acts as a blueprint for creating objects. It contains data members and member functions.
# Object: An object is an instance of a class that accesses its data members and member functions.
| Program | Concept |
| ------- | ------- |
| First_prog.cpp | Demonstrates a class with private data members and public member functions to set and display student marks and spi |
| Student.cpp | Demonstrates creating multiple objects of a class and using member functions to accept and display student details |
| Student1.cpp | Demonstrates defining class member functions outside the class using the scope resolution operator (::) |
| Area_rect.cpp | Demonstrates the setting of values and calculating the area of a rectangle using class data members and member functions |
## 3.Member Functions and Constructors
# Member Functions: Functions declared inside a class that define the operations performed on its data members.
# Constructor: A special member function that is automatically called when an object is created to initialize its data members.
| Program | Concept |
| ------- | ------- |
| Time.cpp | Demonstrates setting and displaying time using a class and member functions defined outside the class |
| Time_add.cpp | Demonstrates passing objects as arguments to a member function to add two time objects |
| Add_complex.cpp | Demonstrates object as an argument by adding two complex numbers using a member function |
| Const.cpp | Demonstrates a default constructor that initializes car mileage by accepting input from the user |
| Emp_const.cpp | Demonstrates a default constructor for initializing employee ID and department details |
| Emp_para.cpp | Demonstrates a parameterized constructor for initializing employee details when objects are created |
| Emp_def_para.cpp | Demonstrates the use of both parameterized and default constructors in the same class |
| Dist_para.cpp | Demonstrates a parameterized constructor for initializing distance values in feet and inches |
| def_para_copy.cpp | Demonstrates parameterized, default, and copy constructors for initializing and copying Rectangle objects |
## 4.Destructor and Static Data Members
# Destructor: A special member function that is automatically called when an object is destroyed to perform cleanup operations.
# Static Data Members: Data members shared by all objects of a class, where only one copy exists for the entire class.
| Program | Concept |
| ------- | ------- |
| Dest.cpp | Demonstrates a destructor that is automatically called when car objects are destroyed |
| Rect_dets.cpp | Demonstrates default, parameterized, copy constructors, and a destructor within the same class |
| Static_data.cpp | Demonstrates a static data member that is shared by all objects of the class and maintains a common count |
| Emp_static1.cpp  | Demonstrates how a static employee ID is shared among all objects, resulting in the same static variable being accessed by each object |
| Emp_static_data.cpp | Demonstrates the difference between a static class member and a non-static data member, where the static counter generates a unique employee ID for each object |
## 5.Static Member Functions and Friend Functions
# Static Member Functions: Functions that belong to the class rather than individual objects and can directly access only static members of the class.
# Friend Functions: Non-member functions that are granted permission to access the private and protected members of a class.
| Program | Concept |
| ------- | ------- |
| St_mem_st_data.cpp | Demonstrates a static member function accessing and displaying a static data member shared by all objects of the class |
| Friend.cpp | Demonstrates a friend function accessing the private data members of a class to calculate the sum of two numbers |
| Friend_two_classes.cpp | Demonstrates a common friend function accessing private data members of two different classes to calculate their sum |
## 6.Inheritance
  Inheritance is an OOP concept in which one class acquires the properties and functions of another class, promoting code reusability.
| Program | Concepts |
| ------- | -------- |
| Single_level_inheritance.cpp | Demonstrates single-level inheritance, where the Dog class inherits the properties and member functions of the Animal class |
| Multilevel_inheritance.cpp | Demonstrates multilevel inheritance, where IT_Student inherits from Student, which in turn inherits from Person |
## 7.Multi-level Inheritance and Access Control
# Multilevel Inheritance: A type of inheritance in which a class is derived from another derived class, forming a chain of inheritance.
# Access Control: Access specifiers such as private, public, and protected determine the accessibility of class members.
| Program | Concept |
| ------- | ------- |
| Multi_vehicle.cpp | Demonstrates multilevel inheritance using vehicle, car, and sports_car, where each derived class inherits the properties and functions of the previous class |
| Multi_protected.cpp | Demonstrates multilevel inheritance with protected members, showing how a protected member function of the base class can be accessed by derived classes but not directly from main() |
## 8.Constructor Initializer
  A constructor initializer list is used to initialize data members and base class constructors before the constructor body is executed.
| Program | Concept |
| ------- | ------- |
| Initializer_list.cpp | This program demonstrates single-level inheritance, parameterized constructors, constructor initialization lists, and passing arguments from a derived class constructor to a base class constructor in C++ |
| Initializer_list_multi.cpp | Demonstrates multilevel inheritance using Person, Student, and IT_Student classes, with a parameterized constructor ,constructor-initializer-list to initialize student details such as name, USN, and CGPA |
## 9.Mutilple Inheritance
  Multiple inheritance is a type of inheritance in which a single derived class inherits properties and functions from two or more base classes.
| Program | Concept |
| ------- | ------- |
| St_initializer_list.cpp | Demonstrates multiple inheritance, where the Result class inherits from both Student and Test classes and uses parameterized constructors to initialize data members |
| Student_marks.cpp | Demonstrates multiple inheritance with protected data members, where the Result class inherits student details and subject marks from two base classes to calculate and display total marks and percentage |
| Multiple_inheritance_liquid.cpp | Demonstrates multiple inheritance using Liquid and Fuel as base classes and Petrol as a derived class, allowing the derived class to access member functions of both base classes |
## 10.Diamond inheritance
  Diamond inheritance occurs when a class inherits from two classes that share a common base class, creating ambiguity. Virtual inheritance is used to solve this problem by ensuring only one shared copy of the base class exists.
| Program | Concept |
| ------- | ------- |
| Function overriding.cpp | Demonstrates the diamond problem in hybrid inheritance, where class D inherits the data member i through both B and C, resulting in ambiguity when accessing obj1.i |
| Overriding_solved.cpp | Demonstrates the solution to the diamond problem using virtual inheritance, where B and C virtually inherit class A, ensuring only one shared copy of the base class is available to class D |
## 11.Polymorphism
  Polymorphism means one name having multiple forms. It allows the same function or operator to behave differently in different situations. It is mainly classified into compile-time and runtime polymorphism.
| Program | Description |
|---------|-------------|
| Overriding_inheritance_virtual.cpp | Demonstrates runtime polymorphism using virtual functions, where a base class pointer calls the overridden show() function of different derived classes |
| Shape_poly.cpp | Implementation of runtime polymorphism using virtual functions and base class pointers. |
| Shape_der_poly.cpp | Demonstration of function overriding using virtual functions with Circle, Square, and Triangle classes. |
| Shape_arr_poly.cpp | Implementation of runtime polymorphism using an array of base class pointers to call overridden functions. |
| Abstract_veh.cpp | Implementation of abstraction using pure virtual functions and abstract classes with Vehicle, Car, and Bike classes. |
| Overloading.cpp | Demonstration of binary `+` operator overloading to add two complex numbers. |
| Overloading_sub.cpp | Demonstration of binary `-` operator overloading to subtract two complex numbers. |
| Unary_operator.cpp | Implementation of prefix and postfix increment (`++`) operator overloading to increment a counter value. |
| Unary_dec.cpp | Demonstration of decrementing a counter using prefix and postfix operations (the code uses `operator++` but decreases the value). |
| Conatenate.cpp | Demonstration of operator overloading using the binary + operator to concatenate two strings through user-defined objects |
## 12.Exception Handling
  Exception handling is a mechanism used to handle runtime errors and maintain the normal flow of program execution using try, throw, and catch blocks.
| Program | Description |
|---------|-------------|
| Exception1.cpp | Demonstration of exception handling using `try`, `throw`, and `catch` blocks to handle integer exceptions. |
| Mul_exception.cpp | Implementation of multiple catch blocks to handle different exception types, such as `int` and `double`. |
| Div_by_zero.cpp | Demonstration of exception handling in a division function to handle division-by-zero errors using a string exception |
| Div_by_zero1.cpp | Here c = a/b; executes before throw, so division by zero occurs before the exception is thrown. Remove that statement and throw the exception directly inside the if block |





