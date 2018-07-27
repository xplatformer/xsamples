# XSamples: Input #
##### X Windows and XLib
***
#### Summary

XSamples provides a collection of *XWindows* starter code that was used in the XPlatformer project.  All the examples make use of the XLib API (XOrg) and focus on code that was developed in the XPlatformer project (or planned to be used).  The point of the examples is to demonstrate techniques used by the XPlatform project.
		 
##### Description
The following is a sample that shows basic input using the helper files created for use in the XPlatformer project.  In this sample the `KeyboardState` and `MouseState` classes are used to receive input from media devices.  These functions act as state objects that are updated based on the XLib event system.  `XInfo` wraps the various input handling methods and automatically updates the device states.  The sample specifically shows how to recognize keyboard input, and retrieve current mouse positions.

##### Compile Instructions

To make ("compile and link") an example, use the included makefile with 
the name of cpp file passed as a variable. For example, to make Input.cpp:

	make NAME="null"

Then, to run:

	./null

Or you can even do it one step:

	make run NAME="Input"

    ./Input     Demos basic keyboard and mouse input systems.