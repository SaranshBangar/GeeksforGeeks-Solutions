<h2><a href="https://www.geeksforgeeks.org/problems/anagram-of-string/1?page=1&difficulty=Basic&status=unsolved&sortBy=submissions">Anagram of String</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two strings<strong> S1 and S2</strong> in lowercase, the task is to make them anagram. The only allowed operation is to remove a character from any string. Find the&nbsp;<strong>minimum number of characters to be deleted</strong> to make both the strings anagram. Two strings are called anagram of each other if one of them can be converted into another by rearranging its letters.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">S1 = bcadeh
S2 = hea
<strong>Output: </strong>3<strong>
Explanation: </strong>We need to remove b, c
and d from S1.</span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">S1 = cddgk
S2 = gcd
<strong>Output: </strong>2<strong>
Explanation: </strong>We need to remove d and
k from S1.</span></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">Complete&nbsp;the function&nbsp;<strong>remAnagram()&nbsp;</strong>which takes two strings <strong>S1, S2</strong>&nbsp;as input parameter, and returns minimum characters needs to be deleted.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(max(|S1|, |S2|)), where |S| = length of string S.<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(26)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= |S1|, |S2| &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>anagram</code>&nbsp;<code>Data Structures</code>&nbsp;