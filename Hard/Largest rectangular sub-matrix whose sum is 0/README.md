<h2><a href="https://www.geeksforgeeks.org/problems/largest-rectangular-sub-matrix-whose-sum-is-0/1">Largest rectangular sub-matrix whose sum is 0</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a matrix&nbsp;<strong>mat</strong>[][] of size&nbsp;<strong>N</strong>&nbsp;x&nbsp;<strong>M.&nbsp;</strong>The task is to&nbsp;find the largest rectangular sub-matrix by area&nbsp;whose sum is 0.</span></p>
<p><span style="font-size: 18px;">If there are multiple solutions return the rectangle which starts from minimum column index. If you still have multiple solutions return the one starting from minimum row index. If you still have multiple solutions return the one having greatest row number.&nbsp;If no such matrix is present return a zero (0) size matrix.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>N = 3, M = 3
mat[][] =  1, 2, 3
          -3,-2,-1
           1, 7, 5</span>

<span style="font-size: 18px;"><strong>Output:</strong>  1, 2, 3
        -3,-2,-1</span>

<span style="font-size: 18px;"><strong>Explanation:</strong> This is the largest sub-matrix,
whose sum is 0.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> N = 4, M = 4
mat[][] = 9, 7, 16, 5
          1,-6,-7, 3
          1, 8, 7, 9
          7, -2, 0, 10</span>

<span style="font-size: 18px;"><strong> Output:</strong> -6,-7
          8, 7
         -2, 0 </span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. You just have to complete the function&nbsp;<strong>sumZeroMatrix()</strong>&nbsp;which takes a 2D matrix&nbsp;<strong>mat</strong>[][],&nbsp;its dimensions&nbsp;<strong>N</strong>&nbsp;and&nbsp;<strong>M</strong>&nbsp;as inputs and returns a largest sub-matrix, whose sum is 0.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong>: O(N*M*M).<br><strong>Expected Auxiliary Space</strong>:&nbsp;O(N*M).</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints</strong>:<br>1 &lt;= N, M &lt;= 100<br>-1000 &lt;= mat[][] &lt;= 1000</span><br>&nbsp;</p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>prefix-sum</code>&nbsp;<code>Hash</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;