// main.cpp
// Livia Correia
// Program takes numbers and stores them in vector lists.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    int size;

    cout << "How many numbers do you want in your vector: " << endl;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int num;
        cout << "Enter number: " << endl;
        cin >> num;
        numbers.push_back(num);
    }

    if (numbers.empty()) { // Checking if empty
        cout << "Vector is empty!" << endl;
    }
    else {
        cout << "Size of vector: " << numbers.size() << "\n" <<
        "Maximum capacity: " << numbers.max_size() << endl;
    }

    int newSize; // Declaring new size

    cout << "What new size would you like to give your vector? " << endl;
    cin >> newSize;

    numbers.resize(newSize);
    cout << "Vector's new size: " << numbers.size();


    return 0;
}
