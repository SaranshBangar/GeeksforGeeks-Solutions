<h2><a href="https://www.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1">Min distance between two given nodes of a Binary Tree</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree with <strong>n</strong> nodes and two node values, <strong>a</strong> and <strong>b</strong>, your task is to find the minimum distance between them. The given two nodes are guaranteed to be in the binary tree and all node values are <strong>unique</strong>.<br></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
&nbsp;       </strong>1
&nbsp;     /  \
&nbsp;    2    3
a = 2, b = 3
<strong>Output: <br></strong>2<strong>
Explanation: </strong>
We need the distance between 2 and 3. Being at node 2, we need to take two steps ahead in order to reach node 3. The path followed will be: 2 -&gt; 1 -&gt; 3. Hence, the result is 2. </span></pre>
<p dir="ltr"><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
&nbsp;       </strong>11
&nbsp;     /   \
&nbsp;    22  33<br>    /  \  /  \<br>  44 55 66 77
a = 77, b = 22
<strong>Output: <br></strong>3<strong>
Explanation: </strong>
We need the distance between 77 and 22. Being at node 77, we need to take three steps ahead in order to reach node 22. The path followed will be: 77 -&gt; 33 -&gt; 11 -&gt; 22. Hence, the result is 3.</span></pre>
<p dir="ltr"><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>findDist()&nbsp;</strong>which takes the <strong>root </strong>node of the tree and the two node values <strong>a</strong> and <strong>b</strong>&nbsp;as input parameters&nbsp;and returns the minimum distance between the nodes represented by the two given node values.</span></p>
<p dir="ltr"><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>
<p dir="ltr"><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 &lt;= n &lt;= 10<sup>5</sup><br>1 &lt;= Data of a node &lt;= 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Samsung</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Ola Cabs</code>&nbsp;<code>Linkedin</code>&nbsp;<code>Qualcomm</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;