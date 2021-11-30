/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Strickland
 */

#include <iostream>
#include <string>
#include <math.h>

using namespace std;
string doQuad(double a, double b, double c);

int main() {
    double a, b, c;
    // get input
    cout << "Input a: ";
    cin >> a;

    cout << "Input b: ";
    cin >> b;

    cout << "Input c: ";
    cin >> c;

    // output result
    cout << "Result: " << doQuad(a,b,c) << endl;

    return 0;
}

// returns the value of x for the quad equation
string doQuad(double a, double b, double c) {
    if (((pow(b, 2)) - (4 * a * c)) < 0)
        return "no real roots";

    string outputstr;
    double root1, root2;
    // calculate roots
    root1 = ((-1 * b) + sqrt((pow(b,2) - (4 * a * c)))) / (2 * a);
    root2 = ((-1 * b) - sqrt((pow(b,2) - (4 * a * c)))) / (2 * a);
    
    // check roots and add to output str if valid
    if ((a * pow(root1,2) + b * root1 + c) == 0)
        outputstr += to_string(root1);
    if ((a * pow(root2,2) + b * root2 + c) == 0)
        outputstr += ", " + to_string(root2);
    
    return outputstr;
}