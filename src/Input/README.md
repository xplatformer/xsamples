# XSamples: Input

## Summary

The following is a sample that shows basic input using the helper files created for use in the XPlatformer project.  In this sample the `KeyboardState` and `MouseState` classes are used to receive input from media devices.  These functions act as state objects that are updated based on the XLib event system.  `XInfo` wraps the various input handling methods and automatically updates the device states.  The sample specifically shows how to recognize keyboard input, and retrieve current mouse positions.

## Getting started

To make ("compile and link") an example, use the included makefile with the name of cpp file passed as a variable. You can do this with the following command:

Then you can run the following:

```bash
make
```

Then, to run:

```bash
make run
```