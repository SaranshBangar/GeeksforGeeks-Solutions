<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays2305/1">Sum of Middle elements of two sorted arrays</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given 2 sorted integer arrays <strong>arr1</strong> and <strong>arr2 </strong>of the same size. Find the <strong>sum </strong>of the<strong> middle </strong>elements of two sorted arrays arr1 and arr2.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr1 = [1, 2, 4, 6, 10], arr2 = [4, 5, 6, 9, 12]
<strong>Output:</strong> 11
<strong>Explanation:</strong> The merged array looks like [1, 2, 4, 4, <strong>5, 6, </strong>6, 9, 10, 12]. Sum of middle elements is 11 (5 + 6).
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr1 = [1, 12, 15, 26, 38], arr2 = [2, 13, 17, 30, 45]
<strong>Output:</strong> 32
<strong>Explanation:</strong> The merged array looks like [1, 2, 12, 13, <strong>15, 17,</strong> 26, 30, 38, 45]. Sum of middle elements is 32 (15 + 17).</span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(log n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= arr1.size() == arr2.size() &lt;= 10<sup>3</sup><br>1 &lt;= arr1[i] &lt;= 10<sup>6</sup><br>1 &lt;= arr2[i] &lt;= 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>D-E-Shaw</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Divide and Conquer</code>&nbsp;<code>Binary Search</code>&nbsp;