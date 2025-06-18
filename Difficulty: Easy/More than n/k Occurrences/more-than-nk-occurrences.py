class Solution:
    
    #Function to find all elements in array that appear more than n/k times.
    def countOccurence(self,arr, k):
        d = {}
        for num in arr:
            if num in d:
                d[num] += 1
            else:
                d[num] = 1
        ans = 0
        for num in d.keys():
            if d[num] > len(arr) / k:
                ans += 1
        return ans