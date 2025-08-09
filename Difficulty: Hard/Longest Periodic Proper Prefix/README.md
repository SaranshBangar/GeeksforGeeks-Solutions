<h2><a href="https://www.geeksforgeeks.org/problems/longest-periodic-proper-prefix/1">Longest Periodic Proper Prefix</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18.6667px;">Given a string <strong>s</strong>, find the length of <strong>longest periodic proper prefix</strong> of s. If no such prefix exists, return <strong>-1</strong>.</span><span style="font-size: 18.6667px;"><br></span><span style="font-size: 18.6667px;">A <strong>periodic proper prefix</strong> is a non empty prefix of s (but not the whole string), such that repeating this prefix enough times produces a string that <strong>starts</strong> with <strong>s</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "aaaaaa"
<strong>Output:</strong> 5
<strong>Explanation:</strong> Repeating the proper prefix "aaaaa" forms "aaaaaaaaaa...", which contains "aaaaa" as a prefix. No longer proper prefix satisfies this.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> s = "abcab"
<strong>Output:</strong> 3
<strong>Explanation:</strong> Repeating the proper prefix "abc" forms "abcabc., which contains "abcab" as a prefix. No longer proper prefix satisfies this.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> s = "ababd"
<strong>Output:</strong> -1
<strong>Explanation:</strong> No proper prefix satisfying the given condition.<br></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ s.size() ≤ 10<sup>5</sup><br>s consists of lowercase English alphabets</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Algorithms</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Hash</code>&nbsp;