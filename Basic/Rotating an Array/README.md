<h2><a href="https://www.geeksforgeeks.org/problems/reversal-algorithm5340/1?page=3&difficulty=School,Basic,Easy&status=unsolved&sortBy=submissions">Rotating an Array</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array of size <strong>n</strong>. The task is to rotate array by <strong>d</strong> elements where <strong>d&nbsp;</strong></span><strong><span style="font-size: 18px;">≤</span><span style="font-size: 18px;"> n.</span></strong></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 7
arr[] = {-1, -2, -3, 4, 5, 6, 7}
d = 2
<strong>Output:</strong> {-3, 4, 5, 6, 7, -1, -2}
<strong>Explanation:</strong> 
Rotate by 1: [-2, -3, 4, 5, 6, 7, -1]
Rotate by 2: [-3, 4, 5, 6, 7, -1, -2]</span>
</pre>
<p><br><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 4
arr[] = {1, 3, 4, 2}
d = 3
<strong>Output:</strong> {2, 1, 3, 4}

</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>leftRotate()</strong>&nbsp;which takes the array of integers&nbsp;<strong>arr[], </strong>its size&nbsp;<strong>n</strong>&nbsp;and&nbsp;<strong>d&nbsp;</strong>as input parameters and rotates&nbsp;arr[] <strong>in-place</strong> without using any extra memory.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>6</sup><br>-10<sup>9</sup> ≤ arr[i] ≤ 10<sup>9</sup><br>0 ≤ d ≤ n</span></p>
<p>&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Codenation</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;