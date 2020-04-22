/*LL Searching*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main() {
    int n;
    cin >> n;
    int m;
    struct node *head = NULL;
    for(int i = 0; i < n; i++){
        cin >> m;
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode -> data = m;
        newnode -> next = NULL;
        if(head != NULL){
            struct node *temp = head;
            while(temp -> next != NULL) 
                temp = temp -> next;
            temp -> next = newnode;
        }
        else
            head = newnode;
    }
    int q;
    cin >> q;
    struct node *temp = head;
    while(temp != NULL){
        if(temp -> data == q){
            cout << "found";
            return 0;
        }
        temp = temp -> next;
    }
    cout << "not found";
    return 0;
}