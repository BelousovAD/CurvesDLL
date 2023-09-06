#pragma once
#ifdef CURVESDLL_EXPORTS
#define CURVESDLL_API __declspec(dllexport)
#else
#define	CURVESDLL_API __declspec(dllimport)
#endif // CURVESDLL_EXPORTS

namespace curves {
	class CURVESDLL_API Vector3d {
	public:
		Vector3d();
		~Vector3d() = default;

		Vector3d(double x, double y, double z);
		const double getX() const;
		const double getY() const;
		const double getZ() const;
		void setX(double x);
		void setY(double y);
		void setZ(double z);
	private:
		double m_x;
		double m_y;
		double m_z;
	};
}
