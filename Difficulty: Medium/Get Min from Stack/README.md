<h2><a href="https://www.geeksforgeeks.org/problems/get-minimum-element-from-stack/1">Get Min from Stack</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given <strong>q</strong> queries,&nbsp;</span><span style="font-size: 18.6667px;">You task is to implement the following <strong>four</strong> functions for a stack:</span></p>
<ul>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>push(x) – </strong>Insert an integer x onto the stack.</span></li>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>pop() – </strong>Remove the top element from the stack.</span></li>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>peek() - </strong>Return the top element&nbsp;</span><span style="font-size: 18.6667px;"><span style="font-size: 18.6667px;">from the stack.</span><strong><strong style="font-size: 18.6667px;">&nbsp;</strong><span style="font-family: monospace; font-size: 18.6667px; font-weight: 400;">If the stack is empty, return -1.</span><br></strong></span></li>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>getMin() – </strong>Retrieve the minimum element from the stack in O(1) time. If the stack is empty, return -1.</span></li>
</ul>
<p><span style="font-size: 14pt;">Each query can be one of the following:</span></p>
<ul>
<li><span style="font-size: 14pt;"><strong>1 x</strong> : Push x onto the stack.</span></li>
<li><span style="font-size: 14pt;"><strong>2 :</strong> Pop the top element from the stack.</span></li>
<li><span style="font-family: monospace;"><span style="font-size: 18.6667px;"><strong>3:</strong> Return the top element from the stack. If the stack is empty, return -1.</span></span></li>
<li><span style="font-family: monospace;"><span style="font-size: 18.6667px;"><strong>4:</strong> Return the minimum element from the stack.</span></span></li>
</ul>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> q = 7, queries = [[1, 2], [1, 3], [3], [2], [4], [1, 1], [4]]<strong>
Output: </strong>[3, 2, 1]<strong>
Explanation: </strong>
push(2): Stack is [2]
push(3): Stack is [2, 3]
peek(): Top element is 3
pop(): Removes 3, stack is [2]
getMin(): Minimum element is 2
push(1): Stack is [2, 1]
getMin(): Minimum element is 1</span></pre>
<pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input:</strong><span style="font-size: 14pt;"> q = 4, queries = [[1, 4], [1, 2], [4], [3]]</span><strong style="font-size: 14pt;">
Output: </strong><span style="font-size: 14pt;">[2, 2]</span><strong style="font-size: 14pt;">
Explanation: <br></strong><span style="font-size: 18.6667px;">push(4): Stack is [4]
push(2): Stack is [4, 2]</span><span style="font-size: 14pt;"><br></span><span style="font-size: 18.6667px;">getMin(): Minimum element is 2</span><span style="font-size: 14pt;"><br></span><span style="font-size: 18.6667px;">peek(): Top element is 2</span></span></pre>
<pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input:</strong><span style="font-size: 14pt;"> q = 5, queries = [[1, 10], [4], [1, 5], [4], [2]]</span><strong style="font-size: 14pt;">
Output: </strong><span style="font-size: 14pt;">[10, 5]</span><strong style="font-size: 14pt;">
Explanation: <br></strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"><span style="font-size: 18.6667px;">push(10): Stack is [10]</span><span style="font-family: -apple-system, BlinkMacSystemFont, Segoe UI, Roboto, Oxygen, Ubuntu, Cantarell, Open Sans, Helvetica Neue, sans-serif;"><span style="font-size: 14pt;"><br></span></span></span></span><span style="font-size: 18.6667px;">getMin(): Minimum element is 10</span><br><span style="font-size: 14pt;"><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"><span style="font-size: 18.6667px;">push(5): Stack is [10, 5]</span><span style="font-family: -apple-system, BlinkMacSystemFont, Segoe UI, Roboto, Oxygen, Ubuntu, Cantarell, Open Sans, Helvetica Neue, sans-serif;"><span style="font-size: 14pt;"><br></span></span></span></span><span style="font-size: 18.6667px;">getMin(): Minimum element is 5</span><br><span style="font-size: 18.6667px;">pop(): Removes 5, stack is [10]</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= q &lt;= 10<sup>5</sup><br>0 &lt;= values on the stack &lt;= 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>D-E-Shaw</code>&nbsp;<code>FactSet</code>&nbsp;<code>Walmart</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>SAP Labs</code>&nbsp;<code>Sapient</code>&nbsp;<code>One97</code>&nbsp;<code>GreyOrange</code>&nbsp;<code>Kuliza</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;