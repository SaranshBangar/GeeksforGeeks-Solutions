<h2><a href="https://www.geeksforgeeks.org/problems/size-of-binary-tree/1?page=1&difficulty=School,Basic&status=unsolved&sortBy=accuracy">Size of Binary Tree</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary tree of size <strong>N</strong>, you have to count number of nodes in it. For example, count of nodes in below tree is 4.</span></p>

<p><span style="font-size:18px">&nbsp; &nbsp; &nbsp; &nbsp; 1<br>
&nbsp; &nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp; 10&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 39<br>
&nbsp; /<br>
5</span></p>

<p><span style="font-size:18px"><strong>Input:</strong></span><br>
<span style="font-size:18px">First line of input contains the number of test cases&nbsp;<strong>T</strong>. For each test case, there will be only a&nbsp;<strong>single</strong>&nbsp;line of input which is a&nbsp;<strong>string</strong>&nbsp;representing the tree as described below:&nbsp;</span></p>

<ol>
	<li dir="ltr">
	<p dir="ltr"><span style="font-size:18px">The values in the string are in the order of&nbsp;<strong>level order</strong>&nbsp;traversal of the tree where, numbers denote node values, and a character “N” denotes&nbsp;<strong>NULL</strong>&nbsp;child.</span></p>
	</li>
	<li dir="ltr">
	<p dir="ltr"><span style="font-size:18px">For example:<br>
	<img alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/20200124141533/Untitled-Diagram65.jpg" style="height:251px; width:500px"><br>
	For the above tree, the string will be: 1 2 3 N N 4 6 N 5 N N 7 N</span></p>
	</li>
</ol>

<p><span style="font-size:18px"><strong>Output:</strong><br>
For each testcase in new line, print the number of nodes.</span></p>

<p><span style="font-size:18px"><strong>User Task:</strong><br>
Since this is a functional problem you don't have to worry about input, you just have to complete the function <strong>getSize()</strong>.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= T &lt;= 30<br>
1 &lt;= N&nbsp;&lt;= 10<sup>4</sup><br>
<strong>Example:<br>
Input:</strong><br>
2<br>
1 2 3<br>
10 5 9 N 1 3 6&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Output:</strong><br>
3<br>
6</span></p>

<p><span style="font-size:18px"><strong>Explanation:<br>
Testcase 2: </strong>Given Tree is :</span><br>
<span style="font-size:18px">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 10<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/&nbsp; &nbsp; &nbsp; &nbsp; \<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;5&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 9<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;\&nbsp; &nbsp; &nbsp; &nbsp;/&nbsp; &nbsp; &nbsp;\<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 1&nbsp; &nbsp; 3&nbsp; &nbsp; &nbsp; &nbsp;6<br>
There are six nodes in the tree .<br>
&nbsp;</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;