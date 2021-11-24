#include<iostream>
#include "std_lib_facilities.h"
using namespace std;

// function to add two integers and return the sum
int add(const int a, const int b){
    int sum = a + b;
    //if a = 5; was placed here, there would be an error since a is a const int
    return sum;
}

int main() {
    cout<<add(2,3);
    cout<<("\n");
    cout<<add(5, 3);
}

// Declaring a non-reference function argument const makes it so that the argument cannot be changed.
// You would want to do this if you have a value that you don't want to change accidentally.
// People do not do this often since a lot of times, they want to change values at compile time.
