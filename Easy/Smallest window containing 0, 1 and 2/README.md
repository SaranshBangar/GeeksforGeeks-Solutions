<h2><a href="https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1">Smallest window containing 0, 1 and 2</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string <strong>S</strong> consisting of the characters <strong>0</strong>, <strong>1</strong> and <strong>2</strong>. Your task is to find the length of the <strong>smallest substring </strong>of string <strong>S</strong> that contains all the three characters <strong>0, 1 </strong>and <strong>2</strong>. If no such substring exists, then return <strong>-1</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
S = 10212
<strong>Output:</strong>
3
<strong>Explanation:</strong>
The substring 102 is the smallest substring
that contains the characters 0, 1 and 2.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>
S = 12121
<strong>Output:</strong>
-1
<strong>Explanation: </strong>
As the character 0 is not present in the
string S, therefor no substring containing
all the three characters 0, 1 and 2
exists. Hence, the answer is -1 in this case.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Complete the function <strong>smallestSubstring()</strong> which takes the string <strong>S</strong> as input, and returns the length of the <strong>smallest substring </strong>of string S that contains all the three characters <strong>0, 1 </strong>and <strong>2.</strong></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O( length( S ) )<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ length( S )&nbsp;≤ 10<sup>5</sup><br>All the characters of String S lies in the set {'0', '1', '2'}</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>two-pointer-algorithm</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;