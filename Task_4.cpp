#include<iostream>
using namespace std;

// Binary Search Template Function
template<class T>
int BinarySearch(T Array[], T key) {  // Change the return type to `int`
    int N = 5;  // Fixed size of the array
    int Low = 0, High = N - 1;

    while (Low <= High) {
        int mid = (Low + High) / 2;
        if (Array[mid] == key) {
            return mid;  // Return the index when the key is found
        }
        else if (Array[mid] < key) {
            Low = mid + 1;  // If key is greater, ignore left half
        }
        else {
            High = mid - 1;  // If key is smaller, ignore right half
        }
    }
    return -1;  // Return -1 if the key is not found
}

// Print the search result
template<class T>
void PrintSearchResult(int index, T Key) {
    if (index != -1) {
        cout << "Key: " << Key << " :: Index: " << index << endl;
    }
    else {
        cout << "Key: " << Key << " not found!" << endl;
    }
}

int main() {
    // Test with an integer array (sorted) of size 5
    int intArray[5] = { 11, 12, 22, 25, 64 };
    int intKey = 22;
    int intIndex = BinarySearch(intArray, intKey);
    PrintSearchResult(intIndex, intKey);

    // Test with a float array (sorted)
    float floatArray[4] = { 0.57, 1.62, 2.71, 3.14 };
    float floatKey = 2.71;
    int floatIndex = BinarySearch(floatArray, floatKey);
    PrintSearchResult(floatIndex, floatKey);

    // Test with a string array (sorted)
    string stringArray[4] = { "apple", "banana", "grape", "orange" };
    string stringKey = "grape";
    int stringIndex = BinarySearch(stringArray, stringKey);
    PrintSearchResult(stringIndex, stringKey);

    return 0;
}
