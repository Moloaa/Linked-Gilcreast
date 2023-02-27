// Linked Gilcreast.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>////standard template library
#include "ListsHeader.h"
#include "LinkedHeader.h"
#include <time.h>
//using namespace saves time
using namespace std;

int main()
{
    cout << "Hello World! We have linked lists\n"; 
    LinkedList list;
    //define clock
      clock_t start, end;
    //start clock
        start = clock();
        /*Sleep(2000);*/
       
        return 0;

        for (int i = 0; i < 1000000; i++) ////for loop run time/test run time/load data method
        {
            list.insert(rand() % 100);
           
         ///end clock 
        end = clock();
        cout << start << endl;
        cout << end << endl;

        ///display clock
        cout << (end - start) / 1000.00;
        system("pause");

        list.display();
        int len =  list.getLength(); ///pointer

    cout << "# of nodes ="  << len << endl;
    }
}
   

