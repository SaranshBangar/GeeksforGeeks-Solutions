<h2><a href="https://www.geeksforgeeks.org/problems/total-count2415/1">Total count</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given an array<strong> arr[]</strong> of positive integers and a threshold value <strong>k</strong>. For each element in the array, divide it into the <strong>minimum </strong>number of small integers such that each divided integer is less than or equal to <strong>k</strong>. Compute the total number of these integer across all elements of the array.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>k = 3, arr[] = [5, 8, 10, 13]
<strong>Output:</strong> 14
<strong>Explanation:</strong> Each number can be expressed as sum of different numbers less than or equal to k as 5 (3 + 2), 8 (3 + 3 + 2), 10 (3 + 3 + 3 + 1), 13 (3 + 3 + 3 + 3 + 1). So, the sum of count of each element is (2+3+4+5)=14.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>k = 4, arr[] = [10, 2, 3, 4, 7]
<strong>Output:</strong> 8
<strong>Explanation:</strong> Each number can be expressed as sum of different numbers less than or equal to k as 10 (4 + 4 + 2), 2 (2), 3 (3), 4 (4) and 7 (4 + 3).So, the sum of count of each element is (3 + 1 + 1 + 1 + 2) = 8.
</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5</sup><br>0 ≤ arr[i] ≤ 10<sup>5</sup><br>1 ≤ k ≤&nbsp;</span><span style="font-size: 18px;">10</span><sup>5</sup></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Division</code>&nbsp;<code>Mathematical</code>&nbsp;