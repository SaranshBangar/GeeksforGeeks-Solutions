<h2><a href="https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1">Undirected Graph Cycle</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18.6667px;">Given an <strong>undirected graph </strong>with <strong>V</strong> vertices and<strong> E </strong>edges, represented as a 2D vector <strong>edges[][]</strong>, where each entry <strong>edges[i] = [u, v]</strong> denotes an edge between vertices <strong>u</strong> and <strong>v</strong>, determine whether the graph contains a <strong>cycle </strong>or not.</span><span style="font-size: 18px;"><img style="font-size: 18px; font-weight: bold;" src="C:\Users\Mukul kumar\Desktop\GFG_PIC.JPG" alt=""></span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>V = 4, E = 4, edges[][] = [[0, 1], [0, 2], [1, 2], [2, 3]]
<strong>Output: </strong>true
<strong>Explanation:</strong> 
</span><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/891735/Web/Other/blobid1_1743510240.jpg" width="176" height="158"> <br><span style="font-size: 18px;">1 -&gt; 2 -&gt; 0 -&gt; 1 is a cycle.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>V = 4, E = 3, edges[][] = [[0, 1], [1, 2], [2, 3]]</span>
<strong><span style="font-size: 18px;">Output: </span></strong><span style="font-size: 18px;">false</span><span style="font-size: 18px;">
<strong>Explanation: 
</strong></span><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/891735/Web/Other/blobid2_1743510254.jpg" width="169" height="153"> <br><span style="font-size: 18px;">No cycle in the graph.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong>1&nbsp;≤ V&nbsp;≤&nbsp;10<sup>5</sup><br>1 ≤ E = edges.size() ≤ 10<sup>5</sup><br></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Oracle</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>DFS</code>&nbsp;<code>Graph</code>&nbsp;<code>union-find</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;