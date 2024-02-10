<h2><a href="https://www.geeksforgeeks.org/problems/number-of-paths-in-a-matrix-with-k-coins2728/1">Number of paths in a matrix with k coins</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a <strong>n x n</strong>&nbsp;matrix such that&nbsp;each of its&nbsp;cells contains some&nbsp;coins. Count the number of ways to collect <strong>exactly k coins</strong> while moving from&nbsp;top left corner of the matrix&nbsp;to the&nbsp;bottom right. From a cell (i, j), you can only move to (i+1, j) or (i, j+1).</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong>:
k = 12, n = 3
arr[] = [[1, 2, 3], 
&nbsp;      [4, 6, 5], 
&nbsp;      [3, 2, 1]]
<strong>Output:</strong>&nbsp;<br>2
<strong>Explanation</strong>: 
There are 2 possible paths with exactly 12 coins, (1 + 2 + 6 + 2 + 1) and (1 + 2 + 3 + 5 + 1).
</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong>
k = 16, n = 3
arr[] = [[1, 2, 3],&nbsp;
&nbsp;      [4, 6, 5],&nbsp;
&nbsp;      [9, 8, 7]]
<strong>Output: <br></strong>0 
<strong>Explanation: </strong>
There are no possible paths that lead to sum=16
</span></pre>
<p><span style="font-size: 14pt;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>numberOfPath()</strong> which takes n, k and 2D matrix arr[][] as input parameters and returns the number of possible paths.</span><br><br><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(n*n*k)<br><strong>Expected Auxiliary Space:</strong> O(n*n*k)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong></span></p>
<p><span style="font-size: 14pt;">1 &lt;= k &lt; 100<br>1 &lt;= n &lt; 100<br>0 &lt;= arr<sub>ij</sub> &lt;= 200</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Recursion</code>&nbsp;<code>Matrix</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;