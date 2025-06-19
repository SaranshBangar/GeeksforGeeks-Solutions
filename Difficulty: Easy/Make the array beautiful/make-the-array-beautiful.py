#User function Template for python3

from typing import List

class Solution:
    def makeBeautiful(self, arr: List[int]) -> List[int]:
        i = 0
        while i < len(arr) - 1:
            if (arr[i] >= 0 and arr[i + 1] < 0) or (arr[i] < 0 and arr[i + 1] >= 0):
                arr.pop(i)
                arr.pop(i)
                i = max(i - 1, 0)
            else:
                i += 1
        return arr