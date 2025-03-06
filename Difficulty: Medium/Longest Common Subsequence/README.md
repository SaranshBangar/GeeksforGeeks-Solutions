<h2><a href="https://www.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1">Longest Common Subsequence</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given two strings <strong><code>s1</code></strong> and <strong><code>s2</code></strong>, return the length of their <strong>longest common subsequence </strong>(LCS). If there is no common subsequence, return <strong>0</strong>.</span></p>
<p><span style="font-size: 14pt;"><em><span style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline; color: #273239; font-family: Nunito, sans-serif; letter-spacing: 0.162px; text-align: justify; background-color: #f9f9f9;"><span style="color: #273239; font-family: Nunito, sans-serif;"><span style="letter-spacing: 0.162px;">A subsequence is a sequence that can be derived from the given string by deleting some or no elements without changing the order of the remaining elements. </span></span><span style="color: #273239; font-family: Nunito, sans-serif;"><span style="letter-spacing: 0.162px;">For example, "ABE" is a subsequence of "ABCDE".</span></span></span></em></span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s1 = "ABCDGH", s2 = "AEDFHR"
<strong>Output: </strong>3<strong>
Explanation: </strong>The longest common subsequence of "ABCDGH" and "AEDFHR" is "ADH", which has a length of 3.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s1 = "ABC", s2 = "AC"
<strong>Output: </strong>2<strong>
Explanation: </strong>The longest common subsequence of "ABC" and "AC" is "AC", which has a length of 2.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s1 = "XYZW", s2 = "XYWZ"
<strong>Output: </strong>3<strong>
Explanation: </strong>The longest common subsequences of "XYZW" and "XYWZ" are "XYZ" and "XYW", both of length 3.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1&lt;= s1.size(), s2.size() &lt;=10<sup>3<br></sup>Both strings s1 and s2 contain only uppercase English letters.</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>VMWare</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Citrix</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;