#include <iostream>

int main()
{
    int f, g; // created variable a and b but not initialized.

    // you can define multiple variables defined on the same line.
    int a = 5, b = 6;       // copy-initialization
    int c ( 7 ), d ( 8 );   //direct-initilization
    int e { 5 }, h { 9 };   //direct-list-initialization
    int i {}, j{};          // value initialization   
    return 0;
}