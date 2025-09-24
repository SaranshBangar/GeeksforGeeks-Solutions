<h2><a href="https://www.geeksforgeeks.org/problems/design-minmax-queue/1">Design MinMax Queue</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18.6667px;">Design a </span><strong style="font-size: 18.6667px;">SpecialQueue </strong><span style="font-size: 18.6667px;">data structure that functions like a normal queue but with additional support for retrieving the minimum and maximum element efficiently.</span><br><span style="font-size: 18.6667px;">The SpecialQueue must support the following operations:</span></p>
<ul>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>enqueue(x): </strong>Insert an element x at the rear of the queue.</span></li>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>dequeue():&nbsp;</strong>Remove the element from the front of the queue.</span></li>
<li style="text-align: left;"><strong><span style="font-size: 18.6667px;">getFront():&nbsp;</span></strong><span style="font-size: 18.6667px;">Return the front element without removing.</span></li>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>getMin(): </strong>Return the minimum element in the queue in O(1) time.</span></li>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>getMax():&nbsp;</strong>Return the maximum element in the queue in O(1) time.</span></li>
</ul>
<p><span style="font-size: 14pt;"><span style="font-size: 14pt;">There will be a sequence of queries&nbsp;</span><strong>queries</strong><strong style="font-size: 14pt;">[][]</strong><span style="font-size: 14pt;">. The queries are represented in numeric form:</span></span></p>
<ul>
<li><span style="font-size: 14pt;"><strong>1 x</strong>&nbsp;<strong>:</strong>&nbsp;Call enqueue(x)</span></li>
<li><span style="font-size: 14pt;"><strong>2</strong><strong style="font-size: 14pt;">:</strong><span style="font-size: 14pt;">&nbsp;&nbsp;</span></span><span style="font-family: monospace;"><span style="font-size: 18.6667px;">Call dequeue()</span></span></li>
<li><span style="font-family: monospace;"><span style="font-size: 18.6667px;"><strong>3:</strong> Call getFront()</span></span></li>
<li><span style="font-family: monospace;"><span style="font-size: 18.6667px;"><strong>4: </strong>Call getMin()</span></span></li>
<li><span style="font-family: monospace;"><span style="font-size: 18.6667px;"><strong>5:</strong>&nbsp;Call getMax()</span></span></li>
</ul>
<p><span style="font-family: monospace;"><span style="font-size: 18.6667px;">The driver code will process the queries, call the corresponding functions, and print the outputs of getFront(), getMin(), getMax() operations.</span><br></span><span style="font-family: monospace;"><span style="font-size: 18.6667px;">You only need to implement the above five functions.</span></span></p>
<p><span style="font-family: monospace;"><span style="font-size: 18.6667px;"><strong>Note:&nbsp;</strong></span></span><span style="font-family: monospace;"><span style="font-size: 18.6667px;">It is guaranteed that all the queries are valid.</span></span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input: </strong><span style="font-size: 14pt;">q = 6, queries[][] = [[1, 4], [1, 2], [3], [4], [2], [5]]</span><strong style="font-size: 14pt;">
Output: </strong><span style="font-size: 14pt;">[4, 2, 2]</span><strong style="font-size: 14pt;">
Explanation: </strong><span style="font-size: 18.6667px;">Queries on queue are as follows:</span><span style="font-size: 14pt;"><br>enqueue(4): Insert 4 at the rear of the queue.
</span><span style="font-size: 14pt;"><span style="font-size: 18.6667px;">enqueue(2): Insert 2 at the rear of the queue.<br></span><span style="font-size: 14pt;">return the front element i.e 4
</span><span style="font-size: 18.6667px;">return minimum element from the queue i.e 2<br>dequeue(): Remove the front element 4 from the queue</span>
<span style="font-size: 18.6667px;">return maximum element from the queue i.e 2</span></span></span></pre>
<pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input:</strong><span style="font-size: 14pt;"> q = 4, queries[][] = [[1, 3], [4], [1, 5], [5]]</span><strong style="font-size: 14pt;">
Output: </strong><span style="font-size: 14pt;">[3, 5]</span><strong style="font-size: 14pt;">
Explanation: </strong><span style="font-size: 14pt;">Queries on queue are as follows:</span><strong style="font-size: 14pt;"><br></strong>enqueue(3): Insert 3 at the rear of the queue.
return minimum element from the queue i.e 3<span style="font-size: 14pt;"><br></span>enqueue(5): Insert 5 at the rear of the queue.<span style="font-size: 14pt;"><br></span>return maximum element from the queue i.e 5</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:<br></strong></span><span style="font-size: 14pt;">1 ≤ queries.size() ≤ 10<sup>5<br></sup></span><span style="font-size: 14pt;">0 ≤ values in the queue ≤ 10<sup>9</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Deque</code>&nbsp;<code>implementation</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Queue</code>&nbsp;