// ****************************************************************************
// test_queue.cpp
// ****************************************************************************

#include "queue.cpp"

int main()
{
    // ************************************************************************
    //
    // Begin a new stack by using the enqueue function
    //
    // ************************************************************************
    std::cout << "************** BEGIN STACK TEST **************" << std::endl;
    std::cout << "************* TEST PUSH FUNCTION *************" << std::endl;
    
    Queue<int> newQueue;
    newQueue.enqueue(100);
    newQueue.enqueue(200);
    newQueue.enqueue(300);
    
    std::cout << "This what is contained in the new stack" << std::endl;
    newQueue.print();

    // ************************************************************************
    //
    // test the dequeue function on newQueue
    //
    // ************************************************************************
    std::cout << "*************** TEST POP FUNCTION ************" << std::endl;
    std::cout << "the item being removed is: "
              << newQueue.dequeue() << std::endl;
    newQueue.print();

    std::cout << "**************** TEST COMPLETE ***************" << std::endl;

    return 0;

}
