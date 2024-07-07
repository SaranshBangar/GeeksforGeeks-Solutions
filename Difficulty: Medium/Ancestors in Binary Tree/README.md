<h2><a href="https://www.geeksforgeeks.org/problems/ancestors-in-binary-tree/1">Ancestors in Binary Tree</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Binary Tree and an integer <strong>target</strong>. Find all the ancestors of the given target.</span></p>
<p><span style="font-size: 18px;"><span style="font-size: 14pt;">Note:<strong> </strong></span></span></p>
<ul>
<li><span style="font-size: 18px;"><span style="font-size: 14pt;">The ancestor&nbsp;of<strong> </strong><span style="background-color: #ffffff; color: #040c28; font-family: 'Google Sans', arial, sans-serif;">node <strong>x</strong> is node <strong>y,</strong> which is at the upper level of node <strong>x, </strong>and <strong>x</strong> is directly connected with node <strong>y</strong>. Consider multiple levels of ancestors to solve this problem.</span></span><br></span></li>
<li><span style="font-size: 18px;"><span style="font-size: 14pt;"><span style="background-color: #ffffff; color: #040c28; font-family: 'Google Sans', arial, sans-serif;">In case there are no ancestors available, return an empty list.</span></span></span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
&nbsp;        1
&nbsp;      /   \
&nbsp;     2     3
&nbsp;   /  \    /  \
&nbsp;  4   5  6   8
&nbsp; /
&nbsp;7
target = 7<strong>
Output: </strong>[4 2 1]<br></span><span style="font-size: 18px;"><strong>Explanation: </strong>The given target is 7, if we go above the level of node 7, then we find 4, 2 and 1. Hence the ancestors of node 7 are 4 2 and 1<br></span></pre>
<pre><span style="font-size: 18px;"><strong>Input:
&nbsp;       </strong>1
&nbsp;     /   \
&nbsp;    2     3
target = 1<strong>
Output: </strong>[ ]<br><strong>Explanation: </strong>Since 1 is the root node, there would be no ancestors. Hence we return an empty list.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(height of tree)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ no. of nodes ≤ 10<sup>3</sup><br>1 ≤ data of node ≤ 10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Traversal</code>&nbsp;<code>Algorithms</code>&nbsp;