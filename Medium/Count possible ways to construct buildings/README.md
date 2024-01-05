<h2><a href="https://www.geeksforgeeks.org/problems/count-possible-ways-to-construct-buildings5007/1">Count possible ways to construct buildings</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">There is a road passing through a city with <strong>N</strong> plots on both sides of the road. Plots are arranged in a straight line on either side of the road. Determine the <strong>total number </strong>of ways to construct buildings in these plots, ensuring that no two buildings are adjacent to each other. Specifically, buildings on opposite sides of the road cannot be adjacent.</span></p>
<p><span style="font-size: 18px;">Using <strong>*</strong> to represent a plot and <strong>||</strong> for the road, the arrangement for <strong>N = 3 </strong>can be visualized as follows: <strong>* * * || * * </strong>*.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> As the answer can be very large, print it <strong>mod 10<sup>9</sup>+7</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>N = 1
<strong>Output: </strong>4
<strong>Explanation: <br></strong>Possible ways for the arrangement are </span><span style="font-size: 18px;">B||*, *||B, B||B, *||*<br>where B represents a building.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>N = 3
<strong>Output: </strong>25
<strong>Explanation: <br></strong>Possible ways for one side are BSS, BSB, SSS, SBS,<br>SSB where B represents a building and S
represents an empty space. Pairing up with <br>possibilities on the other side of the road,<br>total possible ways are 25.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>TotalWays()</strong>&nbsp;which takes <strong>N</strong> as input parameter and returns the total possible ways modulo <strong>10<sup>9</sup>&nbsp;+ 7</strong>.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br><strong>Expected Space Complexity:&nbsp;</strong>O(N)</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 100000</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Payu</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Fibonacci</code>&nbsp;<code>Algorithms</code>&nbsp;