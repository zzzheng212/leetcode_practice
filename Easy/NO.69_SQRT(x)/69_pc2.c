int left = 1, right = x;//用二分搜尋
    int ans = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid <= x / mid) {
            ans = mid;        // 記錄目前可行解
            left = mid + 1;   // 嘗試更大
        } else {
            right = mid - 1;  // 太大，往左縮
        }
    }

    return ans;
}
