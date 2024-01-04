<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1?page=1&difficulty=School,Basic&status=unsolved&sortBy=accuracy">Sum of Binary Tree</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a Binary Tree of size <strong>N</strong>, your task is to complete the function <strong>sumBt()</strong>, that should return the sum of all the nodes of the given binary tree.<br>
<br>
<strong>Input:</strong></span></p>

<p dir="ltr"><span style="font-size:18px">First line of input contains the number of test cases T. For each test case, there will be two lines:</span></p>

<ol>
	<li dir="ltr">
	<p dir="ltr"><span style="font-size:18px">First line of each test case will be an integer N denoting the number of parent child relationships.</span></p>
	</li>
	<li dir="ltr">
	<p dir="ltr"><span style="font-size:18px">Second line of each test case will print the <strong>level order traversal</strong> of the tree in the form of <strong>N space separated triplets</strong>. The description of triplets is as follows:</span></p>

	<ol>
		<li dir="ltr">
		<p dir="ltr"><span style="font-size:18px">Each triplet will contain <strong>three space-separated</strong> elements of the form (int, int char).</span></p>
		</li>
		<li dir="ltr">
		<p dir="ltr"><span style="font-size:18px">The first integer element will be the value of <strong>parent.</strong>&nbsp;</span></p>
		</li>
		<li dir="ltr">
		<p dir="ltr"><span style="font-size:18px">The second integer will be the value of corresponding <strong>left</strong> or <strong>right child</strong>. In case the child is null, this value will be <strong>-1</strong>.</span></p>
		</li>
		<li dir="ltr">
		<p dir="ltr"><span style="font-size:18px">The third element of triplet which is a character can take any of the three values <strong>‘L’</strong>, <strong>‘R’</strong> or <strong>‘N’</strong>. L denotes that the children is a left child, R denotes that the children is a Right Child and N denotes that the child is NULL.</span><br>
		&nbsp;</p>
		</li>
	</ol>
	</li>
</ol>

<p><span style="font-size:18px">Please <strong>note</strong> that the relationships are printed only for internal nodes and not for leaf nodes.<br>
<br>
<strong>Output:</strong><br>
The function should return the sum of all the nodes of the binary tree.<br>
<br>
<strong>User Task:</strong><br>
As it is a functional problem. So, you don't need to worry about the input you just have to complete&nbsp;the function <strong>sumBT()&nbsp;</strong>that takes a <strong>node</strong> as a parameter and returns the sum of all the nodes.</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=T&lt;=100<br>
1&lt;=N&lt;=100<br>
<br>
<strong>Example:<br>
Input:</strong><br>
2<br>
2<br>
1 2 L 1 -1 N<br>
6<br>
1 2 L 1 3 R 2 -1 N 2 -1 N 3 3 L 3 -1 N<br>
<strong>Output:</strong></span><br>
<span style="font-size:18px">3</span><br>
<span style="font-size:18px">9</span></p>

<p><span style="font-size:14px"><strong>Note:</strong>The <strong>Input/Ouput</strong> format and <strong>Example</strong> given are used for system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>FactSet</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;