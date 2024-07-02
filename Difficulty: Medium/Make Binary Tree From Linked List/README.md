<h2><a href="https://www.geeksforgeeks.org/problems/make-binary-tree/1?timeMachineDate=2024-07-01">Make Binary Tree From Linked List</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Linked List Representation of Complete Binary Tree. Your task is to construct the Binary tree from the given linkedlist and return the root of the tree.<br>The result will be judged by printing the level order traversal of the Binary tree.&nbsp;</span><br><span style="font-size: 18px;"><strong>Note:&nbsp;</strong>The complete binary tree is represented as a linked list in a way where if the root node is stored at position i, its left, and right children are stored at position&nbsp;<strong>2*i+1</strong>, and&nbsp;<strong>2*i+2</strong>&nbsp;respectively.&nbsp;</span><span style="font-size: 18px;">H is the height of the tree and this space is used implicitly for the recursion stack.</span><br><br><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>list = 1-&gt;2-&gt;3-&gt;4-&gt;5
<strong>Output: </strong>1 2 3 4 5<strong>
Explanation: </strong>The tree would look like
&nbsp; &nbsp;   1
  &nbsp; /&nbsp;  \
 &nbsp; 2&nbsp;  &nbsp; 3
 /&nbsp;&nbsp;\
4&nbsp; &nbsp;5
Now, the level order traversal of
the above tree is 1 2 3 4 5.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>list = 5-&gt;4-&gt;3-&gt;2-&gt;1
<strong>Output: </strong>5 4 3 2 1<strong>
Explanation: </strong>The tree would look like</span>
<span style="font-size: 18px;">  &nbsp;  5
&nbsp; &nbsp;/&nbsp; \
 &nbsp;4&nbsp; &nbsp; 3
 /&nbsp;\
2&nbsp; &nbsp;1
Now, the level order traversal of
the above tree is 5 4 3 2 1.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(n).<br></span><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= size(list) &lt;= 10<sup>5</sup><br>1 &lt;= node.data &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Queue</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Linked List</code>&nbsp;