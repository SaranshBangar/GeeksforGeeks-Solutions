<h2><a href="https://www.geeksforgeeks.org/problems/exit-point-in-a-matrix0905/1?timeMachineDate=2024-04-26">Exit Point in a Matrix</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a <strong>matrix</strong> of size <strong>n x m</strong> with <strong>0’s</strong> and <strong>1’s</strong>, you enter the matrix at cell <strong>(0,0)</strong> in <strong>left to right</strong> direction. Whenever you encounter a <strong>0</strong> you retain it in the <strong>same</strong> <strong>direction</strong>, else if you encounter a <strong>1</strong> you have to <strong>change</strong> the direction<strong> </strong>to the <strong>right </strong>of the current direction and <strong>change that 1</strong> value to <strong>0</strong>, you have to find out from which index you will <strong>leave </strong>the matrix<strong> </strong>at the end.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: <br></strong>n = 3, m = 3<strong><br></strong>matrix = {{0, 1, 0},
          {0, 1, 1}, <br>          {0, 0, 0}}
<strong>Output: <br></strong>{1, 0}
<strong>Explanation: <br></strong>Enter the matrix at (0, 0) <br>-&gt; then move towards (0, 1) -&gt;  1 is encountered <br>-&gt; turn right towards (1, 1)  -&gt; again 1 is encountered <br>-&gt; turn right again towards (1, 0) <br>-&gt; now, the boundary of matrix will be crossed -&gt;hence, exit point reached at 1, 0..</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: <br></strong>n = 1, m = 2<strong><br></strong>matrix = {{0, 0}}
<strong>Output: <br></strong>{0, 1}<br><strong>Explanation: <br></strong>Enter the matrix at cell (0, 0).
Since the cell contains a 0, we continue moving in the same direction.
We reach cell (0, 1), which also contains a 0. So, we continue moving in the same direction, we exit the matrix from cell (0, 1).<br></span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>FindExitPoint()&nbsp;</strong>which takes the <strong>matrix</strong> as an input parameter and returns a <strong>list</strong> containing the <strong>exit point.</strong></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n * m) where n = number of rows and m = number of columns.<br><strong>Expected Space Complexity:&nbsp;</strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n, m &lt;= 100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Samsung</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;