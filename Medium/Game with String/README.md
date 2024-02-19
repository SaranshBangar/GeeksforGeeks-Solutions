<h2><a href="https://www.geeksforgeeks.org/problems/game-with-string4100/1">Game with String</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string <strong>s</strong> of lowercase alphabets and a number <strong>k</strong>, the task is to print the minimum value of the string after removal of <strong>k</strong> characters. The value of a string is defined as the sum of squares of the count of each distinct character present in the string.</span>&nbsp;</p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> <br>s = abccc, k = 1
<strong>Output:</strong> <br>6
<strong>Explaination:
</strong>We remove c to get the value as 1<sup>2</sup></span><span style="font-size: 18px;"> + 1<sup>2</sup></span><span style="font-size: 18px;"> + 2<sup>2</sup></span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: <br></strong>s = aabcbcbcabcc, k = 3
<strong>Output:</strong> <br>27
<strong>Explaination:</strong> <br>We remove two 'c' and one 'b'. Now we get the value as 3<sup>2 </sup>+ 3<sup>2</sup> + 3<sup>2</sup>.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>minValue()</strong> which takes <strong>s</strong> and <strong>k</strong> as input parameters and returns the minimum possible required value.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n+klog(p))&nbsp; where n is the length of string and p is number of distinct alphabets and k number of alphabets to be removed.&nbsp;<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>0 ≤ k ≤ |string length| ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;