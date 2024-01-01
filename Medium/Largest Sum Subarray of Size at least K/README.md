<h2><a href="https://www.geeksforgeeks.org/problems/largest-sum-subarray-of-size-at-least-k3121/1">Largest Sum Subarray of Size at least K</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>a</strong> of length <strong>n </strong>and a number <strong>k</strong>, find the <strong>largest sum </strong>of the subarray containing <strong>at least k </strong>numbers. It is guaranteed that the size of array is <strong>at-least k</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input : 
</strong>n = 4
a[] = {-4, -2, 1, -3}
k = 2
<strong>Output : </strong>
-1
<strong>Explanation :</strong>
The sub-array of length at-least 2<br></span><span style="font-size: 18px;">that produces greatest sum is {-2, 1}</span></pre>
<div><span style="font-size: 18px;"><strong>Example 2:</strong></span></div>
<pre><span style="font-size: 18px;"><strong>Input :
</strong>n = 6<strong> </strong>
a[] = {1, 1, 1, 1, 1, 1}
k = 2
<strong>Output : </strong>
6
<strong>Explanation :</strong></span></pre>
<pre>The sub-array of length at-least 2<br>that produces greatest sum is {1, 1, 1, 1, 1, 1}</pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>maxSumWithK()</strong>&nbsp;which takes the array <strong>a[]</strong>, its size <strong>n </strong>and an integer <strong>k </strong>as inputs and returns the value of the <strong>largest sum </strong>of the subarray containing <strong>at least k </strong>numbers.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><br>-10<sup>5 </sup>&lt;= a[i] &lt;= 10<sup>5</sup><br>1 &lt;= k &lt;= n</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Facebook</code>&nbsp;<code>Paytm</code>&nbsp;<code>Myntra</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Arrays</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;