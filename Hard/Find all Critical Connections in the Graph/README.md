<h2><a href="https://www.geeksforgeeks.org/problems/critical-connections/1">Find all Critical Connections in the Graph</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">A <strong>critical connection </strong>refers to an edge that, upon removal, will make it impossible for certain nodes to reach each other through any path. You are given an <strong>undirected connected graph </strong>with <strong>v</strong> vertices and <strong>e</strong> edges and each vertex distinct and ranges from <strong>0 to v-1</strong>, and you have to find all <strong>critical connections </strong>in the graph. It is ensured that there is at least one such edge present.</span></p>
<p><span style="font-size: 18px;"><strong>Note: </strong>The answers may be presented in various potential orders. Each edge should be displayed in <strong>sorted order. </strong>For instance, if there's an edge between node <strong>1 </strong>and node <strong>2, </strong>it should be stored as <strong>(1,2) </strong>rather than <strong>(2,1). </strong>Additionally, it is expected that you store the edges in <strong>sorted order.</strong></span></p>
<p><strong style="font-size: 18px;">Example 1:</strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/706303/Web/Other/bbe726f7-e9f7-4a0c-b9fa-c649299d9784_1685087730.png" alt=""><span style="font-size: 18px;">
<strong>Output:</strong>
0 1
0 2
<strong>Explanation</strong>: 
On removing edge (0, 1), you will not be able to<br>reach node 0 and 2 from node 1. Also, on removing<br>edge (0, 2), you will not be able to reach node 0<br>and 1 from node 2.<br></span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/706303/Web/Other/730505a5-24f6-41de-bd11-84a0a9e56d49_1685087731.png" alt=""><span style="font-size: 18px;">
<strong>Output:</strong>
2 3
<strong>Explanation</strong>:
The edge between nodes 2 and 3 is the only
Critical connection in the given graph.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your task:</strong><br>You dont need to read input or print anything. Your task is to complete the function <strong>criticalConnections()</strong>&nbsp;which takes the integer <strong>v </strong>denoting the number of vertices and an adjacency list <strong>adj </strong>as input parameters and returns </span>&nbsp;<span style="font-size: 18px;">a list of lists containing the <strong>Critical connections </strong>in the <strong>sorted order</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(v + e)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(v)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ v, e ≤ 10<sup>4<br></sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;