#include "pch.h"
#include "ellipse.h"
#include <stdexcept>

using namespace curves;

Ellipse::Ellipse(const double& radiusX, const double& radiusY) {
	if (radiusX > 0 && radiusY > 0) {
		m_radiusX = radiusX;
		m_radiusY = radiusY;
	}
	else {
		throw std::invalid_argument("Ellipse: invalid argument - radius must be positive");
	}
}

Vector3d Ellipse::getDerivative(const double& t) const {
	return Vector3d(-m_radiusX * sin(t), m_radiusY * cos(t), 0);
}

Vector3d Ellipse::getPoint(const double& t) const {
	return Vector3d(m_radiusX * cos(t), m_radiusY * sin(t), 0);
}

double Ellipse::getRadiusX() const
{
	return m_radiusX;
}

double Ellipse::getRadiusY() const
{
	return m_radiusY;
}
