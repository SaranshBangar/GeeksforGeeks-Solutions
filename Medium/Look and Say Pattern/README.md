<h2><a href="https://www.geeksforgeeks.org/problems/decode-the-pattern1138/1">Look and Say Pattern</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an integer n.&nbsp;Return&nbsp;the nth row of the following look-and-say pattern.<br>
1<br>
11<br>
21<br>
1211<br>
111221<br>
<strong>Look-and-Say Pattern:</strong></span></p>

<p><span style="font-size:18px">To generate a member of the sequence from the previous member, read off the digits of the previous member, counting the number of digits in groups of the same digit. For example:</span></p>

<ul>
	<li><span style="font-size:18px">1 is read off as "one 1" or 11.</span></li>
	<li><span style="font-size:18px">11 is read off as "two 1s" or 21.</span></li>
	<li><span style="font-size:18px">21 is read off as "one 2, then one 1" or 1211.</span></li>
	<li><span style="font-size:18px">1211 is read off as "one 1, one 2, then two 1s" or 111221.</span></li>
	<li><span style="font-size:18px">111221 is read off as "three 1s, two 2s, then one 1" or 312211.</span></li>
</ul>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 5
<strong>Output:</strong> 111221
<strong>Explanation: </strong>The 5<sup>th</sup> row of the given pattern
will be 111221.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 3
<strong>Output:</strong> 21
<strong>Explanation: </strong>The 3<sup>rd</sup> row of the given pattern
will be 21.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>lookandsay()</strong> which takes integer n as input parameter and returns a string denoting the contents of the nth row of given pattern.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(2<sup>n</sup>)<br>
<strong>Expected Auxiliary Space: </strong>O(2<sup>n-1</sup>) &nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n ≤ 30</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Facebook</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>pattern-printing</code>&nbsp;<code>Data Structures</code>&nbsp;