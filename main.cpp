/*************************
* 
*
* Name: Fabio Ventura
* Coding 05
* purpose: program to serve as the driver file for testing the Stack ADT
*
*
**************************/
#include "main.h"



int main(int argc, char **argv) 
{
    int inputValue = std::stoi(argv[1]);

    if(argc != 2)
    {
        cout << "\t Provide 1 argument" << endl;
    }

    try
    {
        if(inputValue <= 0)
        {
        cout << "\t Provide an intger greater than 0" << endl;
        }
    }catch(...)
    {
        cout << "\t Provide an integer" << endl;
    }

    // TEMINATE PROGRAM HERE SOMEHOW WITOHTU USING MORE THAN ONE RETURN OR EXIT()
    // TEMINATE PROGRAM HERE SOMEHOW WITOHTU USING MORE THAN ONE RETURN OR EXIT
    // TEMINATE PROGRAM HERE SOMEHOW WITOHTU USING MORE THAN ONE RETURN OR EXIT


    Stack myStack(inputValue);
    Data* empty = new Data;
    string h = "hello";

    cout << myStack.getSize() << endl;




    cout << myStack.push(4, &h) << endl;
    cout << myStack.push(4, &h) << endl;
    cout << myStack.push(4, &h) << endl;
    cout << myStack.push(4, &h) << endl;
    cout << myStack.push(4, &h) << endl;
    cout << myStack.push(4, &h) << endl;
    cout << myStack.pop(empty) << endl;
    cout << myStack.pop(empty) << endl;
    cout << myStack.pop(empty) << endl;
    cout << myStack.pop(empty) << endl;
    cout << myStack.pop(empty) << endl;
    cout << myStack.pop(empty) << endl;





   


    // here for the rand_string() function
    // if you don't use it, get rid of this
    srand(time(NULL));



    /* ***************************************************************
     * Use the number passed in from the command line and declare a stack
     * that uses that number as the size of the stack. NOTE: Make sure
     * your stack checks the number passed in to it. You cannot rely
     * on main checking the number first, each part of every program and
     * ADT is always responsible for it's own error checking. Main must
     * check the user gave it an int. The stack must check main()
     * gave it a good number. This is proper error checking, no part of
     * any program can assume it's caller is behaving correctly. To do this,
     * try passing -1 or 0 or some other "bad" number to the stack from
     * main and make sure your stack rejects it, or defaults to some
     * pre-defined default value. This will be tested during grading.
     * ***************************************************************/

    
    /* ***************************************************************
     * Throughly test your stack. You must perform an exhaustive series
     * of tests on your stack. Show all possible ways your stack can be used
     * and abused and prove that your stack can gracefully handle ALL cases.
     * You must use automated testing (no user input). First cover all
     * explicit cases which you can think of, then execute random operations.
     * When generating test data, use random ints for ids and random short
     * strings for string. There is a string generator made for you in the
     * functions module. You are free to use it or make your own.
     * ***************************************************************/


    
    // make 20 random strings, store them, display them
    /*std::string strtemp;
    for(int i=0; i<20; i++){
        rand_string(&strtemp);
        std::cout << strtemp << std::endl;
    }*/
  
    
    return 0;
}
