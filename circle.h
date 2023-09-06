#pragma once
#include "curve.h"

namespace curves {
	class CURVESDLL_API Circle : public Curve
	{
	public:
		Circle(const double& radius);
		~Circle() = default;

		const Vector3d getDerivative(const double& t) const override;
		const Vector3d getPoint(const double& t) const override;
		const double getRadius() const;

	private:
		double m_radius;
	};
}