int mySqrt(int x) {//binart search
    if(x<2) return x;
    int left = 1, right = x;
    int ans = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid <= x / mid) {
            ans = mid;        
            left = mid + 1;   // 嘗試更大
        } else {
            right = mid - 1;  // 太大，往左縮
        }
    }

    return ans;
}
