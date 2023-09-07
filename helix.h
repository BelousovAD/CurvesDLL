#pragma once
#include "curve.h"

namespace curves {
	class CURVESDLL_API Helix : public Curve
	{
	public:
		Helix(const double& radius,
			const double& step);
		~Helix() = default;

		Vector3d getDerivative(const double& t) const override;
		Vector3d getPoint(const double& t) const override;
		double getRadius() const;
		double getStep() const;

	private:
		double m_radius;
		double m_step;
	};
}