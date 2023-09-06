#include "pch.h"
#include "circle.h"
#include <stdexcept>

using namespace curves;

Circle::Circle(const double& radius) {
	if (radius > 0) {
		m_radius = radius;
	}
	else {
		throw std::invalid_argument("Circle: invalid argument - radius must be positive");
	}
}

const Vector3d Circle::getDerivative(const double &t) const {
	return Vector3d(-m_radius * sin(t), m_radius * cos(t), 0 );
}

const Vector3d Circle::getPoint(const double& t) const {
	return Vector3d(m_radius * cos(t), m_radius * sin(t), 0);
}

const double Circle::getRadius() const
{
	return m_radius;
}
