#pragma once

#include <iostream>
#include <cmath>
#include <glm/glm.hpp>
#include <glm/gtx/io.hpp>

//Maths class
class Maths
{
public:
	// Maths functions
	static float squared(float x);
	static float length(const glm::vec3& v);
	static float dot(const glm::vec3& a, glm::vec3& b);



	// Transformation matrices
	static glm::mat4 translate(const glm::vec3& v);
	static glm::mat4 scale(const glm::vec3& v);

	static float radians(float angle);
	static glm::mat4 rotate(const float& angle, glm::vec3 v);


};
