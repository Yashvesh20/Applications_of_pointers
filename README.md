# Applications_of_pointers
# Software Required:
Viusal Studio
# Theory:
There are two ways to pass the data to a function in the C++ language:
1. Call by value
2. Call by reference

<ins>Call by Value</ins>:
In this method, the value of the actual parameteris passed to the corresponding formal parameter of the called function. This technique ensures that the original data i.e. actual parameter does not get altered by the called function.
When the user opts for the call by value, the memory space for the formal parameters is allocated separately in the function stack, which further reinforces the fact that the original data remains untouched.

<ins>Advantages of Using Call by Value in C++</ins>:
+ This method does not change the original variable. In other words, it is preserving data.
+ Whenever a function is called, it does not ever impact the actual contents of the actual arguments.
+ Here, the value of actual arguments passes to the formal arguments. Therefore, any changes made in the formal argument do not impact the real cases.

<ins>Disadvantages of Using Call by Value in C++</ins>:
+ Data passed is stored in temporary memory.
+ Memory space required while using string, array, vector, etc can be huge.
+ Solving backtracking and recursion can be complex using call-by-value.

<ins>Call by Reference</ins>:
In this method, instead of passing the values of the actual parameters to the formal ones, the addresses of the actual parameters are passed. Therefore, the modification by the called function to the formal parameters affects the actual parameters as well.
All the operations in the function are performed on the value stored at the address of the actual parameters, and the modified value gets stored at the same address.

<ins>Advantages of Using Call by Reference in C++</ins>:
+ The function can change the value of the argument. Thus, it is very beneficial.
+ It helps in avoiding changes that occur by mistake.
+ A person who reads the code is not aware that the value can be modified in the function.
<ins>Disadvantages of Using Call by Reference in C++</ins>:
+ A function taking in a reference requires ensuring that the input is non-null. Thus, a null check is not supposed to be made. Thus, it has a non-null guarantee.
+ Passing by reference makes the function not pure theoretically

# Implementaion:
The following cases demonstrate the uage of Call by value and Call by Reference:
+ Call by value
+ Call by Reference
+ Salary increment using Call by Reference
