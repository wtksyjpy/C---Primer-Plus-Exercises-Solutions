/*
Write a function that normally takes one argument,
the address of a string, and prints that string once.

However, if a second, type int, argument is provided and is nonzero,
the function should print the string a number of times equal to the number of times that function has been called at that point.

(Note that the number of times the string is printed is not equal to the value of the second argument; it is equal to the number of times the function has been called.)

Yes, this is a silly function, but it makes you use some of the techniques discussed in this chapter.
Use the function in a simple program that demonstrates how the function works.
*/
#include <iostream>
#include <string>
using namespace std;
int counter = 0;

void silly_func (string str, int n = 0);

int main () {
    string str;
    cout << "Please, enter string: ";
    cin >> str;

    silly_func (str,3);
    cout << "Second attempt: \n";
    silly_func (str,3);

    cout << "Attempt with one argument: \n";
    silly_func (str);


    system("pause");
}

void silly_func (string my_str, int n) {
    counter++;
    if (n > 0) {
        for (int i = counter; i > 0; i--) {
            cout << my_str << endl;
        }
    } else cout << my_str << endl;
}