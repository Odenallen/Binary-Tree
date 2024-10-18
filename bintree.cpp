
#include "bintree.h"
#include <iostream>
#include <cmath>
using namespace std;
unsigned int maxDepth = 0;
unsigned int tempDepth = 0;
unsigned int minDepth = 0;
void insert(Node * & p, int key, double to_be_inserted) {
    /*Inserts key and value in the binary tree, initialize the new nodes left and
    right to nullptr. If the key already exists the value is overwritten, duplicate keys are
    not allowed. Key is required to have implemented operator< */


    if (p == nullptr)
    {   // There is no Node tree yet.
        p = new Node();
        p->data = to_be_inserted;
        p->key = key;
        p->left = nullptr;
        p->right = nullptr;
        }

    else{

        if (key<p->key)
        {
            insert(p->left,key,to_be_inserted);
        }
        else if (key> p->key)
        {
            insert(p->right,key,to_be_inserted);
        }
        else{
            p->data=to_be_inserted;
        }
        }

};

const double & find(Node * p, const int & to_be_found){
    //Find the node with key and returns it associated data.

    if (p == nullptr){

        throw std::out_of_range("The key does not exist!"); // Throw does not need return type
    }
   
    else if (to_be_found < p->key)
    {
        return find(p->left,to_be_found);
    }
    else if (to_be_found > p->key)
    {

        return find(p->right,to_be_found);
    }
    
    else 
    {

        return p->data;
    }




};

double & edit(Node * p, const int & to_be_changed){
/* Find and return a reference to editable data associated with the key.  */

    if (p == nullptr){

        throw std::out_of_range("The key does not exist!"); // Throw does not need return type
    }
   
    else if (to_be_changed < p->key)
    {
        return edit(p->left,to_be_changed);
    }
    else if (to_be_changed > p->key)
    {

        return edit(p->right,to_be_changed);
    }
    
    else 
    {
        // if not < or > then == 

        return p->data;
    }


};

void delete_tree(Node * & p){
    /* Deletes the entire tree at p. */

    if (p == nullptr){
        return;
    }

    if (p->left != nullptr){
        delete_tree(p->left);
        delete p->left;
        if (p->right != nullptr){
            delete_tree(p->right);
            delete p->right;
        }
    }
    else if (p->right != nullptr){
        delete_tree(p->right);
        delete p->right;
    }
    
    delete p;
    p=nullptr;


};

unsigned int max_height(Node * p){
    /*returns the height (longest chain) of the tree*/
    if (p == nullptr){
        return 0;
    }
  
    unsigned int leftTree = max_height(p->left);
    unsigned int rightTree = max_height(p->right);

    return 1 + std::max(leftTree,rightTree);

};

unsigned int min_height(Node * p){
    /* returns the shortest chain of the tree */    
    // std::cout << "Odens min_height" << std::endl;
    if (p == nullptr){
        return 0;
    }
  
    unsigned int leftTree = min_height(p->left);
    unsigned int rightTree = min_height(p->right);

    return 1 + std::min(leftTree,rightTree);

};

unsigned int size(Node * p){
    /* returns the number of nodes (p included) in the tree */

    if (p == nullptr){
        return 0;
    }
  
    unsigned int leftTree = size(p->left);
    unsigned int rightTree = size(p->right);

    return 1 + leftTree + rightTree;

};

bool is_balanced(Node * p){
    /* returns true if the tree is balanced */
    if (p == nullptr){
            return true;
        }

    bool isBalancedLeft = is_balanced(p->left);
    bool isBalancedRight = is_balanced(p->right);
    //convert to int
    int leftTree = max_height(p->left);
    int rightTree = max_height(p->right);

    if (abs(leftTree-rightTree) <= 1){
        return isBalancedLeft && isBalancedRight;
    }
    
    return false;}
    
    
void remove(Node * & p, const int & key){
    /* Remove the node with this key. If the node has two children you need to
    either find the maximum node to left or the minimum node to the right. Copy that
    node to the node with the key to be deleted and remove the found
    minimum/maximum node instead. */

    if (p == nullptr){

        throw std::out_of_range("The key does not exist!"); // Throw does not need return type
    }

    else if (key < p->key)
    {
        remove(p->left,key);
    }
    else if (key > p->key)
    {
        remove(p->right,key);
    }
    else{ // We found the key, p is the node with the key.
            
        if (p->left == nullptr && p->right == nullptr){ // No children
            delete p;
            p = nullptr;
        }
        else if (p->left == nullptr){ // One child, right
            Node * temp = p;
            p = p->right;
            delete temp;
        }
        else if (p->right == nullptr){  // One child, left
            Node * temp = p;
            p = p->left;
            delete temp;
        }
        else{ // Two children, find the minimum node to the right
            Node * temp = p->left;
            while (temp->right != nullptr){
                temp = temp->right;

            }
            p->key = temp->key;
            p->data = temp->data;
            remove(p->left,temp->key);
        }
    }







}
