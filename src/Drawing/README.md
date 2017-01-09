# XSamples: Drawing #
##### X Windows and XLib
***
#### Summary

XSamples provides a collection of *XWindows* starter code that was used in the XPlatformer project.  All the examples make use of the XLib API (XOrg) and focus on code that was developed in the XPlatformer project (or planned to be used).  The point of the examples is to demonstrate techniques used by the XPlatform project.
		 
##### Description
The following is a sample that shows basic graphics usage using the helper files created for use in the XPlatformer project.  In this sample the `XInfo` is primarily used to perform common drawing functions.  `XInfo` wraps the various drawing functions and automatically handles default management of textual and standard graphic contexts.  The sample specifically shows how to use drawing commands, colour manipulation and line styles.

##### Compile Instructions

To make ("compile and link") an example, use the included makefile with 
the name of cpp file passed as a variable. For example, to make null.cpp:

	make NAME="null"

Then, to run:

	./null

Or you can even do it one step:

	make run NAME="Drawing"

    ./Drawing     Demos drawing functions and graphics contexts.