// *********************************************************************************
// test_Stack.cpp
// *********************************************************************************

#include "stack.cpp"

int main()
{
    // *****************************************************************************
    //
    // Begin a new stack by using the push function
    //
    // *****************************************************************************
    std::cout << "**************** BEGIN STACK TEST ******************" << std::endl;
    std::cout << "*************** TEST PUSH FUNCTION *****************" << std::endl;
    
    Stack<int> newStack;
    newStack.push(100);
    newStack.push(200);
    newStack.push(300);
    
    std::cout << "This what is contained in the new stack" << std::endl;
    newStack.print();

    // *****************************************************************************
    //
    // test the pop function on newStack
    //
    // *****************************************************************************
    std::cout << "**************** TEST POP FUNCTION ***************" << std::endl;
    std::cout << "the item being removed is: " << newStack.pop() << std::endl;
    newStack.print();

    std::cout << "******************* TEST COMPLETE ******************" << std:: endl;

    return 0;

}
