<h2><a href="https://www.geeksforgeeks.org/problems/remove-half-nodes/1">Remove Half Nodes</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given a binary tree and you need to remove all the<strong> half nodes</strong> (which have only one child). R</span><span style="font-size: 18px;">eturn the root node of the modified tree after removing all the half-nodes.</span></p>
<p><span style="font-size: 18px;"><strong>Note: </strong>The output will be judged by the <strong>inorder traversal</strong> of the resultant tree, inside the driver code.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> tree = 5
&nbsp;           /   \
&nbsp;         7     8
&nbsp;       / 
&nbsp;     2<strong>
Output: </strong>2 5 8<br><strong>Explanation: </strong>In the above tree, the node 7 has only single child. After removing the node the tree becomes  2&lt;-5-&gt;8. Hence, the answer is 2 5 8 &amp; it is in inorder traversal.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> &nbsp;tree = 2 &nbsp; <br></span><span style="font-size: 18px;">              / \ &nbsp; <br>            7   5<strong> <br></strong></span><span style="font-size: 18px;"><strong>Output: </strong>7 2 5<br><strong>Explanation: </strong>Here there are no nodes which has only one child. So the tree remains same.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(height of the binary tree)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=number of nodes&lt;=10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;