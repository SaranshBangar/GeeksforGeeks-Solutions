<h2><a href="https://www.geeksforgeeks.org/problems/subtraction-in-linked-list/1">Subtraction in Linked List</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given two <strong>linked lists </strong>that represent two <strong>large positive numbers</strong>. From the two numbers represented by the linked lists, <strong>subtract </strong>the smaller number from the larger one. Look at the examples to get a better understanding of the task.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>L1 = 1-&gt;0-&gt;0
L2 = 1-&gt;2
<strong>Output: </strong>88<strong>
Explanation:  <br></strong>First linked list represents 100 and the<br>second one represents 12. 12 subtracted from 100
gives us 88 as the result. It is represented<br>as 8-&gt;8 in the linked list.<br></span></pre>
<p style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;"><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>L1 = 0-&gt;0-&gt;6-&gt;3
L2 = 7-&gt;1-&gt;0
<strong>Output: </strong>647<strong>
Explanation: <br></strong>First linked list represents 0063 =&gt; 63 and <br>the second one represents 710. 63 subtracted <br>from 710 gives us 647 as the result. It is<br>represented as 6-&gt;4-&gt;7 in the linked list.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not have to take any input or print anything. The task is to complete the function <strong>subLinkedList</strong>() that takes <strong>heads of two linked lists </strong>as <strong>input parameters </strong>and which should subtract the smaller number from the larger one represented by the given linked lists and <strong>return the head </strong>of the <strong>linked list </strong>representing the result.</span></p>
<p><span style="font-size: 18px;"><strong>n and m </strong>are the length of the two linked lists respectively.<strong><br>Expected Time Complexity:&nbsp;</strong> O(n+m)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(n+m)<br></span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10000<br>0 &lt;= values represented by the linked lists &lt; 10<sup>n<br></sup>0 &lt;= values represented by the linked lists &lt; 10<sup>m</sup><sup><br></sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;