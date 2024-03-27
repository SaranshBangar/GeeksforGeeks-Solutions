<h2><a href="https://www.geeksforgeeks.org/problems/recursively-print-all-sentences-that-can-be-formed-from-list-of-word-lists/1?page=1&difficulty=Easy,Medium&status=unsolved&sortBy=accuracy">Recursively print all sentences that can be formed from list of word lists</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a list of word <strong>lists </strong>of size&nbsp;&nbsp;<strong>M * N</strong>.&nbsp;The task is&nbsp;to return all sentences possible taking one word from a list at a time via recursion.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span><br>
<span style="font-size:18px"><strong>Input: </strong></span></p>

<pre><span style="font-size:18px">L = {{"you", "we"},
     {"have", "are"},
<strong>Output: 
</strong>{{you have}
{you are}
{we have}
{we are}}
</span><span style="font-size:18px"><strong>Explanation:</strong>
Consider every every word from the list and form
sentences with every other words, taking one word from a list .

<strong>Note: </strong>You need to maintain the order of the sentences.

</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>sentences()</strong>&nbsp;which takes a matrix&nbsp;of strings as input and returns a matrix of string containing all possible sentences.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(M<sup>N</sup>)<br>
<strong>Expected Auxiliary Space:</strong> O(M<sup>N</sup>)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= M, N&nbsp;&lt;= 6<br>
'a'&nbsp;&lt;= sentence[i][j] &lt;= 'z'</span></p>
</div>