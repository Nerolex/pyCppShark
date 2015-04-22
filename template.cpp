template <typename T>
T max(T x, T y)
{
  T value;
  if (x < y)
    value = y;
  else
    value = x;
  return value;
}