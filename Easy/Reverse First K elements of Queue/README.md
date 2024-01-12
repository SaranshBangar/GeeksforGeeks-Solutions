<h2><a href="https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1">Reverse First K elements of Queue</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an integer <strong>K </strong>and a&nbsp;<a href="http://www.geeksforgeeks.org/queue-data-structure/">queue</a>&nbsp;of integers, we need to reverse the order of the first<strong> K</strong> elements of the queue, leaving the other elements in the same relative order.</span></p>
<p><span style="font-size: 18px;">Only following standard operations are allowed on queue.</span></p>
<ul>
<li><span style="font-size: 18px;">enqueue(x) : Add an item x to rear of queue</span></li>
<li><span style="font-size: 18px;">dequeue() : Remove an item from front of queue</span></li>
<li><span style="font-size: 18px;">size() : Returns number of elements in queue.</span></li>
<li><span style="font-size: 18px;">front() : Finds front item.<br></span></li>
</ul>
<p><strong style="font-size: 18px;">Note:</strong><span style="font-size: 18px;">&nbsp;The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">5 3
1 2 3 4 5
<strong>Output: 
</strong>3 2 1 4 5
<strong>Explanation: 
</strong>After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.</span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">4 4
4 3 2 1
<strong>Output: 
</strong>1 2 3 4
<strong>Explanation: 
</strong>After reversing the given
input from the 4th position the resultant
output will be 1 2 3 4.</span></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">Complete the provided function <strong>modifyQueue()</strong> that takes <strong>queue</strong> and <strong>K</strong> as parameters and returns a modified queue. The printing is done automatically by the driver code.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong> : O(N)<br><strong>Expected Auxiliary Space </strong>: O(K)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= K &lt;= N &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Queue</code>&nbsp;<code>Data Structures</code>&nbsp;