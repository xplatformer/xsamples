/*
File: Null.cpp
Sample: Null
Author: CS349 Course
Description: A test to verify if the XWindow system is working.
*/

/// Standard Libraries
#include <cstdlib>
#include <iostream>

/// XLib Libraries
#include <X11/Xlib.h>

Display* display;

int main() {
	// open display (using DISPLAY env var)
	display = XOpenDisplay(""); 

	if (display == NULL) {
		std::cout << "error\n";
		exit(-1);
	} else {
		std::cout << "success!\n";

		// close display
		XCloseDisplay(display);    
	}
}
