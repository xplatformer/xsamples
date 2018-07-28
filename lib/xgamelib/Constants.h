#ifndef _INCL_CONSTANTS
#define _INCL_CONSTANTS

/// Standard libraries
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <string>

/// Contains standard constants for the XPlatformer game and associated files.
namespace Constants
{
	/// Divisors for reducing time to miliseconds.
	static const float TIME_DIVISOR = 100.0f;

	/// The length of the keys count.
	static const int KEY_COUNT = 8;

	/// Number of states/animations available.
	static const int PLAYER_ANIMATION_COUNT = 7;

	/// The default FPS of the platformer game.
	static int DEFAULT_FPS = 30;

	/// The default horizontal velocity of the player present in the PlayerComponent.
	static int PLAYER_DEFAULT_SPEED = 3;

	/// The default vertical acceleration of the player present in the PlayerComponent.
	static float PLAYER_DEFAULT_JUMP = 3.0f;

	/// The default number of clouds present in the SkyComponent.
	static int SKY_DEFAULT_COUNT = 3;

	/// The default speed of clouds present in the SkyComponent.
	static float DEFAULT_SKY_SPEED = 3.0f;
}
#endif
