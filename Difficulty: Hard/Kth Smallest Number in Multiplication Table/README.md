<h2><a href="https://www.geeksforgeeks.org/problems/kth-smallest-number-in-multiplication-table/1">Kth Smallest Number in Multiplication Table</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given three integers <strong>m, n </strong>and<strong> k</strong>. Consider a grid of <strong>m * n</strong>, where <strong>mat[i][j] = i * j</strong> (1 based index). The task is to return the <strong>k<sup>th</sup></strong> smallest element in the <strong>m * n</strong>&nbsp;multiplication table.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: m</strong> = 3, n = 3, k = 5
<strong>Output: </strong>3
<strong>Explanation:</strong> 
<img style="height: 204px; width: 400px;" src="https://media.geeksforgeeks.org/img-practice/multtable1-grid-1637617528.jpg" alt="">
The 5<sup>th</sup> smallest element is 3.&nbsp;
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>m = 2, n = 3, k = 6
<strong>Output: </strong>6&nbsp;<br><strong>Explanation: </strong></span><span style="font-size: 14pt;">[1, 2, 3][2, 4, 6]. The 6th smallest element is 6</span>.</pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= m, n &lt;= 3 * 10<sup>4</sup><br>1 &lt;= k &lt;= m * n</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search</code>&nbsp;<code>Algorithms</code>&nbsp;