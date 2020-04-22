/*LL Delete at any position*/

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
    struct node *head = NULL,*tail = NULL;
    for(int i=0;i<n;i++){
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        cin >> newnode -> data;
        newnode -> next = NULL;
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail -> next = newnode;
            tail = newnode;
        }
    }
    int k;
    cin >> k;
    if(k == 0){
        struct node *temp = head;
        head = head -> next;
        free(temp);
    }
    else{
        struct node *temp = head;
        for(int i = 0; i < k; i++){
            cout << temp -> data;
            cout << "->";
            temp = temp -> next;
        }
        struct node *temp1 = temp;
        temp = temp -> next;
        free(temp1);
        while(temp != NULL){
            cout << temp -> data;
            temp = temp -> next;
            if(temp != NULL)
                cout << "->";
        }
    }
    return 0;
}

