int bin_s(int s, int e, int x) {
  if (s > e) return e;
  int mid = (s + e) / 2;
  long long res = (long long)mid * mid;
  
  if (res < x) return bin_s(mid + 1, e, x);
  else if (res > x) return bin_s(s, mid - 1, x);
  
  return mid;
}

int mySqrt(int x) {
  return bin_s(0, x, x);
}
