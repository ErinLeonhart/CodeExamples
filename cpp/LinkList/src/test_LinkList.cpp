// *********************************************************************************
// test_LinkList.cpp
// *********************************************************************************

#include "llist.cpp"

int main()
{
    // *****************************************************************************
    //
    // Begin the Link List test
    //
    // *****************************************************************************
    std::cout << "************** BEGIN LINK LIST TEST ****************" << std::endl;

    // create a list by adding nodes to the tail of a new list
    LList<int> newLList;
    newLList.addToTail(100);
    newLList.addToTail(200);
    newLList.addToTail(300);

    // *****************************************************************************
    //
    // test looking at the tail node of the previously created list
    //
    // *****************************************************************************
    std::cout << "**************** TEST PEEK AT TAIL *****************" << std::endl;
    std::cout << newLList.peekAtTail() << std::endl;;
    std::cout << std::endl;

    // *****************************************************************************
    //
    // test looking at the head node of the previously created list
    //
    // *****************************************************************************
    std::cout << "**************** TEST PEEK AT HEAD *****************" << std::endl;
    std::cout << newLList.peekAtHead() << std::endl;

    // *****************************************************************************
    //
    // test the copy constructor with the original list by creating a new list
    //
    // *****************************************************************************
    std::cout << "******************** TEST COPY *********************" << std::endl;
    LList<int> newLList2(newLList);
    newLList.print();
    newLList2.print();

    // *****************************************************************************
    //
    // test the removal of a single node from the tail
    //
    // *****************************************************************************
    std::cout << "************** TEST REMOVE FROM TAIL ***************" << std::endl;
    newLList2.removeAtTail();
    newLList2.print();

    // *****************************************************************************
    //
    // test the removal of a single node from the head
    //
    // *****************************************************************************
    std::cout << "************** TEST REMOVE FROM HEAD ***************" << std::endl;
    newLList2.removeAtHead();
    newLList2.print();

    // *****************************************************************************
    //
    // test the clear function and remove all elements from the two lists
    //
    // *****************************************************************************
    std::cout << "**************** TEST CLEAR FUNCTION ***************" << std::endl;
    newLList.clear();
    newLList.print();
    newLList2.clear();
    newLList2.print();

    std::cout << "******************* TEST COMPLETE ******************" << std:: endl;

    return 0;
}
