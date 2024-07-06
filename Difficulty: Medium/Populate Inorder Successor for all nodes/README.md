<h2><a href="https://www.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1">Populate Inorder Successor for all nodes</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a Binary Tree, complete the function to populate the next pointer for all nodes. The next pointer for every node should point to the Inorder successor of the node.<br>You do not have to return or print anything. Just make changes in the root node given to you.</span></p>
<p><span style="font-size: 14pt;"><strong>Note:&nbsp;</strong>The node having no in-order successor will be pointed to -1. You don't have to add -1 explicitly, the driver code will take care of this.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong>
       10
&nbsp;      /  \
&nbsp;     8   12
&nbsp;    /
&nbsp;   3
<strong>Output: </strong>3-&gt;8 8-&gt;10 10-&gt;12 12-&gt;-1
<strong>Explanation: </strong>The inorder of the above tree is : 3 8 10 12. So the next pointer of node 3 is pointing to 8 , next pointer of 8 is pointing to 10 and so on.And next pointer of 12 is pointing to -1 as there is no inorder successor of 12.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong>
       1
&nbsp;     /  
&nbsp;    2 <br>   /<br> 3  
<strong>Output: </strong>3-&gt;2 2-&gt;1 1-&gt;-1<br><strong>Explanation: </strong>The inorder of the above tree is: 3 2 1. So the next pointer of node 3 is pointing to 2 , next pointer of 2 is pointing to 1. And next pointer of 1 is pointing to -1 as there is no inorder successor of 1.</span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1&lt;= no. of nodes &lt;=10<sup>5</sup><br>1&lt;= data of the node &lt;=10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Traversal</code>&nbsp;<code>Algorithms</code>&nbsp;