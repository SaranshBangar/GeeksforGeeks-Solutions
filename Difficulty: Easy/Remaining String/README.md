<h2><a href="https://www.geeksforgeeks.org/problems/remaining-string3515/1">Remaining String</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string <strong>s</strong> without spaces, a character <strong>ch </strong>and an integer <strong>count. </strong>Your task is to return the substring that remains after the character <strong>ch </strong>has appeared <strong>count </strong>number of times.<br><strong>Note:&nbsp;</strong> Assume upper case and lower case alphabets are different. “ ”(<strong>Empty string</strong>) should be returned if it is not possible, or the remaining substring is empty.<br></span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>s = "Thisisdemostring", ch = 'i', count = 3
<strong>Output:</strong> ng
<strong>Explanation: </strong>The remaining substring of s after the 3rd
occurrence of 'i' is "ng", hence the output is ng.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>s = "Thisisdemostri", ch = 'i', count = 3
<strong>Output: </strong>" "
<strong>Explanation:</strong> The 3rd occurence of 'i' is at the last index. In this case the remaining substring is empty, hence we return empty string.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>s = "abcd", ch = 'x', count = 2
<strong>Output: </strong>" "
<strong>Explanation:</strong> The character x is not present in the string, hence we return empty string.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(|s|)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;= s.length()&lt;=10<sup>5</sup><br>1&lt;=count&lt;=s.length()<br>s[i] is both upper case and lower case</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Oracle</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;