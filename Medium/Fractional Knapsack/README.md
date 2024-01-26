<h2><a href="https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1">Fractional Knapsack</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given weights and values of <strong>N</strong> items, we need to put these items in a knapsack of capacity <strong>W</strong> to get the <strong>maximum</strong> total value in the knapsack.<br><strong>Note:</strong> Unlike 0/1 knapsack, you are <strong>allowed</strong> to break the item here.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 3, W = 50
value[] = {60,100,120}
weight[] = {10,20,30}
<strong>Output:
</strong>240.000000<strong>
Explanation:<br></strong>Take the item with value 60 and weight 10, value 100 and weight 20 and split the third item with value 120 and weight 30, to fit it into weight 20. so it becomes (120/30)*20=80, so the total weight becomes 60+100+80.0=240.0<strong><br></strong>Thus, total maximum value of item we can have is 240.00 from the given capacity of sack. 
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 2, W = 50
value[] = {60,100}
weight[] = {10,20}
<strong>Output:
</strong>160.000000<strong>
Explanation:<br></strong>Take both the items completely, without breaking.
Total maximum value of item we can have is 160.00 from the given capacity of sack.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task</strong> :<br>Complete the function&nbsp;<strong>fractionalKnapsack()</strong> that receives maximum capacity , array of structure/class and size <strong>N</strong> and returns a double value representing the maximum value in knapsack.<br><strong>Note:&nbsp;</strong>The details of structure/class is defined in the comments above the given function.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong> : O(NlogN)<br><strong>Expected Auxilliary Space</strong>: O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>5</sup><br>1 &lt;= W &lt;= 10<sup>9</sup><br></span><span style="font-size: 18px;">1 &lt;= value<sub>i</sub>, weight<sub>i</sub> &lt;= 10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Greedy</code>&nbsp;<code>Algorithms</code>&nbsp;