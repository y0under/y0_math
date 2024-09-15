#ifndef Y0_MATH_INCLUDE_Y0_MATH_EULER_ANGLES_EULER_ANGLES_H
#define Y0_MATH_INCLUDE_Y0_MATH_EULER_ANGLES_EULER_ANGLES_H

namespace y0_math {
  namespace euler_angles {
    template<typename T>
    struct EulerAngles<T, typename std::enable_if<std::is_arithmetic<T>::value>::type> {
      public:
    };
  } // namespace euler_angles
} // namespace y0_math

#endif
