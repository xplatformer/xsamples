/*
File: XWindow.cpp
Sample: XWindow
Author: Jonathan Beverly
Description: Opens a single blank window using the XPlatformer framework.

Notes:
The XWindow sample makes use of the XInfo controller class.  The purpose of XInfo is to act as a controller
for handling a single xwindow.  It controls opening/closing/graphics and other aspects.  It removes a large 
portion of the busy work associated with XLib functions and as a wrapper.

The XWindow is designed to show how to perform a series of basic tasks using the XPlatformer framework 
code.  However, it is important to note that a series of samples are based on concepts and ideas from
the CS349 Interfaces course.  Specifically, the idea of a simple window sample are derived from an example
called "openwindow".   It is important to note that the course code only served as inspiration for the XPlatformer code.
*/

/// Standard Libraries
#include <list>
#include <cstdlib>
#include <iostream>
#include <unistd.h>

/// XLib Libraries
#include <X11/Xlib.h>
#include <X11/Xutil.h>

/// Project Libraries
#include "XInfo.h"

/*
* Start executing here.
*	First initialize xinfo (XWindows manager).
*	Next open window and prepare for commands.
*	Use xinfo to close window.
*/
int main(int argc, char* argv[])
{
	// initializes and creates new instance of xinfo window manager
	// xinfo manages xwindow related tasks (graphics/window management)
	XInfo* xinfo = new XInfo();
	xinfo->initialize(argc, argv);

	// opens the window that is controlled by xinfo
	xinfo->openw();

	// let server get set up before sending drawing commands
	sleep(2);

	// wait for user input to quit (using simple console command)
	std::cout << "press ENTER to exit";
	std::cin.get();

	// closes the window controlled by XInfo
	xinfo->close();
}