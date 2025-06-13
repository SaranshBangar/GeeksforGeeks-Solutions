<h2><a href="https://www.geeksforgeeks.org/problems/koko-eating-bananas/1">Koko Eating Bananas</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p data-start="120" data-end="259"><span style="font-size: 14pt;">Koko is given an array<strong> <code data-start="87" data-end="94">arr[]</code></strong>, where each element represents a pile of bananas. She has exactly <strong><code data-start="161" data-end="164">k</code></strong> hours to eat all the bananas.</span></p>
<p data-start="261" data-end="337"><span style="font-size: 14pt;">Each hour, Koko can choose one pile and eat up to<strong> <code data-start="315" data-end="318">s</code> </strong>bananas from it.</span></p>
<ul data-start="338" data-end="502">
<li data-start="338" data-end="413"><span style="font-size: 14pt;"> </span>
<p data-start="340" data-end="413"><span style="font-size: 14pt;">If the pile has <strong data-start="356" data-end="368">atleast</strong> <code data-start="369" data-end="372"><strong>s</strong></code> bananas, she eats exactly <strong><code data-start="399" data-end="402">s</code></strong> bananas.</span></p>
<span style="font-size: 14pt;"> </span></li>
<li data-start="414" data-end="502"><span style="font-size: 14pt;"> </span>
<p data-start="416" data-end="502"><span style="font-size: 14pt;">If the pile has fewer than <strong><code data-start="447" data-end="450">s</code></strong> bananas, she eats the entire pile in that hour.</span></p>
<span style="font-size: 14pt;"> </span></li>
</ul>
<p data-start="504" data-end="549"><span style="font-size: 14pt;">Koko can only eat from one pile per hour.</span></p>
<p><span style="font-size: 14pt;"> </span></p>
<p data-start="551" data-end="681"><span style="font-size: 14pt;">Your task is to find the <strong data-start="576" data-end="600">minimum </strong>value of <code data-start="595" data-end="598">s</code> (bananas per hour) such that Koko can finish all the piles within <strong><code data-start="671" data-end="674">k</code> </strong>hours.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span><span style="font-size: 18px;"> </span></strong><span style="font-size: 18px;"><span style="font-size: 14pt;">arr[]</span><span style="font-size: 14pt;"> = [5, 10, 3], k = 4</span>
<strong><span style="font-size: 18px;">Output:</span> </strong>5</span><span style="font-size: 18px;"><br></span><strong><span style="font-size: 14pt;">Explanation: </span></strong><span style="font-size: 18.6667px;">Koko eats at least 5 bananas per hour to finish all piles within 4 hours, as she can consume each pile in 1 + 2 + 1 = 4 hours.</span></pre>
<pre><span style="font-size: 18px;"><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [5, 10, 15, 20], k = 7
<strong>Output:</strong> 10
<strong>Explanation:</strong> At 10 bananas per hour, Koko finishes in 6 hours, just within the limit 7.</span></span></pre>
<p><strong><span style="font-size: 18px;">Constraint:</span></strong><br><span style="font-size: 18px;">1 ≤ arr.size() ≤ 10<sup>5&nbsp;</sup><br>1 ≤ arr[i] ≤ 10</span><sup><span style="font-size: 18px;">6</span></sup><br><span style="font-size: 18px;">arr.size() ≤ k ≤ 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Bloomberg</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Walmart</code>&nbsp;<code>Adobe</code>&nbsp;<code>Arcesium</code>&nbsp;<code>Uber</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search</code>&nbsp;<code>Arrays</code>&nbsp;