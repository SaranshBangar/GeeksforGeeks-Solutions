<h2><a href="https://www.geeksforgeeks.org/problems/remove-k-digits/1">Remove K Digits</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a non-negative integer <strong>S</strong>&nbsp;represented as a string, remove&nbsp;<strong>K</strong>&nbsp;digits from the number so that the new number is the smallest possible.<br><strong>Note :&nbsp;</strong>The given&nbsp;<em>num</em>&nbsp;does not contain any leading zero.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
S = "149811", K = 3
<strong>Output:</strong> <br>111
<strong>Explanation</strong>: <br>Remove the three digits 
4, 9, and 8 to form the new number 111
which is smallest.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
S = "1002991", K = 3
<strong>Output:</strong> <br>21
<strong>Explanation</strong>: <br>Remove the three digits 1(leading
one), 9, and 9 to form the new number 21(Note
that the output must not contain leading
zeroes) which is the smallest.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>removeKdigits()&nbsp;</strong>which takes the string S and an integer K as input and returns the new number which is the smallest possible.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(|S|).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(|S|).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=&nbsp;</span><span style="font-size: 18px;">K &lt;= </span><span style="font-size: 18px;">|S|&lt;=10</span><sup>6</sup></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;