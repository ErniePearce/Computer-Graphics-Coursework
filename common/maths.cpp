#include <common/maths.hpp>

float squared(float x)
{
	return x * x;
}

float length(const glm::vec3& v)
{
	float square = squared(v.x) + squared(v.y) + squared(v.z);
	return sqrt(square);
}