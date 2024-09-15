#ifndef Y0_MATH_INCLUDE_Y0_MATH_QUATERNION_QUATERNION_H
#define Y0_MATH_INCLUDE_Y0_MATH_QUATERNION_QUATERNION_H

namespace y0_math {
  namespace quaternion {
    template<typename T>
      struct Quaternion<T, typename std::enable_if<std::is_arithmetic<T>::value>::type> {
      };
  } // namespace quaternion
} // namespace y0_math

#endif
