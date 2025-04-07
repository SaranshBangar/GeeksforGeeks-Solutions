<h2><a href="https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1">Directed Graph Cycle</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Directed Graph with&nbsp;<strong>V</strong>&nbsp;vertices (Numbered from&nbsp;<strong>0</strong>&nbsp;to&nbsp;<strong>V-1</strong>) and&nbsp;<strong>E</strong>&nbsp;edges, check whether it contains any&nbsp;<strong>cycle&nbsp;</strong>or not.<br>The graph is&nbsp;</span><span style="font-size: 18.6667px;">represented as a 2D vector&nbsp;</span><strong style="font-size: 18.6667px;">edges[][]</strong><span style="font-size: 18.6667px;">, where each entry&nbsp;</span><strong style="font-size: 18.6667px;">edges[i] = [u, v]</strong><span style="font-size: 18.6667px;">&nbsp;denotes an edge from verticex&nbsp;</span><strong style="font-size: 18.6667px;">u</strong><span style="font-size: 18.6667px;">&nbsp;to&nbsp;</span><strong style="font-size: 18.6667px;">v.</strong></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>V = 4, edges[][] = [[0, 1], [1, 2], [2, 3], [3, 3]]</span>

<span style="font-size: 18px;"><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700218/Web/Other/9a013355-2510-4ab0-b554-1a2b9f6cb44f_1685086462.png" alt=""></span>

<span style="font-size: 18px;"><strong>Output:</strong> true
<strong>Explanation</strong>: 3 -&gt; 3 is a cycle</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>V = 3, edges[][] = [[0, 1], [1, 2]]<strong><br></strong></span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700218/Web/Other/b1096e14-7c18-47d8-a4e9-8dd42b2e466f_1685086462.png" alt="">

<span style="font-size: 18px;"><strong>Output:</strong> false
<strong>Explanation</strong>: no cycle in the graph</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ V, E ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Oracle</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>Adobe</code>&nbsp;<code>BankBazaar</code>&nbsp;<code>Rockstand</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;