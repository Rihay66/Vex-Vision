#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
/*vex-vision-config:begin*/
signature CamModule__SIG_1 = signature (1, 0, 0, 0, 0, 0, 0, 3, 0);
signature CamModule__SIG_2 = signature (2, 0, 0, 0, 0, 0, 0, 3, 0);
signature CamModule__SIG_3 = signature (3, 0, 0, 0, 0, 0, 0, 3, 0);
signature CamModule__SIG_4 = signature (4, 0, 0, 0, 0, 0, 0, 3, 0);
signature CamModule__SIG_5 = signature (5, 0, 0, 0, 0, 0, 0, 3, 0);
signature CamModule__SIG_6 = signature (6, 0, 0, 0, 0, 0, 0, 3, 0);
signature CamModule__SIG_7 = signature (7, 0, 0, 0, 0, 0, 0, 3, 0);
vision CamModule = vision (PORT9, 50, CamModule__SIG_1, CamModule__SIG_2, CamModule__SIG_3, CamModule__SIG_4, CamModule__SIG_5, CamModule__SIG_6, CamModule__SIG_7);
/*vex-vision-config:end*/

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}