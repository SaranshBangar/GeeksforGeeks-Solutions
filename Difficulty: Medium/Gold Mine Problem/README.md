<h2><a href="https://www.geeksforgeeks.org/problems/gold-mine-problem2608/1">Gold Mine Problem</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a gold mine called <strong>mat[][]</strong>. Each field in this mine contains a <strong>positive integer </strong>which is the amount of gold in tons. Initially, the miner can start from any <strong>row</strong> in the first <strong>column</strong>. From a given cell, the miner can move -</span></p>
<ol>
<li><span style="font-size: 18px;">to the cell diagonally up towards the right</span></li>
<li><span style="font-size: 18px;">to the right</span></li>
<li><span style="font-size: 18px;">to the cell&nbsp;diagonally down towards the right</span></li>
</ol>
<p><span style="font-size: 18px;">Find out the <strong>maximum amount of gold </strong>that he can collect until he can no longer move.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> mat[][] = [[1, 3, 3], [2, 1, 4], [0, 6, 4]]
<strong>Output:</strong> 12
<strong>Explaination:</strong> The path is (1, 0) -&gt; (2, 1) -&gt; (2, 2). Total gold collected is 2 + 6 + 4 = 12.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>mat[][] = [[1, 3, 1, 5], [2, 2, 4, 1], [5, 0, 2, 3], [0, 6, 1, 2]]
<strong>Output:</strong> 16
<strong>Explaination:</strong> The path is (2, 0) -&gt; (3, 1) -&gt; (2, 2) -&gt; (2, 3) or (2, 0) -&gt; (1, 1) -&gt; (1, 2) -&gt; (0, 3). <br>Total gold collected is (5 + 6 + 2 + 3) or (5 + 2 + 4 + 5) = 16.<br></span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> mat[][] = [[1, 3, 3], [2, 1, 4], [0, 7, 5]]
<strong>Output:</strong> 14
<strong>Explaination:</strong> The path is (1,0) -&gt; (2,1) -&gt; (2,2). Total gold collected is 2 + 7 + 5 = 14.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ mat.size(), mat[0].size() ≤ 500<br></span><span style="font-size: 18px;">0 ≤ mat[i][j] ≤ 100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Samsung</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;