#ifndef Y0_MATH_INCLUDE_Y0_MATH_MATH_MATH_UTIL_H
#define Y0_MATH_INCLUDE_Y0_MATH_MATH_MATH_UTIL_H

#include <algorithm>
#include <cmath>

namespace y0_math {
  namespace math {
    struct MathUtil {
      public:
        static constexpr double pi = 3.141592653589793;

        template<typename T>
          static float max(const T &first, const T &second) {
            return std::max(first, second);
          }

        template<typename T>
          static std::enable_if<std::is_arithmetic<T>::value, T>::type
          sqrt(const T &val) {
            return std::sqrt(val);
          }

        template<typename T>
          static std::enable_if<std::is_arithmetic<T>::value, T>::type
          cos(const T &rad) {
            return std::cos(rad);
          }

        template<typename T>
          static std::enable_if<std::is_arithmetic<T>::value, T>::type
          sin(const T &rad) {
            return std::sin(rad);
          }
    };
  } // namespace math
}  // namespace y0_engine

#endif
