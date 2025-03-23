<h2><a href="https://www.geeksforgeeks.org/problems/total-decoding-messages1235/1">Total Decoding Messages</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">A message containing letters<code>&nbsp;A-Z </code>is being encoded to numbers using the following mapping:</span></p>
<div class="highlighter-rouge">
<blockquote>
<p><span style="font-size: 14pt;">'A' -&gt; 1 <br>'B' -&gt; 2 <br>... <br>'Z' -&gt; 26 </span></p>
</blockquote>
</div>
<p><span style="font-size: 14pt;">You are given a string <strong>digits</strong>. You have to determine the <strong>total number of ways</strong> that message can be decoded.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;">digits </span>= "123"
<strong>Output: </strong>3
<strong>Explanation: </strong>"123" can be decoded as "ABC"(1, 2, 3), "LC"(12, 3) and "AW"(1, 23).
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">digits</span> = "90"</span><br><span style="font-size: 14pt;"><strong>Output: </strong>0
<strong>Explanation: </strong>"90" cannot be decoded, as it's an invalid string and we cannot decode '0'.<sup><br></sup></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>digits = "05"
<strong>Output: </strong>0
<strong>Explanation: </strong>"05" cannot be mapped to "E" because of the leading zero ("5" is different from "05"), the string is not a valid encoding message.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ digits.size() ≤ 10<sup>3</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Morgan Stanley</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>Nutanix</code>&nbsp;<code>Linkedin</code>&nbsp;<code>Facebook</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;