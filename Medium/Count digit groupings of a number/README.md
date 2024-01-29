<h2><a href="https://www.geeksforgeeks.org/problems/count-digit-groupings-of-a-number1520/1">Count digit groupings of a number</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string <strong>str</strong>&nbsp;consisting of digits, you can divide it into <strong>sub-groups</strong> by separating the string into substrings. For example, "112" can be divided as {"1", "1", "2"}, {"11", "2"}, {"1", "12"}, and {"112"}.</span></p>
<p><span style="font-size: 18px;">A v<strong>alid grouping</strong> can be done if you are able to divide <strong>sub-groups</strong> where the <strong>sum of digits</strong> in a <strong>sub-group </strong>is <strong>less than or equal to</strong> the <strong>sum of the digits </strong>of the <strong>sub-group </strong>immediately right to it. Your task is to determine the <strong>total number </strong>of <strong>valid groupings</strong> that could be done for a given string.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:&nbsp;</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: <br></strong>str = "1119"
<strong>Output: <br></strong>7
<strong>Explanation: <br></strong>One valid grouping is {"1", "11", "9"}.<br>Sum of digits of first sub-group ("1") is 1,<br>for the second sub-group ("11"), it is 2,<br>and for the third one ("9"), it is 9.<br>As the sum of digits of the sub-groups is <br>in increasing order, it forms a valid grouping.<br></span><span style="font-size: 18px;">Other valid grouping are {"1", "119"}, {"1","1","19"}, 
{"1","1","1","9"}, {"11","19"}, {"111","9"} and {"1119"}
are six other valid groupings.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: <br></strong>str = "12"
<strong>Output: <br></strong>2
<strong>Explanation: <br></strong>{"1","2"} and {"12"} are two valid groupings.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>TotalCount()</strong>&nbsp;which takes the string <strong>str </strong>as input parameter and returns total possible groupings.<br></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;O(N<sup>3</sup>)</strong> where N is the length of the string.<br><strong>Expected Space Complexity: O(N<sup>2</sup>)</strong></span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 100<br>str<sub>i&nbsp;</sub>∈ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;