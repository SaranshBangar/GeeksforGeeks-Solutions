<h2><a href="https://www.geeksforgeeks.org/problems/delete-a-node-from-bst/1?page=1&category=Sorting,Stack,Binary%20Search%20Tree,Binary%20Search&difficulty=Easy,Medium&status=unsolved&sortBy=accuracy">Delete a node from BST</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Binary Search Tree and a node value X. Delete the node with the given value X from the BST. If no node with value x exists, then do not make any change.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>      2
&nbsp;   /   \
&nbsp;  1     3
X = 12
<strong>Output: </strong>1 2 3<strong>
Explanation: </strong>In the given input there
is no node with value 12 , so the tree
will remain same.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 1
 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;\
 &nbsp; &nbsp;    &nbsp; &nbsp; &nbsp; 2
 &nbsp; &nbsp;&nbsp; &nbsp;       &nbsp;&nbsp;\
 &nbsp; &nbsp; &nbsp;        &nbsp;  8 
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/&nbsp; &nbsp; \
 &nbsp; &nbsp; &nbsp; &nbsp;     &nbsp;5&nbsp;  &nbsp;  11
 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/&nbsp; \&nbsp; &nbsp; /  \
 &nbsp; &nbsp; &nbsp;     4 &nbsp; &nbsp;7&nbsp; 9 &nbsp;&nbsp;12
X = 9
<strong>Output: </strong>1 2 4 5 7 8 11 12<strong>
Explanation: </strong>In the given input tree after
deleting 9 will be
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  1
&nbsp; &nbsp; &nbsp; &nbsp;   &nbsp; &nbsp;&nbsp;\
&nbsp; &nbsp;     &nbsp;  &nbsp; &nbsp; 2
&nbsp; &nbsp;&nbsp; &nbsp;        &nbsp; &nbsp;\
&nbsp; &nbsp; &nbsp;        &nbsp;  &nbsp; 8
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  &nbsp;  &nbsp;/&nbsp;  \
&nbsp; &nbsp; &nbsp; &nbsp;        &nbsp;5&nbsp; &nbsp;  11
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; /&nbsp; \&nbsp; &nbsp; &nbsp;\
&nbsp; &nbsp; &nbsp;         4 &nbsp; &nbsp;7&nbsp; &nbsp;&nbsp;&nbsp;12</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size: 18px;"> <strong>deleteNode()</strong>&nbsp;which takes two&nbsp;arguments. The first being the root of the tree, and an integer <strong>'X'</strong>&nbsp;denoting the node value to be deleted from the BST. Return the root of the BST after deleting the node with value X. Do not make any update if there's no node with value X present in the BST. </span></p>
<p><span style="font-size: 18px;"><strong>Note: </strong>The generated output will be&nbsp;the inorder traversal of the modified tree.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(Height of the BST).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the BST).</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>5</sup></span></p>
<p>&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Samsung</code>&nbsp;<code>Adobe</code>&nbsp;<code>Qualcomm</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;