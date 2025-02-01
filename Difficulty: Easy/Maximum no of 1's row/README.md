<h2><a href="https://www.geeksforgeeks.org/problems/maximum-no-of-1s-row3027/1?page=6&difficulty=Basic,Easy&status=unsolved&sortBy=submissions">Maximum no of 1's row</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3, M = 4
Mat[] = {{0 1 1 1},
         {0 0 1 1},
&nbsp;        {0 0 1 1}}
<strong>Output:</strong> 0
<strong>Explanation</strong>: Row 0 has 3 ones whereas
rows 1 and 2 have just 2 ones.
</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 2, M = 2
Mat[] = {{0 1},
&nbsp;        {1 1}}
<strong>Output:</strong> 1
<strong>Explanation</strong>: Row 1 has 2 ones whereas
row 0 has just a single one. </span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>maxOnes ()&nbsp;</strong>which takes a 2D array Mat[][] and its dimensions N&nbsp;and M&nbsp;as inputs and returns the row index with the maximum number of 1s (0-based index). If there are multiple rows with the maximum number of ones, then return the row with the smaller index.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(NLogM).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N, M &lt;= 40<br>
0 &lt;= M[ ][ ] &lt;= 1</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Microsoft</code>&nbsp;<code>24*7 Innovation Labs</code>&nbsp;<code>D-E-Shaw</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Searching</code>&nbsp;<code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;