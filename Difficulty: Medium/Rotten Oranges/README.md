<h2><a href="https://www.geeksforgeeks.org/problems/rotten-oranges2536/1">Rotten Oranges</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a matrix <strong>mat[][]</strong> of dimension <strong>n * m</strong> where each cell in the matrix can have values <strong>0, 1 or 2</strong> which has the following meaning:</span><br><span style="font-size: 18px;"><strong>0 </strong>: Empty cell </span><br><span style="font-size: 18px;"><strong>1</strong> : Cell have fresh oranges </span><br><span style="font-size: 18px;"><strong>2</strong> : Cell have rotten oranges </span></p>
<p><span style="font-size: 18px;">We have to determine what is the earliest time after which all the oranges are rotten. A rotten orange at index (i, j) can rot other fresh orange at indexes (i-1, j), (i+1, j), (i, j-1), (i, j+1) (<strong>up</strong>, <strong>down</strong>, <strong>left</strong> and <strong>right</strong>) in a unit time. </span></p>
<p><strong><span style="font-size: 18px;">Note</span></strong><span style="font-size: 18px;"><strong>:</strong> Your task is to return the minimum time to rot all the fresh oranges. If not possible returns</span><strong><span style="font-size: 18px;"> -1.</span></strong></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>mat[][] = [[0, 1, 2], [0, 1, 2], [2, 1, 1]]
<strong>Output: </strong>1
<strong>Explanation: </strong>Oranges at positions (0,2), (1,2), (2,0) will rot oranges at (0,1), (1,1), (2,2) and (2,1) in unit time.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>mat[][] = [[2, 2, 0, 1]]
<strong>Output: </strong>-1
<strong>Explanation: </strong>Oranges at (0,0) and (0,1) can't rot orange at (0,3).</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>mat[][] = [[2, 2, 2], [0, 2, 0]]
<strong>Output: </strong>0
<strong>Explanation: </strong></span><span style="font-size: 18px;">There is no fresh orange. </span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ mat.size() ≤ 500<br></span><span style="font-size: 18px;">1 ≤ mat[0].size() ≤ 500<br></span><span style="font-size: 18px;">mat[i][j] = {0, 1, 2}&nbsp;</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Samsung</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Queue</code>&nbsp;