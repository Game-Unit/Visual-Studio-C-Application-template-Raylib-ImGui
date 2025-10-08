#pragma once

namespace Core
{

	class Math
	{
	public:
		static int Clamp(int value, int minVal, int maxVal);
		static bool ClampConstraint(int value, int minVal, int maxVal);
	};

}