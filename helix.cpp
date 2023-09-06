#include "pch.h"
#define _USE_MATH_DEFINES
#include "helix.h"
#include <stdexcept>

using namespace curves;

Helix::Helix(const double& radius, const double& step)
	: m_step(step) {
	if (radius > 0) {
		m_radius = radius;
	}
	else {
		throw std::invalid_argument("Helix: invalid argument - radius must be positive");
	}
}

const Vector3d Helix::getDerivative(const double& t) const {
	return Vector3d(-m_radius * sin(t), m_radius * cos(t), m_step / (2 * M_PI));
}

const Vector3d Helix::getPoint(const double& t) const
{
	return Vector3d(m_radius * cos(t), m_radius * sin(t), t * m_step / (2 * M_PI));
}

const double Helix::getRadius() const
{
	return m_radius;
}

const double Helix::getStep() const
{
	return m_step;
}
