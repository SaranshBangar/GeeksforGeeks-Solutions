<h2><a href="https://www.geeksforgeeks.org/problems/subset-sum-problem2014/1">Partition Equal Subset Sum</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array&nbsp;<strong>arr[]</strong> of size&nbsp;<strong>N</strong>, check if&nbsp;it can be partitioned into two parts such that the sum of elements in both parts&nbsp;is the same.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> N = 4
arr = {1, 5, 11, 5}
<strong>Output:</strong> YES
<strong>Explanation:</strong> 
The two parts are {1, 5, 5} and {11}.</span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> N = 3
arr = {1, 3, 5}
<strong>Output:</strong> NO
<strong>Explanation: </strong>This array can never be 
partitioned into two such parts.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>equalPartition()</strong> which takes the value N and the array as input parameters and returns 1 if the partition is possible. Otherwise, returns 0.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N*sum of elements)<br><strong>Expected Auxiliary Space:</strong> O(sum of elements)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 100<br>1 ≤ arr[i] ≤ 1000<br>N*sum of elements&nbsp;≤ 5*10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Adobe</code>&nbsp;<code>Drishti-Soft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>subset</code>&nbsp;<code>Algorithms</code>&nbsp;