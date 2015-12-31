//
//  main.cpp
//  cplayground
//
//  Created by Jinwook Lee on 2015-12-29.
//  Copyright (c) 2015 Jinwook Lee. All rights reserved.
//

#include <iostream>

using namespace std;

void printer(double[]);
void pointPrinter(double*);
void pointPrinter1(int*);

int main() {
    double example[4];
    
    
    int example1[] = {9,9,9,9};
    
    example[0] = 1;
    example[1] = 2;
    example[2] = 3;
    example[3] = 4;
    
    cout << "address: " << &example[0] << endl;
    
    int *p = example1;
    cout << "pointer p is..."<< *p << endl;
    
    double *pointer2 = example;
    
    cout << "pointer pointer2 is..."<< pointer2 << endl;
    
    double *pointer = &example[0];
    
    cout << "pointer is..."<< pointer << endl;
    
    cout << "Printing Array" << endl;
    printer(example);
    cout << "Printing Pointer Array" << endl;
    pointPrinter(pointer);
    
    cout << "Printing Pointer Array" << endl;
    pointPrinter1(p);
    
    cout << "Printing Pointer Array" << endl;
    pointPrinter(pointer2);
    
}

void printer(double arr[]) {
    //arr is a pointer to the first element. C++ is smart enough to know not to pass by value
    cout << arr << endl;
    
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }
    
}

void pointPrinter(double *pointer) {
    cout << pointer << endl;
    for (int i = 0; i < 4; i++) {
        cout << *pointer << endl;
        pointer++;
    }
}

void pointPrinter1(int *pointer) {
    for (int i = 0; i < 4; i++) {
        cout << *pointer << endl;
        pointer++;
    }
}