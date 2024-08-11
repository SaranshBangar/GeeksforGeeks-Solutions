<h2><a href="https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1">Job Sequencing Problem</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a set of <strong>n</strong> jobs where each <strong>job<sub>i</sub></strong>&nbsp;has a deadline and profit associated with it. </span></p>
<p><span style="font-size: 18px;">Each job takes <strong><em>1</em></strong> unit of time to complete and only one job can be scheduled at a time. We earn the profit associated with a job if and only if the job is completed by its deadline. </span></p>
<p><span style="font-size: 18px;">Find the number of jobs done and the&nbsp;<strong>maximum profit</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Note: </span></strong><span style="font-size: 18px;">J</span><span style="font-size: 18px;">obs will be given in the form (Job<sub>id</sub>, Deadline, Profit) associated with that Job. Deadline of the job is the time on or before which job needs to be completed to earn the profit.</span></p>
<p><strong><span style="font-size: 18px;">Examples :</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">Jobs = [[1,4,20],[2,1,1],[3,1,40],[4,1,30]]
<strong>Output: </strong>2 60<strong>
Explanation: </strong>Job<sub>1</sub>&nbsp;and Job<sub>3 </sub>can be done with maximum profit of 60 (20+40).</span>
</pre>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">Jobs = [[1,2,100],[2,1,19],[3,2,27],[4,1,25],[5,1,15]]
<strong>Output: </strong>2 127<strong>
Explanation: </strong>2 jobs can be done with maximum profit of 127 (100+27).</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong>: O(nlogn)<br><strong>Expected Auxilliary Space</strong>: O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><br>1 &lt;= Deadline,id &lt;= n<br>1 &lt;= Profit &lt;= 500</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Accolite</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Greedy</code>&nbsp;<code>Algorithms</code>&nbsp;