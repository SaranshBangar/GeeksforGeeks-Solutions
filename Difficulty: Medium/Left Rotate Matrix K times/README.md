<h2><a href="https://www.geeksforgeeks.org/problems/left-rotate-matrix-k-times2351/1">Left Rotate Matrix K times</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given an integer <strong>k </strong>and<strong> </strong>matrix&nbsp;<strong>mat.&nbsp;</strong>Rotate the elements of the given matrix to the left <strong>k</strong> times and return the resulting matrix.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>k=1, mat=[[1,2,3],[4,5,6],[7,8,9]]
<strong>Output:<br></strong>2 3 1<br>5 6 4
8 9 7
<strong>Explanation: </strong>Rotate the matrix by one<br>1 2 3       2 3 1<br>4 5 6  =&gt;  5 6 4<br></span><span style="font-size: 14pt;">7 8 9       8 9 7</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>k=2, mat=[[1,2,3],[4,5,6],[7,8,9]]
<strong>Output:</strong>
3 1 2
6 4 5
9 7 8
<strong>Explanation:<span style="font-size: 14pt;"> </span></strong><span style="font-size: 14pt;">After rotating the matrix looks like<br>1 2 3       2 3 1       3 1 2<br>4 5 6  =&gt;  5 6 4  =&gt;   6 4 5<br></span></span><span style="font-size: 14pt;">7 8 9       8 9 7       9 7 8</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n*m)<br><strong>Expected Auxillary Space: </strong>O(n*m)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;= mat.size, mat[0].size, mat[i][j] &lt;=1000<br>1&lt;=k&lt;=10000</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Modular Arithmetic</code>&nbsp;<code>Algorithms</code>&nbsp;