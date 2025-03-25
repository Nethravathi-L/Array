// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {2, 4, 8, 12, 16};
    
//     // Accessing fourth element
//     cout << arr[3] << endl;
    
//     // Accessing first element
//     cout << arr[0] << endl;
    
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {2, 4, 8, 12, 16};
    
//     // Updating fourth element
//     arr[3] = 90;
//     cout << arr[3] << endl;
    
//     // Updating first element
//     arr[1] = 90;
//     cout << arr[0] <<endl;
    
//     return 0;
// }








// #include <iostream>
// using namespace std;

// int main() {
//     int mark[5] = {19, 10, 8, 17, 9};  // Initialize the array

//     // Change 4th element (index 3) to 9
//     mark[3] = 9;
//    cout<< mark[3]<<endl;
   
//     // Take input from the user and store the value at the third position (index 2)
//     cout << "Enter value for the third position: ";
//     cin >> mark[2];
//     cout<<"third podition value = " << mark[2] <<endl;


//     // Take input from the user and insert at the ith position (1-based index)
//     int i;
//     cout << "Enter the position (1 - 5) to insert a value: ";
//     cin >> i; // 1-based index input from the user

//     if(i >= 1 && i <= 5) {
//         cout << "Enter the value to insert: ";
//         cin >> mark[i - 1]; // Convert to 0-based index and store the value
//     } else {
//         cout << "Invalid position!" << endl;
//     }

//     // Print the first element of the array
//     cout << "First element: " << mark[0] << endl;

//     // Print the ith element of the array
//     cout << "Element at position " << i << ": " << mark[i - 1] << endl;

//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> num = {1, 2, 3};

//     // Ranged for loop on a vector
//     for (int var : num) {
//         cout << "Value: " << var << endl;
//     }

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int num[3] = {1, 2, 3};

//     // Value-based iteration: Creates a copy of each element
//     for (int var : num) {
//         var = var+ 1; // This modifies the copy, not the original array
//     }

//     // Print original array: No change, since var was a copy
//     cout << "After value-based iteration: ";
//     for (int i = 0; i < 3; i++) {
//         cout << num[i] << " ";  // Outputs: 1 2 3
//     }
//     cout << endl;

//     // Reference-based iteration: Direct access to original elements
//     for (int &var : num) {
//         var += 1; // This modifies the actual element in the array
//     }

//     // Print modified array: This time the original array changes
//     cout << "After reference-based iteration: ";
//     for (int i = 0; i < 3; i++) {
//         cout << num[i] << " ";  // Outputs: 2 3 4
//     }
//     cout << endl;

//     return 0;
// }








//SIZE OF ARRAY//



// #include <iostream>
// using namespace std;

// int main() {
//     char arr[] = {'a', 'b', 'c', 'd', 'f'};

//     // Size of one element of an array
//     cout << "Size of arr[0]: " << sizeof(arr[0]) << endl;

//     // Size of  'arr'
//     cout << "Size of arr: " << sizeof(arr) << endl;

//     // Length of an array
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Length of an array: " << n << endl;

//     return 0;
// }





//ARRAY AND POINTERS  //PRINTS THE MEMORY ADREESS




// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5]={1,2,3,4};
    
//     // Printing array name
//     cout << arr << endl;
    
//     // Printing address of first element
//     cout << &arr[0] <<endl;

//     return 0;
// }





//ONE DIMENTIONAL ARRAY


// #include <iostream>
// using namespace std;

// // Function to print elements of the array
// void printArray(int arr[], int size) 
// {
//     for (int i = 0; i < size; i++) 
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;
// }

// int main() {
//     // Declare and initialize a one-dimensional array
//     int numbers[5] = {10, 20, 30, 40, 50};

//     // Pass the array to the function along with its size
//     printArray(numbers, 5);

//     return 0;
// }










// 2D ARRAY 


#include <iostream>
using namespace std;

// Function to print elements of a 2D array
void print2DArray(int matrix[][3], int rows,int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Declare and initialize a two-dimensional array (3x3 matrix)
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Pass the 2D array to the function along with the number of rows
    print2DArray(matrix, 3, 3);

    return 0;
}

