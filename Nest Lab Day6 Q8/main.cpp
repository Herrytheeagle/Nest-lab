#include <iostream>
//#include "stdafx.h"
using namespace std;

/*Binary tree is a data structure in which a record is linked
 to two successor records, usually referred to as
  the left branch when greater and the right when
   less than the previous record.*/

struct TreeNode {
  int value;
  TreeNode* left;
  TreeNode* right;
};

struct Node {
    int Data;
    Node* Left;
    Node* Right;
};

 struct Node* Find( Node* node, int value )
{
    if( node == NULL )
        return NULL;
    if( node->Data == value )
        return node;
    if( node->Data > value )
        return Find( node->Left, value );
    else
        return Find( node->Right, value );
};

void Insert( Node* node, int value )
{
    if( node == NULL ) {
        node = new Node( value );
        return;
    }
    if( node->Data > value )
        Insert( node->Left, value );
    else
        Insert( node->Right, value );
};

int main() {
  TreeType* Insert = new TreeType;
  Insert->insertItem(8);

  return 0;
}
