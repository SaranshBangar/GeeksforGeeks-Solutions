<h2><a href="https://www.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1">Sorted insert for circular linked list</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p style="text-align: justify;"><span style="font-size: 18px;">Given a sorted circular linked list of length <strong>n</strong>, the task is to insert a new node in this circular list so that it remains a sorted circular linked list.</span></p>
<p style="text-align: justify;"><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="text-align: justify;"><span style="font-size: 18px;"><strong>Input:
</strong>n = 3<br>LinkedList = 1-&gt;2-&gt;4
(the first and last node is connected, i.e. 4 --&gt; 1)
data = 2
<strong>Output: <br></strong>1 2 2 4<br><strong>Explanation:<br></strong>We can add 2 after the second node.</span></pre>
<p style="text-align: justify;"><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="text-align: justify;"><span style="font-size: 18px;"><strong>Input:
</strong>n = 4<br>LinkedList = 1-&gt;4-&gt;7-&gt;9
(the first and last node is connected, i.e. 9 --&gt; 1)
data = 5
<strong>Output: <br></strong>1 4 5 7 9<br></span><strong style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation:<br></strong><span style="font-size: 14pt;">We can add 5 after the second node.</span></pre>
<p style="text-align: justify;"><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function&nbsp;<strong>sortedInsert()</strong> which should insert the new node into the given circular linked list and return the head of the linked list.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p style="text-align: justify;"><span style="font-size: 18px;"><strong>Constraints:</strong><br>0 &lt;= n &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>circular-linked-list</code>&nbsp;<code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;