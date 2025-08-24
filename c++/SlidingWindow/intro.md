# Sliding Window Technique

The **sliding window technique** is a powerful method used to optimize problems involving arrays or strings, especially when we need to compute results over subarrays or substrings.

There are two main types:

---

## 1. Fixed Size Sliding Window

**Steps:**

1. Find the size of the window required, say `K`.  
2. Compute the result for the **first window**, i.e., include the first `K` elements of the data structure.  
3. Use a loop to **slide the window** by 1 and keep computing the result window by window.

**Example (Maximum Sum Subarray of Size K):**

```r
arr <- c(2, 1, 5, 1, 3, 2)
k <- 3
n <- length(arr)

# Compute sum of first window
window_sum <- sum(arr[1:k])
max_sum <- window_sum

# Slide the window
for (i in (k+1):n) {
  window_sum <- window_sum - arr[i-k] + arr[i]
  max_sum <- max(max_sum, window_sum)
}

max_sum
