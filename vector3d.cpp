#include "pch.h"
#include "vector3d.h"

using namespace curves;

Vector3d::Vector3d()
	: m_x(0.0), m_y(0.0), m_z(0.0) {}

Vector3d::Vector3d(double x, double y, double z)
	: m_x(x), m_y(y), m_z(z) {}

double Vector3d::getX() const {
	return m_x;
}

double Vector3d::getY() const {
	return m_y;
}

double Vector3d::getZ() const {
	return m_z;
}

void Vector3d::setX(double x) {
	m_x = x;
}

void Vector3d::setY(double y) {
	m_y = y;
}

void Vector3d::setZ(double z) {
	m_z = z;
}
