#include <cmath>

#include "gtest/gtest.h"
#include "y0_math/math/math_util.h"

namespace y0_math {
  namespace math {
    TEST(math_util_test, max_test)
    {
      EXPECT_FLOAT_EQ(5.0f, y0_math::math::MathUtil::max(-3.0f, 5.0f));
    }

    TEST(math_util_test, sqrt_test)
    {
      EXPECT_FLOAT_EQ(4.0f, y0_math::math::MathUtil::sqrt(16.0f));
    }

    TEST(math_util_test, cos_test)
    {
      EXPECT_FLOAT_EQ(std::cos(0.3f), y0_math::math::MathUtil::cos(0.3f));
    }

    TEST(math_util_test, sin_test)
    {
      EXPECT_FLOAT_EQ(std::sin(0.3f), y0_math::math::MathUtil::sin(0.3f));
    }
  } // namespace math
} // namespace y0_math
