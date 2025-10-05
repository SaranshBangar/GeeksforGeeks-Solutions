<h2><a href="https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1">Rat in a Maze</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Consider a rat placed at position (0, 0) in an <strong>n x n</strong> square matrix <code><strong>maze[][]</strong></code>. The rat's goal is to reach the destination at position (n-1, n-1). The rat can move in four possible directions:&nbsp;<strong>'U'(up)</strong>,&nbsp;<strong>'D'(down)</strong>,&nbsp;<strong>'L' (left)</strong>,&nbsp;<strong>'R' (right)</strong>.</span></p>
<p><span style="font-size: 14pt;">The matrix contains only two possible values:</span></p>
<ul>
<li><span style="font-size: 14pt;"><code>0</code>: A blocked cell through which the rat cannot travel.</span></li>
<li><span style="font-size: 14pt;"><code>1</code>: A free cell that the rat can pass through.</span></li>
</ul>
<p><span style="font-size: 14pt;"><span style="font-size: 14pt;">Your task is to find <strong>all possible paths</strong> the rat can take to reach the destination, starting from (0, 0) and ending at (n-1, n-1), under the condition that the rat cannot <strong>revisit</strong> any cell along the same path. Furthermore, the rat can only move to adjacent cells that are within the bounds of the matrix and not blocked.</span><br><span style="font-size: 18.6667px;"><span style="font-size: 18.6667px;">If no path exists, return an <strong>empty list</strong></span><strong style="font-size: 18.6667px;">.</strong></span></span></p>
<p><span style="font-size: 14pt;"><strong>Note:</strong> Return the final result vector in <strong>lexicographically smallest order</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: maze[][] = [[1, 0, 0, 0], [1, 1, 0, 1], [1, 1, 0, 0], [0, 1, 1, 1]]
<strong>Output: </strong>[<span class="hljs-string">"DDRDRR"</span>, <span class="hljs-string">"DRDDRR"</span>]
<strong>Explanation</strong>: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: maze[][] = [[1, 0], [1, 0]]
<strong>Output: </strong>[]
<strong>Explanation</strong>: No path exists as the destination cell (1, 1) is blocked.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: maze[][] = <span class="hljs-string">[[1, 1, 1], [1, 0, 1], [1, 1, 1]]</span>
<strong>Output: </strong>[<span class="hljs-string">"DDRR"</span>, <span class="hljs-string">"RRDD"</span>]
<strong>Explanation</strong>: The rat has two possible paths to reach the destination: <span class="hljs-string" style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">DDRR</span><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> and </span><span class="hljs-string" style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">RRDD.</span></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>2 ≤ n ≤ 5<br>0 ≤ maze[i][j] ≤ 1</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Backtracking</code>&nbsp;<code>Algorithms</code>&nbsp;