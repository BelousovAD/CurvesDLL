#pragma once
#include "curve.h"

namespace curves {
	class CURVESDLL_API Circle : public Curve
	{
	public:
		Circle(const double& radius);
		~Circle() = default;

		Vector3d getDerivative(const double& t) const override;
		Vector3d getPoint(const double& t) const override;
		double getRadius() const;

	private:
		double m_radius;
	};
}