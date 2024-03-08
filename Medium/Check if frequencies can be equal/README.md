<h2><a href="https://www.geeksforgeeks.org/problems/check-frequencies4211/1">Check if frequencies can be equal</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string <strong>s</strong> which contains only lower alphabetic characters, check if it is possible to remove <strong>at most one</strong> character from this string in such a way that frequency of each distinct character becomes same in the string. R</span><span style="font-size: 18px;">eturn <strong>true</strong> if it is possible to do else return <strong>false</strong>.</span></p>
<p><strong style="font-size: 18px;">Note:&nbsp;</strong><span style="font-size: 18px;">The driver code print 1 if the value returned is true, otherwise 0.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
s = "xyyz"
<strong>Output:</strong> <br>1 
<strong>Explanation:</strong> <br>Removing one 'y' will make frequency of each character to be 1.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
s = "xxxxyyzz"
<strong>Output:</strong> <br>0
<strong>Explanation:</strong> <br>Frequency can not be made same by removing at most one character.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task: &nbsp;</strong><br>You dont need to read input or print anything. Complete the function<strong> sameFreq() </strong>which takes a string as input parameter and returns a boolean value denoting if same frequency is possible or not.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(|s|)&nbsp;<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= |s|&nbsp;&lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;