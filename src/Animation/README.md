# XSamples: Animation #
##### X Windows and XLib
***
#### Summary

XSamples provides a collection of *XWindows* starter code that was used in the XPlatformer project.  All the examples make use of the XLib API (XOrg) and focus on code that was developed in the XPlatformer project (or planned to be used).  The point of the examples is to demonstrate techniques used by the XPlatform project.
		 
##### Description
The following is a sample that shows using the helper files to display sprite animation.  This sample uses a collection of various files from the framework in order to create animation.  The sample consists of a simple alien character displaying a series of animations in response to user input commands.   

##### Compile Instructions

To make ("compile and link") an example, use the included makefile with 
the name of cpp file passed as a variable. For example, to make null.cpp:

	make NAME="null"

Then, to run:

	./null

Or you can even do it one step:

	make run NAME="Animation"

    ./Animation       Demos sprite animation using the framework.