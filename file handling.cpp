#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Writing to a file
    ofstream outFile("student.txt");

    outFile << "Name: Rahul" << endl;
    outFile << "Roll No: 101" << endl;
    outFile << "Marks: 89.5" << endl;

    outFile.close();

    cout << "Data written successfully!" << endl;

    // Reading from the file
    ifstream inFile("student.txt");

    string line;

    cout << "\nReading from file:\n";

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}