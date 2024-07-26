<h2><a href="https://www.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1?page=1&category=Strings&status=unsolved&sortBy=accuracy">Second most repeated string in a sequence</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a sequence of strings, the task is to find out the second most repeated (or frequent) string in the given sequence.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> No two strings are the second most repeated, there will be always a single string.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 6
arr[] = {aaa, bbb, ccc, bbb, aaa, aaa}
<strong>Output:</strong> bbb
<strong>Explanation</strong>: "bbb" is the second most 
occurring string with frequency 2.
</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
N = 6
arr[] = {geek, for, geek, for, geek, aaa}
<strong>Output:</strong> for
<strong>Explanation</strong>: "for" is the second most
occurring string with frequency 2.
</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>secFrequent()&nbsp;</strong>which takes the string array arr[] and its size N as inputs and returns the second most frequent string in the array. If no such string exists, then return an empty string.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N*max(|S<sub>i</sub>|).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(N*max(|S<sub>i</sub>|).</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=N&lt;=10<sup>3</sup></span></p>
<p>&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;