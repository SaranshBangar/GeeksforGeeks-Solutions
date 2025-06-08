<h2><a href="https://www.geeksforgeeks.org/problems/sum-string3151/1">Sum-string</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p data-start="109" data-end="209"><span style="font-size: 14pt;">Given a string <strong><code data-start="124" data-end="127">s</code></strong> consisting of digits, determine whether it can be classified as a <strong data-start="194" data-end="208">sum-string</strong>.</span></p>
<p data-start="211" data-end="310"><span style="font-size: 14pt;">A <strong data-start="213" data-end="227">sum-string</strong> is a string that can be split into <strong data-start="263" data-end="278">more</strong> <strong>than two </strong>non-empty substrings such that:</span></p>
<p><span style="font-size: 14pt;"> </span></p>
<ul data-start="312" data-end="640">
<li data-start="312" data-end="436"><span style="font-size: 14pt;"> </span>
<p data-start="314" data-end="436"><span style="font-size: 14pt;">The <strong data-start="318" data-end="341">rightmost substring</strong> is equal to the <strong data-start="358" data-end="409">sum of the two substrings immediately before it</strong> (interpreted as integers).</span></p>
<span style="font-size: 14pt;"> </span></li>
<li data-start="437" data-end="509"><span style="font-size: 14pt;"> </span>
<p data-start="439" data-end="509"><span style="font-size: 14pt;">This condition must apply <strong data-start="465" data-end="480">recursively</strong> to the substrings before it.</span></p>
<span style="font-size: 14pt;"> </span></li>
<li data-start="510" data-end="640"><span style="font-size: 14pt;"> </span>
<p data-start="512" data-end="640"><span style="font-size: 14pt;">The <strong data-start="516" data-end="539">rightmost substring</strong> (and any number in the sum) <strong data-start="568" data-end="603">must not contain leading zeroes</strong>, unless the number is exactly <code data-start="634" data-end="639">'0'</code>.</span></p>
</li>
</ul>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "12243660"
<strong>Output: </strong>true
<strong>Explanation: </strong></span><span style="font-size: 18.6667px;">The string can be split as {"12", "24", "36", "60"} where each number is the sum of the two before it:
36 = 12 + 24, and 60 = 24 + 36. Hence, it is a sum-string.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> s <strong>= "</strong>1111112223"
<strong>Output: </strong>true
<strong>Explanation: </strong></span><span style="font-size: 18.6667px;">Split the string as {"1", "111", "112", "223"}, where:
112 = 1 + 111 and 223 = 111 + 112. Hence, it follows the sum-string rule.<br></span></pre>
<pre><span style="font-size: 18.6667px;"><strong>Input</strong>: s = "123456"<br></span><span style="font-size: 18.6667px;"><strong>Output</strong>: false<br></span><span style="font-size: 18.6667px;"><strong>Explanation</strong>: There is no valid split of the string such that each part satisfies the sum-string property recursively.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:<br></strong>1 ≤ s.size() ≤ 100</span><span style="font-size: 14pt;"><br><span style="font-size: 14pt;">String consists of characters from '0' to '9'.</span></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Nutanix</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Recursion</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;