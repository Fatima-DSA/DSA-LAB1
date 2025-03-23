#include<iostream>
using namespace std;

template<class T>
void SelectionS(T Array[]) {
    for (int i = 0; i < 5 - 1; i++) {
        int SmallSub = i;
        for (int j = i + 1; j < 5; j++) {
            if (Array[j] < Array[SmallSub]) {
                SmallSub = j;
            }
        }
        swap(Array[i], Array[SmallSub]);
    }
}

template<class T>
void PrintArray(T Array[]) {
    cout << "The Sorted Array becomes: ";
    for (int i = 0; i < 5; i++) {
        cout << Array[i] << ",";
    }
    cout << endl;
}

int main() {
    int intArray[5] = { 64, 25, 12, 22, 11 };

    cout << "Original Array: ";
    PrintArray(intArray);  

    SelectionS(intArray);  

    cout << "Array After Sorting: ";
    PrintArray(intArray);  

    return 0;
}
