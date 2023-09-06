#pragma once
#include "vector3d.h"

namespace curves {
	class CURVESDLL_API Curve {
	public:
		Curve() = default;
		virtual ~Curve() = default;

		virtual const Vector3d getDerivative(const double& t) const = 0;
		virtual const Vector3d getPoint(const double& t) const = 0;
	};
}