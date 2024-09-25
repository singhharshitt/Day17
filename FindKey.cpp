#include <iostream>
using namespace std;

int main() {
    int rows, cols, key;
    
    // Input for the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];

    // Input for the 2D array elements
    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    // Input the key to search
    cout << "Enter the key to search: ";
    cin >> key;

    // Flag to check if key exists
    bool found = false;

    // Search the key in the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] == key) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    // Output the result
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
