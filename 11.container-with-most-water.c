// @leet start
int max(int a, int b) {
  if (a < b) {
    return b;
  }
  return a;
}
int min(int a, int b) {
  if (a < b) {
    return a;
  }
  return b;
}

int maxArea(int *height, int heightSize) {
	int l=0;
	int r=heightSize-1;
	int answer =0;
	while (l<r ) {
		answer = max(answer, (r-l)*min(height[l], height[r]));
		if (height[l]<height[r]) {
			l++;
		}else {
			r--;
		}

	}
	return answer;
}

// @leet end
