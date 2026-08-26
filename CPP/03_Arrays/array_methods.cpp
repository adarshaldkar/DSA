#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    cout << "=== Different Ways to Declare Arrays in C++ ===" << endl;
    
    // METHOD 1: Static Array (C-style)
    cout << "\n1. Static Array (C-style):" << endl;
    int arr1[5] = {1, 2, 3, 4, 5};  // Fixed size, stack memory
    int arr2[] = {1, 2, 3, 4, 5};   // Size inferred from initializer
    int arr3[5];                    // Uninitialized (garbage values)
    
    cout << "arr1: ";
    for(int i = 0; i < 5; i++) cout << arr1[i] << " ";
    cout << endl;
    
    // METHOD 2: Vector (Dynamic Array) - Most Popular
    cout << "\n2. Vector (Dynamic Array):" << endl;
    vector<int> vec1 = {1, 2, 3, 4, 5};     // Initialize with values
    vector<int> vec2(5);                     // Size 5, all zeros
    vector<int> vec3(5, 10);                 // Size 5, all 10s
    vector<int> vec4;                        // Empty, grows as needed
    
    cout << "vec1: ";
    for(int x : vec1) cout << x << " ";
    cout << endl;
    
    // METHOD 3: std::array (Fixed Size, Modern C++)
    cout << "\n3. std::array (Fixed Size, Modern C++):" << endl;
    array<int, 5> stdArr1 = {1, 2, 3, 4, 5};
    array<int, 5> stdArr2{};  // All zeros
    
    cout << "stdArr1: ";
    for(int x : stdArr1) cout << x << " ";
    cout << endl;
    
    // METHOD 4: Dynamic Array (Heap) - Manual Memory
    cout << "\n4. Dynamic Array (Heap):" << endl;
    int* dynArr = new int[5]{1, 2, 3, 4, 5};
    cout << "dynArr: ";
    for(int i = 0; i < 5; i++) cout << dynArr[i] << " ";
    cout << endl;
    delete[] dynArr;  // Must free memory!
    
    // METHOD 5: Multidimensional Arrays
    cout << "\n5. Multidimensional Arrays:" << endl;
    int matrix1[2][3] = {{1,2,3}, {4,5,6}};           // Static 2D
    vector<vector<int>> matrix2 = {{1,2,3}, {4,5,6}}; // Dynamic 2D
    
    cout << "matrix1: ";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix1[i][j] << " ";
        }
    }
    cout << endl;
    
    // METHOD 6: Initializer Lists (C++11)
    cout << "\n6. Initializer Lists:" << endl;
    auto arr6 = {1, 2, 3, 4, 5};  // Type deduced
    vector<int> vec6{1, 2, 3, 4, 5};  // Uniform initialization
    
    // METHOD 7: Character Arrays (Strings)
    cout << "\n7. Character Arrays:" << endl;
    char str1[] = "Hello";        // C-string
    char str2[10] = {'H','i','\0'}; // Character array
    string str3 = "Hello";        // C++ string (preferred)
    
    cout << "str1: " << str1 << endl;
    cout << "str3: " << str3 << endl;
    
    return 0;
}