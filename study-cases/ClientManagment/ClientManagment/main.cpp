#include <iostream>
#include "Client.h"
#include "Time.h"

using namespace std;

int main()
{
    Client c;                   // Create client object
    
    c.SetEntryTime(10, 10, 10); // Set entry time

    c.SetExitTime(10, 10, 22);  // Set exit time

    Time t = c.GetDuration();   // Get duration time

    t.PrintTime();              // Print duration time

    return 0;
}
