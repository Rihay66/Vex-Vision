/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\2105934                                          */
/*    Created:      Mon Aug 15 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// CamModule            vision        9               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // Used to get info the object size
  //float objHeight = CamModule.largestObject.height;
  //float objWidth = CamModule.largestObject.width;

  //Checks the brain if the camera is connected
  if(!CamModule.installed()){
    Brain.Screen.clearScreen();
    Brain.Screen.print("No Module connedted!");
    return -1;
  }

  //[]Make the program spot a red object and give a size of the object

}
