#include <iostream>
#include "opt.hpp"

using namespace std;

void insert(double arr[], int &n, int index, double value){
    for(int i = n; i > index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    n++;
}

void deleteAt( double arr[], int &n, int index){
    for(int i = index; i< n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

int main() {

    double arr[100] = {5,4,3,2,1};
    int n = 5;

    for (int i = 0; i< n; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;

    // Insert 10 at index 2
    insert(arr, n, 2, 10);
    cout << "After insertion: ";
    for (int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
     cout << endl;

    // Delete element at index 1
    deleteAt(arr, n, 1);
    cout<< "After deletion: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
     cout << endl;
    
    return 0;
}