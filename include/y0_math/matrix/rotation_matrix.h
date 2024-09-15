#ifndef Y0_MATH_INCLUDE_Y0_MATH_MATRIX_ROTATION_MATRIX_H
#define Y0_MATH_INCLUDE_Y0_MATH_MATRIX_ROTATION_MATRIX_H

template<typename T>
struct RotationMatrix<T, typename std::enable_if<std::is_arithmetic<T>::value>::type> {
  public:
};

#endif
