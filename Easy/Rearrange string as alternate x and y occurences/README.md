<h2><a href="https://www.geeksforgeeks.org/problems/rearrange-string-as-alternate-x-and-y-occurences3835/1?page=4&difficulty=School,Basic,Easy&status=unsolved&sortBy=latest">Rearrange string as alternate x and y occurences</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 20px;">Given a binary string <strong>s</strong> and two integers <strong>x</strong> and <strong>y</strong>. Arrange the given string in such a way so that '0' comes X-times then '1' comes Y-times and so on until one of the '0' or '1' is finished. Then concatenate the rest of the string and find the final string.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
X = 1, Y = 1, S = "0011"
<strong>Output: </strong>"0101"
<strong>Explanation:</strong> we put 1 '0' and 1 '1'
alternatively.
</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
X = 1, Y = 1, S = "1011011"
<strong>Output:</strong> "0101111"
<strong>Explanation:</strong> We put '0' and '1' 
alternatively and in last we have to
put all '1' as there is no '0' left.</span>
</pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>arrangeString()</strong>&nbsp;which takes the string <strong>S</strong> and <strong>X, Y&nbsp;</strong>as inputs, and returns modified string.<br><br><strong>Expected Time Complexity:</strong>&nbsp;O(|S|)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)<br><br><strong>Constraints:</strong><br>1 ≤ X, Y ≤ 10<sup>3</sup><br>1 ≤ |S| ≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;