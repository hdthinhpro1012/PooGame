#include "FrameTimer.h"

using namespace std::chrono;

FrameTimer::FrameTimer()
{
	last = steady_clock::now();
}

float FrameTimer::GetDurationBetweenEachFrame()
{
	frametime = steady_clock::now() - last;
	last = steady_clock::now();
	return frametime.count();
}
