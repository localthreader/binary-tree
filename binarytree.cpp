#include <iostream>

struct node {
    node* left;
    node* right;
    int data;
};

int current;

node* insert(node* parent) {
    if (parent->left == nullptr) {
        parent->left = (node*)malloc(sizeof(node));
        parent->left->data = current++;
    } else {
        parent->right = (node*)malloc(sizeof(node));
        parent->right->data = current++;
    }
}

int main() {
    current = 1;
    node* root = (node*) malloc(sizeof(node));
}