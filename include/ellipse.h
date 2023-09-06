#pragma once
#include "curve.h"

namespace curves {
	class CURVESDLL_API Ellipse : public Curve
	{
	public:
		Ellipse(const double& radiusX,
			const double& radiusY);
		~Ellipse() = default;

		const Vector3d getDerivative(const double& t) const override;
		const Vector3d getPoint(const double& t) const override;
		const double getRadiusX() const;
		const double getRadiusY() const;

	private:
		double m_radiusX;
		double m_radiusY;
	};
}