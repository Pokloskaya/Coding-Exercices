#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> hashTable;

    // Insert key-value pairs
    hashTable["apple"] = 3;
    hashTable["banana"] = 7;
    hashTable["cherry"] = 2;

    // Retrieve values
    cout << "Apple count: " << hashTable["apple"] << endl;
    cout << "Banana count: " << hashTable["banana"] << endl;
    cout << "Cherry count: " << hashTable["cherry"] << endl;

    // Update values
    hashTable["banana"]++;
    cout << "New banana count: " << hashTable["banana"] << endl;

    // Check if key exists
    if (hashTable.find("orange") == hashTable.end()) {
        cout << "Orange not found" << endl;
    }

    return 0;
}

// In this example, we're using the unordered_map container from the C++ standard template library (STL) 
// to create a hash table. This container provides an implementation of a hash table that uses the built-in hash<string> function to hash the keys.

// We're storing the count of different fruits in the hash table, using their names as keys. We can insert key-value pairs, retrieve values, 
// update values, and check if a key exists in the table.