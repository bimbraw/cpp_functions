# cpp_functions
C++  exercises (functions)

Exercise 1. Write a function "addition". When the function gets invoked - addition(); - the user is asked to input any two numbers which are added together. The calculation is printed out in the console.

Exercise 2. Write a function "subtraction". When the function gets invoked - subtraction(); - the user is asked to input any two numbers: the one to subtract from and the one to subtract with. The calculation is printed out in the console.

Exercise 3. Write a function "multiplication". When the function gets invoked - multiplication(); - the user is asked to input any two numbers: the one to multiply and the one to multiply with. The calculation is printed out in the console.

Exercise 4. Write a function "division". When the function gets invoked - division(); - the user is asked to input any two numbers: the one to divide and the one to divide by. The calculation is printed out in the console.

Exercise 5. Write a function "exponentiation". When the function gets invoked - exponentiation(); - the user is asked to input any two numbers: the base and the exponent (n-th power). The calculation is printed out in the console.

Exercise 6. Copy the functions and their declarations created in the exercises from 1 to 5 and write sixth function "chooseOperation". The "chooseOperation" function should take one char parameter. The body of the function should contain a switch for the choice parameter which depending on the user input should invoke the corresponding mathematical functions from the exercises 1 to 5.
Write a simple calculator program that asks the user to choose a mathematical operation to perform by inputting an operator symbol: '+' - addition, '-' - subtraction, '*' - multiplication, '/' - division, '^' - exponentiation. The mathematical symbol is used as the parameter for chooseOperation function. The calculator should work in an infinite loop.

Exercise 7. Write a program that asks the user to input 5 floating point numbers (stored in a 5 element array of doubles). Write two functions "minValue" and "maxValue" that take into argument an array of doubles and returns a double. "minValue" should return the minimum value of the array and "maxValue" should return the maximum value of the array.

Exercise 8. Initialize three variables with different types (int, double, string). Write a function  "variableType" and overload it two times. Each three overloaded functions should take as an argument different type of variable eg. variableType(int), variableType(double), variableType(string). Send the variables created in the beginning to the variableType function with corresponding type of argument and print out in the screen information about what type of variable was used.

Exercise 9. Write a program that asks the user how many values should get added together (from 2 to 5). Then the user should input those numbers. Write a function "addition" that takes two double parameters and adds them together, printing out in the console the calculation. Furthermore overload the "addition" function 3 times so it takes three parameters, four parameters and five parameters adding those parameters in each case. Prepare a switch that uses the version of addition function with as many parameters as the user inputted at the beginning.
