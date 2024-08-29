<h2><a href="https://www.geeksforgeeks.org/problems/maximum-sub-array5443/1">Maximum Sub Array</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Find out the maximum sub-array of non negative numbers from an array.</span></p>
<p><span style="font-size: 18px;">The <strong>sub-array should be contiguous</strong> i.e., a sub-array created by choosing the second and fourth element and skipping the third element is invalid.</span></p>
<p><span style="font-size: 18px;">Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Sub-array <strong>A</strong> is greater than sub-array <strong>B</strong> if <strong>sum(A) &gt; sum(B)</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example:</strong><br>a = [1, 2, 5, -7, 2, 3]<br>The two sub-arrays are [1, 2, 5] [2, 3].<br>The answer is [1, 2, 5] as its sum is larger than [2, 3]</span></p>
<p><span style="font-size: 18px;"><strong>NOTE:</strong> If there is a tie, then compare with segment's length and return segment which has maximum length.<br>If there is still a tie, then return the segment with minimum starting index.<br>If no such subarray is present return "<strong>-1</strong>"</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 3
a[] = {1, 2, 3}
<strong>Output:</strong> 1 2 3
<strong>Explanation:</strong> In the given array every
element is non-negative.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 2
a[] = {-1, 2}
<strong>Output:</strong> 2
<strong>Explanation:</strong>&nbsp;The only subarray [2] is
the answer.<br><br></span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10<sup>5</sup><br>-10<sup>5&nbsp;</sup>≤ A[i] ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Intuit</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Divide and Conquer</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;