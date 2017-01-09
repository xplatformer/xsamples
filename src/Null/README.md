# XSamples: Null #
##### X Windows and XLib
***
#### Summary

XSamples provides a collection of *XWindows* starter code that was used in the XPlatformer project.  All the examples make use of the XLib API (XOrg) and focus on code that was developed in the XPlatformer project (or planned to be used).  The point of the examples is to demonstrate techniques used by the XPlatform project.

##### Compile Instructions

To make ("compile and link") an example, use the included makefile with 
the name of cpp file passed as a variable. For example, to make Input.cpp:

	make NAME="null"

Then, to run:

	./null

Or you can even do it one step:

	make run NAME="null"

    ./null     A test to verify if the XWindow system is working.