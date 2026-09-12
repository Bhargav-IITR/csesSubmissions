<h2><a href="https://cses.fi/problemset/task/1634">Minimizing Coins</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18408718](https://cses.fi/problemset/result/18408718/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>Consider a money system consisting of <span class="math math-inline">n</span> coins. Each coin has a positive integer value. Your task is to produce a sum of money <span class="math math-inline">x</span> using the available coins in such a way that the number of coins is minimal.</p>
<p>For example, if the coins are <span class="math math-inline">\{1,5,7\}</span> and the desired sum is <span class="math math-inline">11</span>, an optimal solution is <span class="math math-inline">5+5+1</span> which requires <span class="math math-inline">3</span> coins.</p>
<h1 id="input">Input</h1>
<p>The first input line has two integers <span class="math math-inline">n</span> and <span class="math math-inline">x</span>: the number of coins and the desired sum of money.</p>
<p>The second line has <span class="math math-inline">n</span> distinct integers <span class="math math-inline">c_1,c_2,\dots,c_n</span>: the value of each coin.</p>
<h1 id="output">Output</h1>
<p>Print one integer: the minimum number of coins. If it is not possible to produce the desired sum, print <span class="math math-inline">-1</span>.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 100</span></li>
<li><span class="math math-inline">1 \le x \le 10^6</span></li>
<li><span class="math math-inline">1 \le c_i \le 10^6</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>3 11
1 5 7
</pre>
<p>Output:</p>
<pre>3
</pre>
