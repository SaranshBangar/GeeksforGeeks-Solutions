<h2><a href="https://www.geeksforgeeks.org/problems/jon-and-string5412/1?page=5&category=Sorting&status=unsolved&sortBy=submissions">Sort string</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string S, sort it in the following manner. Sorted string must contain a vowel as first letter and a consonant as next letter and so on OR a consonant as first letter and a vowel as next letter and so on, depending on the string. If there is no vowel left then print the remaining consonant in ascending order and vice versa.&nbsp;</span></p>

<p><span style="font-size:18px">Note: Order of vowel must be a-&gt;e-&gt;i-&gt;o-&gt;u and order of consonant must be b-&gt;c-&gt;d... and so on.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong> </span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> abcdei </span>

<span style="font-size:18px"><strong>Output:</strong> abecid </span>

<span style="font-size:18px"><strong>Explanation:</strong> 'a' (Vowel) came first so the
pattern of sorted string is vcvcvcvc... </span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong> </span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> bcadefgh</span>

<span style="font-size:18px"><strong>Output:</strong> bacedfgh </span>

<span style="font-size:18px"><strong>Explanation:</strong> 'b' (consonant) came first so
the pattern of sorted string is cvcvcvcv....</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task: </strong><br>
You don't need to read input or print anything. Your task is to complete the function SortedString() which takes the string s as input parameters and returns the sorted string. </span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Constraints:</span></strong></p>

<p><span style="font-size:18px">1&lt;=|S|&lt;=1000000</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;