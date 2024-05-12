<h2><a href="https://www.geeksforgeeks.org/problems/identical-matrices1042/1?page=1&difficulty=School&status=unsolved&sortBy=accuracy">Identical Matrices</a></h2><h3>Difficulty Level : School</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two square matrices Grid1 and Grid2 with the same dimensions(NxN).Check whether they are identical or not.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=2
Grid1=[[1,2],[3,4]]
Grid2=[[1,2],[3,4]]
<strong>Output:</strong>
1
<strong>Explanation:</strong>
Both the matrices are identical,
so the answer is 1.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=2
Grid1=[[1,2][3,4]]
Grid2=[[1,2][3,2]]
<strong>Output:</strong>
0
<strong>Explanation:</strong>
Both the matrices are not identical,
So, answer is 0.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.Your task is to complete the function <strong>areMatricesIdentical()</strong> which takes the integer N and two 2D arrays Grid1 and Grid2 as input parameters and returns 1 if the matrices are identical.Otherwise,it returns 0.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(N<sup>2</sup>)<br>
<strong>Expected Auxillary Space:</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=1000<br>
-1000&lt;=Grid1[i][j],Grid2[i][j]&lt;=1000,for 0&lt;=i,j</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;