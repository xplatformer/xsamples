# XSamples: Sprites #
##### X Windows and XLib
***
#### Summary
XSamples provides a collection of *XWindows* starter code that was used in the XPlatformer project.  All the examples make use of the XLib API (XOrg) and focus on code that was developed in the XPlatformer project (or planned to be used).  The point of the examples is to demonstrate techniques used by the XPlatform project.
		 
##### Description
The following is a sample that shows basic sprite handling using the helper files created for use in  the XPlatformer project.  This sample is used for the purpose of demonstrating the usage of `Spritesheet` and `XInfo` in sprite operations.   Specifically it demonstrates how to use `XInfo` to load bitmaps or spritesheets and make use of them.  

##### Compile Instructions

To make ("compile and link") an example, use the included makefile with 
the name of cpp file passed as a variable. For example, to make null.cpp:

	make NAME="null"

Then, to run:

	./null

Or you can even do it one step:

	make run NAME="Sprites"

    ./Sprites     Demos using sprite drawing functions.