<h2><a href="https://www.geeksforgeeks.org/problems/water-the-plants--170646/1">Water the plants</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;"><span style="font-size: 18px;">A gallery with plants is divided into <strong>n</strong> parts, numbered 0, 1, 2, 3, ..., n-1. There are provisions for attaching water sprinklers in every division. A sprinkler with range <strong>x</strong> at division <strong>i</strong> can water all divisions from <strong>i-x</strong> to <strong>i+x</strong>.</span></span></p>
<p><span style="font-size: 18px;"><span style="font-size: 18px;">Given an array <strong>gallery[]</strong> consisting of <strong>n</strong> integers, where <strong>gallery[i]</strong> is the range of the sprinkler at partition <strong>i</strong> (a power of <strong>-1</strong> indicates no sprinkler attached), return the <strong>minimum </strong>number of sprinklers that need to be turned on to water the entire gallery. If there is <strong>no possible way </strong>to water the full length using the given sprinklers, print <strong>-1</strong>.</span></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 6
gallery[] = {-1, 2, 2, -1, 0, 0}
<strong>Output:
</strong>2
<strong>Explanation: <br></strong>Sprinklers at index 2 and 5
can water the full gallery, span of
sprinkler at index 2 = [0,4] and span
of sprinkler at index 5 = [5,5].</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 9
gallery[ ] = {2, 3, 4, -1, 2, 0, 0, -1, 0}
<strong>Output:
</strong>-1
<strong>Explanation: <br></strong>No sprinkler can throw water
at index 7. Hence all plants cannot be
watered.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 3:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 9
gallery[ ] = {2, 3, 4, -1, 0, 0, 0, 0, 0}
<strong>Output:
</strong>3
<strong>Explanation: <br></strong>Sprinkler at indexes 2, 7 and
8 together can water all plants.</span></pre>
<p><span style="font-size: 18px;"><strong>Your task:</strong><br>You do not have to take any input or print anything. Your task is to complete the function <strong>min_sprinklers()</strong>&nbsp;which takes the array&nbsp;<strong>gallery[ ]</strong>&nbsp;and the integer&nbsp;<strong>n</strong>&nbsp;as input parameters and returns the&nbsp;<strong>minimum&nbsp;</strong>number of sprinklers that need to be turned on to water the entire gallery.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O( nlog(n) )<br><strong>Expected Auxiliary Space:</strong> O( n )</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤&nbsp;10<sup>5</sup><br>gallery[i] ≤&nbsp;50</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Greedy</code>&nbsp;<code>Sorting</code>&nbsp;<code>Algorithms</code>&nbsp;