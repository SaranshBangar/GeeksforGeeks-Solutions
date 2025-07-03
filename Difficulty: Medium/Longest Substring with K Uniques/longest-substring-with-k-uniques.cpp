class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n = s.length();
        
        // Edge case: if k is 0 or string is empty
        if (k == 0 || n == 0) return -1;
        
        // Hash map to store character frequencies in current window
        unordered_map<char, int> charCount;
        
        int left = 0;           // Left pointer of sliding window
        int maxLength = -1;     // Maximum length found so far
        
        // Right pointer expands the window
        for (int right = 0; right < n; right++) {
            // Add current character to our window
            charCount[s[right]]++;
            
            // If we have more than k unique characters, shrink window from left
            while (charCount.size() > k) {
                charCount[s[left]]--;
                
                // If character count becomes 0, remove it from map
                if (charCount[s[left]] == 0) {
                    charCount.erase(s[left]);
                }
                left++;
            }
            
            // If we have exactly k unique characters, update max length
            if (charCount.size() == k) {
                maxLength = max(maxLength, right - left + 1);
            }
        }
        
        return maxLength;
    }
};