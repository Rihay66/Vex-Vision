using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern signature CamModule__SIG_1;
extern signature CamModule__SIG_2;
extern signature CamModule__SIG_3;
extern signature CamModule__SIG_4;
extern signature CamModule__SIG_5;
extern signature CamModule__SIG_6;
extern signature CamModule__SIG_7;
extern vision CamModule;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );