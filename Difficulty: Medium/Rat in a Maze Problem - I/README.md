<h2><a href="https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1">Rat in a Maze Problem - I</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Consider a rat placed at <strong>(0, 0)</strong> in a square matrix <strong>mat </strong>of order <strong>n* n</strong>. It has to reach the destination at <strong>(n - 1, n - 1)</strong>. Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are <strong>'U'(up)</strong>, <strong>'D'(down)</strong>, <strong>'L' (left)</strong>, <strong>'R' (right)</strong>. Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that&nbsp;rat&nbsp;can be travel&nbsp;through it.<br><strong>Note</strong>: In a path, no cell can be visited more than one time.</span>&nbsp;<span style="font-size: 18px;">If the source cell is 0, the rat cannot move to any other cell. </span><span style="font-size: 18px;">In case of no path, return an empty list. The driver will output </span><strong style="font-size: 18px;">"-1"</strong><span style="font-size: 18px;"> automatically.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: mat[][] = [[1, 0, 0, 0],
                [1, 1, 0, 1], 
                [1, 1, 0, 0],
                [0, 1, 1, 1]]
<strong>Output: </strong>DDRDRR DRDDRR</span>
<span style="font-size: 18px;"><strong>Explanation</strong>: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: mat[][] = [[1, 0],
                [1, 0]]
<strong>Output: </strong>-1</span>
<span style="font-size: 18px;"><strong>Explanation</strong>: No path exists and destination cell is blocked.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(3<sup>n</sup><sup>^2</sup>)<br><strong>Expected Auxiliary Space:</strong> O(l * x)<br></span><span style="font-size: 18px;">Here l = length of the path, x = number of paths.</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 ≤ n ≤ 5<br>0 ≤ mat[i][j] ≤ 1</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Backtracking</code>&nbsp;<code>Algorithms</code>&nbsp;