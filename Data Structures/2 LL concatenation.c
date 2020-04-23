/*concatenatin of 2 LL*/
/*70% of the code is auto-complete so opted C-lang only logic is to written*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    int val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, int val) {
    if (!head) {
        head = malloc(sizeof(LinkedListNode));

        head -> val = val;
        head -> next = NULL;

        tail = head;
    } else {
        LinkedListNode *node = malloc(sizeof(LinkedListNode));

        node -> val = val;
        node -> next = NULL;

        tail -> next = node;
        tail = tail->next;
    }
    return tail;
}

/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/
/*from here*/

typedef LinkedListNode node;
LinkedListNode* concat(LinkedListNode* node1, LinkedListNode* node2) {
    node * head = NULL, *tail = NULL;
    int count1 = 0, count2 = 0;
    node *t1 = node1;
    node *t2 = node2;
    while(t1 != NULL){
        count1++;
        if(t1 -> next != NULL)
        t1 = t1 -> next;
        else
            break;
    }
    while(t2 != NULL){
        count2++;
        if(t2 -> next != NULL)
        t2 = t2 -> next;
        else
            break;
    }
    if(count1 == 0){
        if(count2 == 0)
            return NULL;
        else
            return node2;
    }
    else if(count2 == 0)
        return node1;
    else if(count1 <= count2){
        head = node1;
        t1 -> next = node2;
    }
    else{
        head = node2;
        t2 -> next = node1;
    }
    return head;
}

/*till here*/

int main(){
    FILE *f = fopen(getenv("OUTPUT_PATH"), "w");
    char* node1_size_endptr;
    char* node1_size_str = readline();
    int node1_size = strtol(node1_size_str, &node1_size_endptr, 10);

    if (node1_size_endptr == node1_size_str || *node1_size_endptr != '\0') { exit(EXIT_FAILURE); }

    LinkedListNode* node1 = NULL;
    LinkedListNode* node1_tail = NULL;

    for (int node1_i = 0; node1_i < node1_size; node1_i++) {
        char* node1_item_endptr;
        char* node1_item_str = readline();
        int node1_item = strtol(node1_item_str, &node1_item_endptr, 10);

        if (node1_item_endptr == node1_item_str || *node1_item_endptr != '\0') { exit(EXIT_FAILURE); }
        node1_tail = _insert_node_into_singlylinkedlist(node1, node1_tail, node1_item);

        if (!node1_i) {
            node1 = node1_tail;
        }
    }

    char* node2_size_endptr;
    char* node2_size_str = readline();
    int node2_size = strtol(node2_size_str, &node2_size_endptr, 10);

    if (node2_size_endptr == node2_size_str || *node2_size_endptr != '\0') { exit(EXIT_FAILURE); }

    LinkedListNode* node2 = NULL;
    LinkedListNode* node2_tail = NULL;

    for (int node2_i = 0; node2_i < node2_size; node2_i++) {
        char* node2_item_endptr;
        char* node2_item_str = readline();
        int node2_item = strtol(node2_item_str, &node2_item_endptr, 10);

        if (node2_item_endptr == node2_item_str || *node2_item_endptr != '\0') { exit(EXIT_FAILURE); }
        node2_tail = _insert_node_into_singlylinkedlist(node2, node2_tail, node2_item);

        if (!node2_i) {
            node2 = node2_tail;
        }
    }

    LinkedListNode* res = concat(node1, node2);

    while (res) {
        fprintf(f, "%d", res->val);

        if (res->next) {
            fprintf(f, "\n");
        }

        res = res->next;
    }

    fprintf(f, "\n");


    fclose(f);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}