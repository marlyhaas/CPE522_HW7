#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "derek_LED.h"

using namespace std;

int main(int argc, char* argv[])
{
   if(argc!=3)
   {
      cout << "Usage is makeLEDs <command>" << endl;
      cout << "    command is one of: on, off, flash, blink num, or status" << endl;
      cout << "    e.g. makeLEDs flash" << endl;
   }

   cout << "Starting the makeLEDs program" << endl;
   string cmd(argv[1]);
   int num = atoi(argv[2]);

   if(cmd=="on") LED(0).turnOn();
   else if(cmd=="off") LED(0).turnOff();
   else if(cmd=="flash") LED(0).flash("100");
   else if(cmd=="blink") LED(0).blink(num);
   else if(cmd=="status") LED(0).outputState();
   else
   {
      cout << "Invalid command!" << endl;
   }

   cout << "Finished the makeLEDs program." << endl;
   return 0;
}
