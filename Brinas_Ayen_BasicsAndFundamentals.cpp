//Program by Ayen Brinas
#include <iostream>
using namespace std;

void sortDescending(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                
                // For swapping arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array1[10], array2[10], finalArray[20];
    int arrsize1, arrsize2;

    // Will let the user input the size and elements for the first array
    do {
    cout << "Enter the number of elements in the first array: ";
    cin >> arrsize1;
    if (arrsize1 < 0 || arrsize1 > 10) {
        cout << "Enter up to 10 elements only." << endl << endl;
    }
} while (arrsize1 < 0 || arrsize1 > 10);

    cout << "Enter the elements of the first array:" << endl;
    for(int i = 0; i < arrsize1; i++) {
        cin >> array1[i];
    }

    // User Input for Second Array
    do {
    cout << "\nEnter the number of elements in the second array: ";
    cin >> arrsize2;
    if (arrsize2 < 0 || arrsize2 > 10) {
        cout << "Enter up to 10 elements only." << endl;
    }
} while (arrsize2 < 0 || arrsize2 > 10);
    cout << "Enter the elements of the second array:" << endl;
    for(int i = 0; i < arrsize2; i++) {
        cin >> array2[i];
    }

    // Combining array 1 and array 2
    for(int i = 0; i < arrsize1; i++) {
        finalArray[i] = array1[i];
    }
    for(int i = 0; i < arrsize2; i++) {
        finalArray[arrsize1 + i] = array2[i];
    }

    // Sort Elements in Descending Order
    sortDescending(finalArray, arrsize1 + arrsize2);

    // Final Ouput
    cout << "\n Combination of Array 1 and 2 in Descending Order:" << endl;
    for(int i = 0; i < arrsize1 + arrsize2; i++) {
        cout << finalArray[i] << " ";
    }
    cout << endl;
cout<<"First commit";
cout<<"Second COmmit";
cout<<"Third commit";
cout<<"FDDdd";
cout<<"lllll";
cout<<"aaaaa";
cout<<"bbb"; 
    return 0;
}
