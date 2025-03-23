#include<iostream>
using namespace std;

template<class T>
int LinearS(T Array[], T Key) {
    for (int i = 0; i < 5; i++) {
        if (Array[i] == Key) {
            return i;  
        }
    }
    return -1;  
}
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
    int intArray[5] = { 64, 25, 12, 22, 11 };
    int intKey = 12;
    int intIndex = LinearS(intArray, intKey);
    PrintSearchResult(intIndex, intKey);

    float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
    float floatKey = 1.62;
    int floatIndex = LinearS(floatArray, floatKey);
    PrintSearchResult(floatIndex, floatKey);

    string stringArray[4] = { "apple", "orange", "banana", "grape" };
    string stringKey = "banana";
    int stringIndex = LinearS(stringArray, stringKey);
    PrintSearchResult(stringIndex, stringKey);

    return 0;
}
