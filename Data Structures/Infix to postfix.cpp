/*Infix to postfix*/

#include <iostream>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;
bool isOperator(char character) {
    if (character == '+' || character == '-' || character == '*' || character == '/') 
        return true;
    return false;
}

bool isOperand(char character) {
    if (!isOperator(character) && character != '(' && character != ')') 
        return true;
    return false;
}

int compareOperators(char op1, char op2) {
    if ((op1 == '*' || op1 == '/') && (op2 == '+' || op2 == '-')) 
        return -1; 
    else if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '/')) 
        return 1; 
    return 0;
}

int main(){
    stack<char> stk;
    string postfix = "";
    char input[100];
    cin >> input;
    char *cptr = input;
    while (*cptr != '\0') {
        if (isOperand(*cptr)) 
            postfix += *cptr; 
        else if (isOperator(*cptr)) {
            while (!stk.empty() && stk.top() != '(' && compareOperators(stk.top(),*cptr) <= 0) {
                postfix += stk.top();
                stk.pop();
            }
            stk.push(*cptr);
        }
        else if (*cptr == '(') 
            stk.push(*cptr); 
        else if (*cptr == ')') {
            while (!stk.empty()) {
                if (stk.top() == '(') {
                        stk.pop(); 
                        break;
                }
                postfix += stk.top();
                stk.pop();
            }
        }
        cptr++;
    }
    while (!stk.empty()) {
        postfix += stk.top();
        stk.pop();
    }
    cout << postfix << endl;
    return 0;
}