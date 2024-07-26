<h2><a href="https://www.geeksforgeeks.org/problems/riyas-test1450/1?page=1&category=Strings&status=unsolved&sortBy=accuracy">Same frequency in two halves</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string S, find whether it fulfills the following criteria.&nbsp;<br>
When split from the middle, the string should give two halves having the same characters and same frequency of each character.&nbsp;If the number of characters in the string is odd, ignore the middle character.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>S = "abcdbca"
<strong>Output:</strong> YES
<strong>Explanation: </strong>The string has length 7 which
is odd, hence we ignore the middle character
'd'. The frequency of 'a', 'b' and 'c' is 
same in both the halves. Hence, the string
fulfills the given criteria. </span></pre>

<p><br>
<span style="font-size:18px"><strong>â€‹Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>S = "abbaab"
<strong>Output:</strong> NO
<strong>Explanation:</strong> The frequency of 'a' in both
the halves is different. Hence, the string
does not fulfill the given criteria. </span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>passed()</strong> which takes the string S as input parameter and returns a boolean value denoting whether it fulfills the given criteria or not.&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(|S|)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=|S|&lt;=10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;