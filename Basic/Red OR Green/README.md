<h2><a href="https://www.geeksforgeeks.org/problems/red-or-green5711/1?page=3&difficulty=Basic,Easy&status=unsolved&sortBy=accuracy">Red OR Green</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' stands for Red and 'G' stands for Green.Find out the minimum number of characters you need to change to make the whole string of the same colour.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=5
S="RGRGR"
<strong>Output:</strong>
2
<strong>Explanation:
</strong>We need to change only the 2nd and 
4th(1-index based) characters to 'R', 
so that the whole string becomes 
the same colour.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=7
S="GGGGGGR"
<strong>Output:</strong>
1
<strong>Explanation:
</strong>We need to change only the last 
character to 'G' to make the string 
same-coloured.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>RedOrGreen()&nbsp;</strong>which takes the Integer N and the string&nbsp;S&nbsp;as input parameters and returns the minimum number of characters that have to be swapped to make the string same-coloured.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=10<sup>5</sup><br>
S consists only of characters 'R' and 'G'.</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;