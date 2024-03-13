<h2><a href="https://www.geeksforgeeks.org/problems/print-matrix-in-diagonal-pattern/1">Print matrix in diagonal pattern</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a square matrix <strong>mat[][]</strong> of <strong>n*n</strong> size, the task is to determine the <strong>diagonal pattern</strong> which is a linear arrangement of the elements of the matrix as depicted in the following example:</span></p>
<p><span style="font-size: 18px;"><img style="height: 324px; width: 393px;" src="https://contribute.geeksforgeeks.org/wp-content/uploads/matrix-6.png" alt=""></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input:
</strong><span style="font-size: 18px;">n = 3
mat[][] = {{1, 2, 3},<br>           {4, 5, 6},<br>           {7, 8, 9}}
</span><strong style="font-size: 18px;">Output: {</strong><span style="font-size: 18px;">1, 2, 4, 7, 5, 3, 6, 8, 9}<br></span><strong style="font-size: 18px;">Explaination:<br></strong><span style="font-size: 18px;"><span style="font-size: 18px;">Starting from (0, 0): 1,
Move to the right to (0, 1): 2,
Move diagonally down to (1, 0): 4,
Move diagonally down to (2, 0): 7,<br>Move diagonally up to (1, 1): 5,
Move diagonally up to (0, 2): 3,
Move to the right to (1, 2): 6,
Move diagonally up to (2, 1): 8,
Move diagonally up to (2, 2): 9<br>There for the output is {1, 2, 4, 7, 5, 3, 6, 8, 9}.</span></span><span style="font-size: 18px;"><br></span></span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input:
</strong><span style="font-size: 18px;">n = 2
mat[][] = {{1, 2},<br>           {3, 4}}
</span><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">{1, 2, 3, 4}<br></span><strong style="font-size: 18px;">Explaination:</strong><span style="font-size: 18px;"><br>Starting from (0, 0): 1,
Move to the right to (0, 1): 2,
Move diagonally down to (1, 0): 3,
Move to the right to (1, 1): 4<br>There for the output is {1, 2, 3, 4}.</span></span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You only need to implement the given function&nbsp;<strong>matrixDiagonally()&nbsp;</strong>which takes a matrix <strong>mat[][]</strong> of size <strong>n*n</strong> as an input and returns a list of integers containing the matrix diagonally. Do not read input, instead use the arguments given in the function.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n*n).<br><strong>Expected Auxiliary Space:</strong> O(1).<br><strong>Constraints:</strong><br>1 &lt;= n &lt;= 100<br>-100 &lt;= elements of matrix &lt;= 100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;