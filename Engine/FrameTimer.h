#pragma once

#include <chrono>

class FrameTimer
{
public:
	FrameTimer();
	float GetDurationBetweenEachFrame();
private:
	std::chrono::steady_clock::time_point last;
	std::chrono::duration<float> frametime;
};
