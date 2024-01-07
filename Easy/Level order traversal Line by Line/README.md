<h2><a href="https://www.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1">Level order traversal Line by Line</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a <strong>Binary Tree</strong>, your task is to find its level order traversal<strong>.</strong><br>
For the below tree the output will be 1 $ 2 3 $ 4 5 6 7 $ 8 $.</span></p>

<p><span style="font-size:18px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; / &nbsp; &nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3<br>
&nbsp;&nbsp; / &nbsp; &nbsp;\ &nbsp; &nbsp; / &nbsp; \<br>
&nbsp; 4&nbsp;&nbsp;&nbsp;&nbsp; 5 &nbsp;&nbsp;6&nbsp;&nbsp;&nbsp; 7<br>
&nbsp; &nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp; 8</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp;   </span><span style="font-size:20px">1
 &nbsp; &nbsp; &nbsp; &nbsp;/
 &nbsp; &nbsp;&nbsp; &nbsp;4
 &nbsp; &nbsp; /&nbsp; &nbsp;\
 &nbsp; &nbsp;4&nbsp; &nbsp;  2</span><span style="font-size:18px">
<strong>Output:</strong>1 $ 4 $ 4 2 $</span>

</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
 &nbsp;&nbsp;&nbsp;&nbsp;     /&nbsp;&nbsp;&nbsp; \
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;20&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;30
 &nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\
 &nbsp;&nbsp; 40&nbsp;&nbsp;&nbsp;&nbsp; 60
<strong>Output: </strong>10 $ 20 30 $ 40 60 $
</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">This is a function problem. You don't need to read input. Just complete the function<strong> levelOrder()&nbsp;</strong>that takes <strong>nodes</strong> as <strong>parameter </strong>and returns level order traversal as a 2D list.</span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong>The driver code prints the levels '$' separated.<br>
<strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= Number of edges &lt;= 1000<br>
0 &lt;= Data of a node &lt;= 100</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Morgan Stanley</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Hike</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;