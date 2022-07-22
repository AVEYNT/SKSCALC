// Insertion sort in C++

#include <iostream>

using namespace std;

// Function to print an array

void printArray(int array[], int size) {

  for (int i = 0; i < size; i++) {

    cout << array[i] << " ";

  }

  cout << endl;

}

void insertionSort(int array[], int size) {

  for (int step = 1; step < size; step++) {

    int key = array[step];

    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than

    // it is found.

    // For descending order, change key<array[j] to key>array[j].

    while (key < array[j] && j >= 0) {

      array[j + 1] = array[j];

      --j;

    }

    array[j + 1] = key;

  }

}

// Driver code

int main() {

  int sks[10],tot=0,d,a;  // deklarasi variabel

    char mk[20][10];// [20] karakter dan 10 data

        cout<<"--------------------------------------"<<endl;

        cout<<"Input Jumlah data: ";cin>>a;

        cout<<"--------------------------------------"<<endl;

        for(int i=0; i<a; i++){

            cout<<"Masukan Mata Kuliah: "; cin>>mk[i];

            cout<<"Masukan SKS        : "; cin>>sks[i];

            tot+=sks[i];

        }

        cout<<"--------------------------------------"<<endl;

        cout<<"Total SKS adalah: "<<tot<<endl;

        cout<<"--------------------------------------"<<endl;

 

}
