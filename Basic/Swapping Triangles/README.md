<h2><a href="https://www.geeksforgeeks.org/problems/swapping-triangles5209/1?page=4&difficulty=Basic,Easy,Medium&status=unsolved&sortBy=accuracy">Swapping Triangles</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an integer N and a matrix A of dimensions NxN.Swap the values of the triangle above the primary&nbsp;diagonal with the values of the triangle below the primary diagonal.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=3
A=[[1,2,3],[4,5,6],[7,8,9]]
<strong>Output:</strong>
1 4 7
2 5 8
3 6 9
<strong>Explanation:</strong>
Swapping the upper triangle with the
 lower triangle gives this result.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=4
A=[[2,7,3,1],[10,1,5,1],[10,4,7,6],[6,9,1,8]]
<strong>Output:</strong>
2 10 10 6 
7 1 4 9 
3 5 7 1 
1 1 6 8
<strong>Explanation:</strong>
Swapping upper triangle with the
lower triangle leads to this result.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>swapTriangle()</strong> which takes the integer N and matrix A as input parameters and returns a matrix with the upper and lower triangles swapped.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(N<sup>2</sup>)<br>
<strong>Expected Auxillary Space:</strong>O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N,A[i][j]&lt;=1000, for 0&lt;=i &nbsp;</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;