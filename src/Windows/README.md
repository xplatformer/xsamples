# XSamples: XWindow #
##### X Windows and XLib
***
#### Summary

XSamples provides a collection of *XWindows* starter code that was used in the XPlatformer project.  All the examples make use of the XLib API (X11) and focus on techniques that were used in the XPlatformer (or planned to be used).  The point of the examples is to demonstrate techniques used by the XPlatform project.

##### Description
The following is a sample that shows the basic process of opening a window using the helper files created for use in the XPlatformer project.  This sample is used for the purpose of showing how the `XInfo` class is used to control various XWindows commands.  XInfo acts as a wrapper for a variety of commonly used functions within XLib.   Additionally the sample can be used to test if XLib is properly installed, and that all XPlatformer code is properly compiling.

##### Compile Instructions

To make ("compile and link") an example, use the included makefile with
the name of cpp file passed as a variable. For example, to make null.cpp:

	make NAME="null"

Then, to run:

	./null

Or you can do it with ``make`` as the name variable is already assigned to ``OpenWindow``.

	make run NAME="XWindow"

    ./XWindow     Opens a single blank window
