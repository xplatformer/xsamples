# XSamples #
##### Language: C/C++
***
#### Abstract
Provided as a collection of samples for an assignment for a user interfaces course.  The purpose of these samples was to provide simple code that could be used to understand the *X Windows System*.  The samples included in this repository are example of coding tasks developed / expanded in the XPlatformer repository.  XSamples demonstrates how to use a variety of XPlatformer code to interact with XWindows.

Specifically the collection provides examples of: Animation, Sprites, Image Loading & Drawing, and Basic Input.

***
#### Summary

XSamples provides a collection of *XWindows* starter code that was used in the XPlatformer project.  All the examples make use of the XLib API (XOrg) and focus on code that was developed in the XPlatformer project (or planned to be used).  The point of the examples is to demonstrate techniques used by the XPlatform project.

##### Features Illustrated

* Basic Operations
* Event-Draw Tasks
* Bitmaps
* Animation (Sprite-Based)
* Window Management
* Clipmasks
* Input Management
		 
##### Description
Outline:  The assignment is broken into a series of different files which are used to control certian game components and offer utility above the existing XLib API.  A folder called `References` contains the framework used in the development of XPlatformer.  Each folder is the repository contains sample code, readme and makefile.  The project was built and tested on Ubuntu based operating systems (Ubuntu/Lubuntu).


##### Examples


	null.cpp        	A test to verify if the XWindow system is working.

    XWindow.cpp         Opens a single blank window using the 
						XPlatformer framework.

	Input.cpp			Demos basic keyboard and mouse input systems.

    Drawing.cpp     	Demos drawing functions and graphics contexts.

    Clipping.cpp        Demos clipping using a spritesheet.

	Sprites.cpp			Demos using sprite drawing functions.

	Animation.cpp   	Demos basic animation using the framework.

---

##### Compile Instructions

To make ("compile and link") an example, use the included makefile with 
the name of cpp file passed as a variable. For example, to make null.cpp:

	make NAME="null"

Then, to run:

	./null

Or you can even do it one step:

	make run NAME="null"

## Acknowledgements

The project icon is retrieved from [kenney.nl](docs/icon/icon.json). The original source material has been altered for the purposes of the project. The icon is used under the terms of the [CC0 1.0 Universal](https://creativecommons.org/publicdomain/zero/1.0/).

The project icon uses assets by [Kenney from kenney.nl/](http://kenney.nl/assets/platformer-art-deluxe).