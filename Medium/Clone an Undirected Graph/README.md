<h2><a href="https://www.geeksforgeeks.org/problems/clone-graph/1">Clone an Undirected Graph</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a <strong>connected undirected graph&nbsp;</strong>with <strong>n </strong>nodes and <strong>m</strong> edges, with each node having a <strong>distinct label </strong>from <strong>0 to n-1</strong>, create a <strong>clone </strong>of the graph. Each node in the graph contains an integer <strong>val</strong> and an array (</span><strong style="font-size: 18px;">neighbors</strong><span style="font-size: 18px;">) of nodes,</span><strong style="font-size: 18px;">&nbsp;</strong><span style="font-size: 18px;">containing nodes that are adjacent to the current node</span><span style="font-size: 18px;">.</span></p>
<p><strong style="font-size: 18px;">Note:&nbsp;</strong><span style="font-size: 14pt;">If the user returns a <strong>correct copy </strong>of the given graph, then the system will print <strong>1</strong>; in the case when an incorrect copy is generated or when the user returns the original node, the system will print <strong>0</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>For Example :&nbsp; &nbsp;&nbsp;</strong></span></p>
<pre><span style="font-size: 18px;">class Node {
    val: integer
    neighbors: List[Node]
}</span></pre>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>adjList = <br>{<br>    {1, 3},<br>    {0, 2},<br>    {1, 3},<br>    {0, 2}<br>}
<strong>Output: </strong>1
<strong>Explanation:<br></strong>1 is the output that the driver code will print in case <br>you successfully cloned the given graph.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>adjList = <br>{<br>    {1},<br>    {0}<br>}
<strong>Output: </strong>1
<strong>Explanation: <br></strong>1 is the output that the driver code will print in case<br>you successfully cloned the given graph.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>cloneGraph( )&nbsp;</strong>which takes a&nbsp;node will always be the first node of the graph</span><span style="font-size: 18px;"> as input and returns the&nbsp;<strong>copy of the given node</strong>&nbsp;as a reference to the cloned graph.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n + m).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(n).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n, m &lt;= 10<sup>4</sup><br>1 &lt;= Node value &lt;= n</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;