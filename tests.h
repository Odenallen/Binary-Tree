#include <cxxtest/TestSuite.h>
#include "bintree.cpp"
#include <typeinfo>

class MyTestSuite : public CxxTest::TestSuite 
{
public:

  void testEmptyInsert( void )
  {
    Node * a = nullptr;
    insert(a,2,3.0);
    TS_ASSERT(a->key == 2);
    TS_ASSERT(a->data == 3.0);
    delete a;
    std::cout << "testEmptyInsert Worked!" << std::endl;
  }

  void testemptyFind( void ){
    Node * p = nullptr;
    TS_ASSERT_THROWS_ANYTHING(find(p,2));
    std::cout << "testemptyFind Worked!" << std::endl;
  }

  void testemptyEdit( void ){
    Node * p = nullptr;
    TS_ASSERT_THROWS_ANYTHING(edit(p,2));
    std::cout << "testemptyEdit Worked!" << std::endl;
  }

  void testemptyDelete_tree( void ){
    Node * p = nullptr;
    delete_tree(p);
    TS_ASSERT(p == nullptr);
    std::cout << "testemptyDelete_tree Worked!" << std::endl;
  
  }

  void testEmptymax_height( void ){
    Node * p = nullptr;
    unsigned int height = max_height(p);
    decltype(height) value = 0;
    TS_ASSERT(height==value);
    std::cout << "testEmptymax_height Worked!" << std::endl;
  }

  void testEmptymin_height( void ){
    Node * p = nullptr;
    unsigned int height = min_height(p);
    decltype(height) value = 0;
    TS_ASSERT(height==value);
    std::cout << "testEmptymin_height Worked!" << std::endl;
  }

  void testEmptySize( void ){
    Node * p = nullptr;
    unsigned int lenTree = size(p);
    decltype(lenTree) value = 0;
    TS_ASSERT(lenTree==value);
    std::cout << "testEmptySize Worked!" << std::endl;
  }

  void testEmptyis_balanced( void ){
    Node * p = nullptr;
    bool balanced = is_balanced(p);
    TS_ASSERT(balanced == true);
    std::cout << "testEmptyis_balanced Worked!" << std::endl;
  }

  void testEmptyRemove( void ){
    Node * p = nullptr;
    TS_ASSERT_THROWS_ANYTHING(remove(p,2));
    std::cout << "testEmptyRemove Worked!" << std::endl;
  }
 
  

// LEVEL 1 TESTS

  void testInsertlevel1( void )
  {
    Node * a = nullptr;
    insert(a,2,3.0);
    TS_ASSERT(a->key == 2);
    TS_ASSERT(a->data == 3.0);
    delete a;
    std::cout << "testInsertlevel1 Worked!" << std::endl;
  }

  void testFindlevel1( void ){
    Node * p = nullptr;
    
    insert(p,2,3.1);
    double a1 = find(p,2);
    TS_ASSERT(a1 == 3.1);
    delete p;
    std::cout << "testFindlevel1 Worked!" << std::endl;
  }

void testEditlevel1(void)
  {/*Find and return a reference to editable data associated with the key.*/

    Node * p = nullptr;
    
    insert(p,1,2.5);
    double & a = edit(p,1);
    a = 2.0;
    TS_ASSERT(a == 2.0);
    delete p;
    std::cout << "testEditlevel1 Worked!" << std::endl;
  }

void testDeleteTreelevel1(void){
    Node * p = nullptr;
    
    insert(p,2,3.1);
    delete_tree(p);
    TS_ASSERT(p == nullptr);
    std::cout << "testDeleteTreelevel1 Worked!" << std::endl;
}

void testMaxHeightLevel1( void ){
  Node * p = nullptr;
  insert(p,5,3.1);
  unsigned int height = max_height(p);
  decltype(height) value = 1;
  TS_ASSERT(height==value);
  delete p;
  std::cout << "testMaxHeightLevel1 Worked!" << std::endl;
}

void testMinHeightLevel1( void ){
  Node * p = nullptr;
  insert(p,5,3.1);
  unsigned int height = min_height(p);
  decltype(height) value = 1;
  TS_ASSERT(height==value);
  delete p;
  std::cout << "testMinHeightLevel1 Worked!" << std::endl;

}

void testSizeLevel1( void ){
  Node * p = nullptr;
  insert(p,5,3.1);
  unsigned int lenTree = size(p);
  decltype(lenTree) value = 1;
  TS_ASSERT(lenTree==value);
  delete p;
  std::cout << "testSizeLevel1 Worked!" << std::endl;
}

void testBalancedLevel1(void){
Node * p = nullptr;
insert(p,5,3.1);
bool balanced = is_balanced(p);
TS_ASSERT(balanced == true);
delete p;
std::cout << "testBalancedLevel1 Worked!" << std::endl;
}

void testRemoveLevel1( void) {
Node * p = nullptr;
insert(p,5,3.1);
remove(p,5);
TS_ASSERT(p == nullptr);
std::cout << "testRemoveLevel1 Worked!" << std::endl;

}



// LEVEL 2 TESTS





  void testInsert( void )
  {
    Node * p = nullptr;
    insert(p,2,3.0);
    insert(p,1,2.5);
    insert(p,5,27.5);

    /*

          key = 2
          data = 3.0
              |
              |    
          <--   -->
          |       |
          |       |
    key = 1   |  key = 5
    data = 2.5| data = 27.5
    
    */

    TS_ASSERT(p->key == 2);
    TS_ASSERT(p->data == 3.0);
    TS_ASSERT(p->left->key == 1 && p->left->data == 2.5);
    TS_ASSERT(p->right->key == 5 && p->right->data == 27.5);
    delete p->left;
    delete p->right;
    delete p;
    std::cout << "testInsert Worked!" << std::endl;
  }

  

  void testFind(void){


    Node * p = nullptr;
    
    insert(p,2,3.1);
    insert(p,1,2.5);
    insert(p,5,27.5);
    double a1 = find(p,2);
    double a2 = find(p,1);
    double a3 = find(p,5);
    TS_ASSERT(a1 == 3.1);
    TS_ASSERT_THROWS_ANYTHING(find(p,99));
    delete p->left;
    delete p->right;
    delete p;
    std::cout << "testFind Worked!" << std::endl;
  }
 
  




void testDeleteTree(void){
    Node * p = nullptr;
    
    insert(p,2,3.1);
    insert(p,1,2.5);
    insert(p,5,7.5);
    insert(p,4,10.5);
    insert(p,3,12.1);
    delete_tree(p);
    TS_ASSERT(p == nullptr);
    std::cout << "testDeleteTree Worked!" << std::endl;
}




void testMaxHeight(void){
  /* returns the height (longest chain) of the tree */

    Node * p = nullptr;
    insert(p,5,3.1);
    insert(p,3,2.1);
    
    insert(p,15,3.1);
    insert(p,10,10.3);
    unsigned int height = max_height(p);
    decltype(height) value = 3;
    TS_ASSERT(height==value);

    delete p->right->left;
    delete p->right;
    delete p->left;
    delete p;
    std::cout << "testMaxHeight Worked!" << std::endl;

}



void testMinYeight( void ){
    Node * p = nullptr;
    insert(p,5,3.1);
    insert(p,3,2.1);
    
    insert(p,15,3.1);
    insert(p,10,10.3);
    unsigned int height = min_height(p);
    decltype(height) value = 2;
    TS_ASSERT(height==value);
    delete p->right->left;
    delete p->right;
    delete p->left;
    delete p;
    std::cout << "testMinYeight Worked!" << std::endl;


}



void testSize( void ){
  Node * p = nullptr;
  insert(p,5,3.1);
  insert(p,3,2.1);
  insert(p,15,3.1);
  insert(p,10,10.3);
  insert(p,20,20.3);

  unsigned int lenTree = size(p);
  decltype(lenTree) value = 5;
  TS_ASSERT(lenTree==value);
  delete p->right->left;
  delete p->right->right;
  delete p->right;
  delete p->left;
  delete p;
  std::cout << "testSize Worked!" << std::endl;

}




void testRemove( void ){

  Node * p = nullptr;
  insert(p,5,3.1);
  insert(p,3,2.1);
  insert(p,4,2.1);
  insert(p,6,1.1);

  remove(p,5);
  TS_ASSERT_THROWS_ANYTHING(find(p,5));
  TS_ASSERT(p->key == 4);
  delete p->right;
  delete p->left;
  delete p;
  std::cout << "testRemove Worked!" << std::endl;

}

// functions throwing std::out_of_range with size > 1

void testFindThrow( void ){
  Node * p = nullptr;
  insert(p,5,3.1);
  insert(p,3,2.1);
  insert(p,4,2.1);
  insert(p,6,1.1);
  TS_ASSERT_THROWS_ANYTHING(find(p,11));
  delete_tree(p);
  std::cout << "testFindThrow Worked!" << std::endl;
  }

void  testEditThrow( void ){
  Node * p = nullptr;
  insert(p,5,3.1);
  insert(p,3,2.1);
  insert(p,4,2.1);
  insert(p,6,1.1);
  TS_ASSERT_THROWS_ANYTHING(edit(p,11));
  delete_tree(p);
  std::cout << "testEditThrow Worked!" << std::endl;
  }

void testRemoveThrow( void ){
  Node * p = nullptr;
  insert(p,5,3.1);
  insert(p,3,2.1);
  insert(p,4,2.1);
  insert(p,6,1.1);
  TS_ASSERT_THROWS_ANYTHING(remove(p,11));
  delete_tree(p);
  std::cout << "testRemoveThrow Worked!" << std::endl;
  }

  // introduce bug, and correct afterwards

  void testRemoveBug( void ){
    Node * p = nullptr;
    insert(p,5,3.1);
    insert(p,3,2.1);
    insert(p,4,2.1);
    insert(p,6,1.1);
    remove(p,3);
    TS_ASSERT_THROWS_ANYTHING(find(p,3));
    insert(p,3,2.1);
    TS_ASSERT(find(p,3) == 2.1);
    delete_tree(p);
    std::cout << "testRemoveBug Worked!" << std::endl;
  }

};