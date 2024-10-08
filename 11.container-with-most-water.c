
int maxArea(int *height, int heightSize) {
  int l = 0;
  int r = heightSize - 1;
  int maxArea = 0;
  while (l < r) {
    int currentArea = (r - l) * (height[l] < height[r] ? height[l] : height[r]);
		if (currentArea > maxArea) maxArea = currentArea;
    height[l] < height[r] ? l++ : r--;
  }
  return maxArea;
}
