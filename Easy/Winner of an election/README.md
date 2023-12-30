<h2><a href="https://www.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1">Winner of an election</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array of <strong>n</strong> names <strong>arr</strong> of candidates in an election, where each name is </span><span style="font-size: 18px;">a string of <strong>lowercase </strong>characters</span><span style="font-size: 18px;">. A candidate name in the array represents a vote casted to the candidate. Print the name of the candidate that received the <strong>maximum count</strong> of votes. If there is a <strong>draw </strong>between two candidates, then print <strong>lexicographically smaller</strong> name.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 13
arr[] = {john,johnny,jackie,johnny,john 
jackie,jamie,jamie,john,johnny,jamie,
johnny,john}
<strong>Output: </strong>john 4<strong>
Explanation: </strong>john has 4 votes casted for 
him, but so does johny. john is 
lexicographically smaller, so we print 
john and the votes he received.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 3
arr[] = {andy,blake,clark}
<strong>Output: </strong>andy 1<strong>
Explanation: </strong>All the candidates get 1 
votes each. We print andy as it is 
lexicographically smaller.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You only need to complete the function&nbsp;<strong>winner()</strong>&nbsp;that takes an array of strings&nbsp;<strong>arr</strong>, and length of <strong>arr</strong>&nbsp;<strong>n</strong> as parameters and returns an <strong>array of string </strong>of <strong>length 2</strong>. First element of the array should be the <strong>name </strong>of the candidate and second element should be the <strong>number of votes </strong>that candidate got in <strong>string format</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n&nbsp;&lt;= 10<sup>5<br></sup></span><span style="font-size: 18px;">1 &lt;= |arr<sub>i</sub>| &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Adobe</code>&nbsp;<code>Atlassian</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;