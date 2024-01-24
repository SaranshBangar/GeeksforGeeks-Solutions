<h2><a href="https://www.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1?page=1&sortBy=latest">Delete N nodes after M nodes of a linked list</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a linked list, delete N nodes after skipping M nodes of a linked list until the last of the linked list.</span></p>
<pre><span style="font-size: 18px;"><strong>Example:
Input:</strong>
2
8
2 1
9 1 3 5 9 4 10 1
6
6 1
1 2 3 4 5 6 </span>

<span style="font-size: 18px;"><strong>Output:</strong> 
9 1 5 9 10 1
1 2 3 4 5 6</span>

<span style="font-size: 18px;"><strong>Explanation:
</strong>Deleting one node after skipping the M nodes each time, we have list as 9-&gt; 1-&gt; 5-&gt; 9-&gt; 10-&gt; 1.</span></pre>
<p><span style="font-size: 18px;"><strong>Input:</strong><br>The first line of input contains the number of test cases T. For each test case, the first line of input contains a number of elements in the linked list, and the next M&nbsp;and N respectively space-separated. The last line contains the elements of the linked list.</span></p>
<p><span style="font-size: 18px;"><strong>Output:</strong><br>The function should not print any output to the stdin/console.</span></p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function&nbsp;<strong>linkdelete</strong>() which should modify the linked list as required.</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span></p>
<p><span style="font-size: 18px;">1 &lt;= size of linked list &lt;= 1000<br>0 &lt; M &lt;= size of linked list<br>0 &lt;= N &lt;= size of linked list</span><span style="font-size: 18px;">&nbsp;</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;