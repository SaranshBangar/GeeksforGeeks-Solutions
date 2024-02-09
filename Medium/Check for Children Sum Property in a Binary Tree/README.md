<h2><a href="https://www.geeksforgeeks.org/problems/children-sum-parent/1">Check for Children Sum Property in a Binary Tree</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree having <strong>n</strong> nodes. Check whether all of its nodes have the value equal to the sum of their child nodes.</span><span style="font-size: 18px;">&nbsp;R</span><span style="font-size: 18px;">eturn 1 if all the nodes in the tree satisfy the given properties, else it return 0.</span></p>
<p><span style="font-size: 18px;">For every node, data value must be equal to the sum of data values in left and right children. Consider data value as 0 for NULL child.&nbsp; Also, leaves are considered to follow the property.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:<br></strong>Binary tree
       35
      /   \
     20  15<br>    /  \  /  \<br>   15 5 10 5
<strong>Output: <br></strong>1<strong>
Explanation: <br></strong>Here, every node is sum of its left and right child.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:<br></strong>Binary tree
       1
     /   \
&nbsp;   4    3
&nbsp;  /  
&nbsp; 5    
<strong>Output: <br></strong>0<strong>
Explanation: <br></strong>Here, 1 is the root node and 4, 3 are its child nodes. 4 + 3 = 7 which is not equal to the value of root node. Hence, this tree does not satisfy the given condition.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size: 18px;"> <strong>isSumProperty()</strong> that takes the root Node of the binary tree as input and returns 1 if all the nodes in the tree satisfy the following properties, else it returns 0.<br></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexiy: </strong>O(n).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><br>1 &lt;= Data on nodes &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Intuit</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;