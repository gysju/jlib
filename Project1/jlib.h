#ifndef JLIB_H_INCLUDED
#define JLIB_H_INCLUDED

#include "jlib_platform.h"

// ** TYPES **

struct JImage;

// ** IMAGE **

int GImageGetSizeX(const JImage * image);
int GImageGetSizeY(const JImage * image);
int GImageGetPosX(const JImage * image);
int GImageGetPosY(const JImage * image);

JImage * GImageCreate(const int sizeX, const int sizeY);
JImage * GImageLoad(const char * fileName);

// ** MATH **

float JMathRadToDeg(const float rad);
float JMathDegToRad(const float deg);
float JMathGetRandom(const float min, const float max);

// ** DEBUG **

void JDbg_Printf(const char * pText, ...);

// ** INPUT **

enum JInputID
{
	// PC
	JInputID_DEFAULT,
	JInputID_KeyArrowUP,
	JInputID_KeyArrowDOWN,
	JInputID_KeyArrowLEFT,
	JInputID_KeyArrowRIGHT,
	JInputID_MouseLeft,
	JInputID_MouseMiddle,
	JInputID_MouseRight,
	JInputID_KeyShift,
	JInputID_KeyControl,
	JInputID_KeyAlt,
	JInputID_KeySpace,
	JInputID_KeyReturn,
	JInputID_KeyEscape,
	JInputID_KeyBackspace,
	JInputID_KeyTab,
	JInputID_KeyDelete,
	JInputID_TOTAL
};

// ** TIME **

int JTimeGetMilliseconds();

// ** Main function **

void JFullScreen(bool state);

int JGetDisplaySizeX();
int JGetDisplaySizeY();

int JGetCurrentMouseX();
int JGetCurrentMouseY();
#endif