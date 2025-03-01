<h2><a href="https://www.geeksforgeeks.org/problems/decode-the-string2444/1">Decode the string</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an encoded string&nbsp;<strong>s</strong>, the task is to decode it.&nbsp;</span><span style="font-size: 18px;">The encoding rule is :</span></p>
<ul>
<li><span style="font-size: 18px;"><strong>k[encodedString],</strong>&nbsp;where the&nbsp;<strong>encodedString</strong>&nbsp;inside the square brackets is being repeated exactly&nbsp;<strong>k</strong>&nbsp;times. Note that&nbsp;<strong>k</strong>&nbsp;is guaranteed to be a positive integer.<br></span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Note:&nbsp;</strong></span><span style="font-size: 18px;">The test cases are generated so that the length of the output string will never exceed&nbsp;</span><span style="font-size: 18px;">10</span><sup>5</sup><span style="font-size: 18px;">&nbsp;.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> s = "1[b]"
<strong>Output:</strong> "b"
<strong>Explanation:</strong> "b" is present only one time.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> s = "3[b2[ca]]"
<strong>Output:</strong> "bcacabcacabcaca"
<strong>Explanation:<br></strong>1. Inner substring “2[ca]” breakdown into “caca”.<br>2. Now, new string becomes “3[bcaca]”
3. Similarly “3[bcaca]” becomes “bcacabcacabcaca ” which is final result.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |s| ≤ 10<sup>5</sup>&nbsp;</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<code>Facebook</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Stack</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;