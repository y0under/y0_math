#ifndef Y0_MATH_INCLUDE_Y0_MATH_MATH_MATH_UTIL_H
#define Y0_ENGINE_INCLUDE_Y0_CORE_MATH_MATH_H

#include <algorithm>
#include <cmath>

namespace y0_math {
  namespace math {
    class MathUtil {
      public:
        static constexpr double pi = 3.141592653589793;

        static float Max(const float &first, const float &second) {
          return std::max(first, second);
        }

        template<typename T>
          static std::enable_if<std::is_arithmetic<T>::value, T>::type
          Sqrt(const T &val) {
            return std::sqrt(val);
          }

        static float Cos(const float &rad) {
          return std::cos(rad);
        }

        static float Sin(const float &rad) {
          return std::sin(rad);
        }
    };
  } // namespace math
}  // namespace y0_engine

#endif
