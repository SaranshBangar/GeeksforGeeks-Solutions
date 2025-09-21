<h2><a href="https://www.geeksforgeeks.org/problems/max-rectangle/1">Max rectangle</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p data-start="158" data-end="378"><span style="font-size: 14pt;">You are given a 2D binary matrix <strong>mat[ ][ ]</strong>, where each cell contains either&nbsp;<strong>0</strong> or <strong>1</strong>. Your task is to find the <strong data-start="291" data-end="322">maximum area</strong> of a rectangle that can be formed using only <strong>1's</strong>&nbsp;within the matrix.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input: </strong><span style="font-size: 18px;">mat[][] = [[0, 1, 1, 0],
                [1, 1, 1, 1],
                [1, 1, 1, 1],
                [1, 1, 0, 0]]
</span><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">8</span><strong style="font-size: 18px;">
Explanation: </strong><span style="font-size: 18px;">The largest rectangle with only 1’s is from (1, 0) to (2, 3) which is
[1, 1, 1, 1]
[1, 1, 1, 1]
and area is 4 * 2 = 8</span></span><span style="font-size: 18px;">.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> mat[][] = [[0, 1, 1],
                [1, 1, 1],
                [0, 1, 1]]
<strong>Output:</strong> 6
<strong>Explanation:</strong> The largest rectangle with only 1’s is from (0, 1) to (2, 2) which is
[1, 1]
[1, 1]
[1, 1]<br>and area is 2 * 3 = 6.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ mat.size(), mat[0].size() ≤1000<br>0 ≤ mat[][] ≤1<br></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Directi</code>&nbsp;<code>Intuit</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Stack</code>&nbsp;<code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;