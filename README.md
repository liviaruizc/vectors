# Vector Management Program in C++

## Overview
This program allows the user to input numbers, stores them in a vector, and provides options to check the vector's size, capacity, and resize it.

## Features
- User can specify the number of elements to be added to the vector.
- The program checks whether the vector is empty.
- Displays the current size and maximum capacity of the vector.
- Allows resizing the vector based on user input.

## Code Explanation
- **Vector Initialization**: A vector of integers named `numbers` is created to store the user-provided numbers.
- **Input**: The program asks the user for the number of elements they want to input and then prompts for each number, adding it to the vector.
- **Check for Empty Vector**: If the vector is empty, a message is displayed.
- **Display Size and Capacity**: The program displays the current size and the maximum capacity of the vector.
- **Resize Vector**: The user is prompted to specify a new size for the vector, and the `resize()` method is used to adjust the vector accordingly.

## Installation
To compile and run the code, you need:
- A C++ compiler (e.g., g++ or clang++)
- An IDE or text editor to write and modify the code (e.g., Visual Studio Code, Xcode, or any text editor of your choice)

### Compilation
1. Save the code in a file (e.g., `vector_management.cpp`).
2. Open a terminal and navigate to the directory where the file is located.
3. Run the following command to compile the code:
   ```bash
   g++ -o vector_management vector_management.cpp


## Run the compiled program:

./vector_management

## Usage
Once the program is compiled, it will prompt the user to input:

The number of elements to store in the vector.

The individual numbers to be added to the vector.

A new size for the vector after which it will be resized.

## Sample Output:

How many numbers do you want in your vector: 
3
Enter number: 
5
Enter number: 
10
Enter number: 
15
Size of vector: 3
Maximum capacity: 2147483647
What new size would you like to give your vector? 
5
Vector's new size: 5

## Dependencies
This project does not have any external dependencies.

## Contribution
Feel free to fork and improve the project. Contributions are always welcome!

## License
This project is open-source and free to use. No license has been specified, so you may use it in any way you like.
