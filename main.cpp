#include <iostream>

using namespace std;

int main() {

    cout << "How many items do you want to enter?" << endl;

    int input;

    cin >> input;

    //Allocate the memory by using keyword new
    int *pointer = NULL;

    // store array to pointer
    pointer = new int [input];

    int temp;

    for( int counter = 0; counter <= input -1; counter++ ){

       cout << "enter one item " << counter+1 <<  endl;
       cin >> temp;
       *(pointer+counter) = temp;
    }

    //output
    for(int counter = 0; counter <= input-1; counter ++){

        cout << counter << " Input is: " << *(pointer+counter) << endl;
    }

    //delete memory in heap (delete pointer)

    delete []pointer;


    return 0;
}