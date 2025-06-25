<h2><a href="https://www.geeksforgeeks.org/problems/delete-head-of-doubly-linked-list/1?page=3&difficulty=Basic,Easy&status=unsolved&sortBy=accuracy">Delete Head of Doubly Linked List</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a doubly linked list of size <strong>n</strong>, you have to<strong> delete the head </strong>of the linked list and return the new head.<br><strong>Note: </strong>Please set the previous of new head to null, and set the next of old head to null, and then delete the old head.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>LinkedList: 1&lt;--&gt;2
<strong>Output:
</strong>2
2
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>LinkedList: 2&lt;--&gt;5&lt;--&gt;7&lt;--&gt;8&lt;--&gt;99&lt;--&gt;100
<strong>Output:</strong>
5 7 8 99 100
100 99 8 7 5</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function <strong>deleteHead()</strong> which takes<strong> head reference</strong><strong>&nbsp;and returns</strong> reference to the <strong>new head </strong>node, which is then used to display the list. (The driver's code print the modified list twice, once forward and once backward)</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 &lt;= number of nodes &lt;= 10<sup>3</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>doubly-linked-list</code>&nbsp;<code>Data Structures</code>&nbsp;