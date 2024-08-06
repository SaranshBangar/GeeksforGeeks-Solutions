<h2><a href="https://www.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1">Validate an IP Address</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given a string <strong>str </strong>in the form of an IPv4 Address. Your task is to validate an IPv4 Address, if it is valid return <strong>true</strong> otherwise return <strong>false</strong>.</span></p>
<blockquote>
<p><span style="font-size: 18px;"><strong><a href="http://en.wikipedia.org/wiki/IP_address">IPv4 addresses</a></strong> are canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1</span></p>
<p><span style="font-size: 18px;">A<strong> valid IPv4 Address</strong> is of the form x1.x2.x3.x4 where <strong>0 &lt;= (x1, x2, x3, x4) &lt;= 255</strong>. Thus, we can write the generalized form of an IPv4 address as (0-255).(0-255).(0-255).(0-255)</span></p>
</blockquote>
<p><span style="font-size: 18px;">Note: Here we are considering numbers only from 0 to 255 and any additional <strong>leading zeroes</strong> will be considered invalid.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>str = 222.111.111.111
<strong>Output: </strong>true
<strong>Explanation:</strong> Here, the IPv4 address is as per the criteria mentioned and also all four decimal numbers lies in the mentioned range.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>str<strong> </strong>= 5555..555
<strong>Output: </strong>false<strong>
Explanation: </strong>5555..555 is not a valid. IPv4 address, as the middle two portions are missing.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=str.length() &lt;=15</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Qualcomm</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;