#include <iostream>
#include <fstream>
#include <NumberCounter.h>

using namespace std;

int main() {
    // Open the input file
    ifstream inputFile("numbers.txt");

    // Create an array of NumberCounter objects
    const int MAX_NUMBERS = 1000;
    NumberCounter numberCounters[MAX_NUMBERS];

    // Read the numbers from the file and count the frequencies
    int count = 0;
    int n;
    while (inputFile >> n) {
        // Check if the number is already in the array
        bool found = false;
        // If it is, increment the counter
        for (int i = 0; i < count; i++) {
            if (numberCounters[i].getNumber() == n) {
                numberCounters[i].increment();
                found = true;
                break;
            }
        }
        // If it is not, add it to the array
        if (!found) {
            numberCounters[count] = NumberCounter(n);
            count++;
        }
    }

    // Close the input file
    inputFile.close();

    // Open the output file
    ofstream outputFile("frequencies.txt");

    // Write the frequencies to the output file
    for (int i = 0; i < count; i++) {
        outputFile << numberCounters[i].getNumber() << " " << numberCounters[i].getCount() << endl;
    }

    // Close the output file
    outputFile.close();

    cout << "Frequencies saved in frequencies.txt" << endl;

    return 0;
}
