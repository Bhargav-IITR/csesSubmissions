<h2><a href="https://cses.fi/problemset/task/1635">Coin Combinations I</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18409348](https://cses.fi/problemset/result/18409348/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>Consider a money system consisting of <span class="math math-inline">n</span> coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ways you can produce a money sum <span class="math math-inline">x</span> using the available coins.</p>
<p>For example, if the coins are <span class="math math-inline">\{2,3,5\}</span> and the desired sum is <span class="math math-inline">9</span>, there are <span class="math math-inline">8</span> ways:</p>
<ul>
<li><span class="math math-inline">2+2+5</span></li>
<li><span class="math math-inline">2+5+2</span></li>
<li><span class="math math-inline">5+2+2</span></li>
<li><span class="math math-inline">3+3+3</span></li>
<li><span class="math math-inline">2+2+2+3</span></li>
<li><span class="math math-inline">2+2+3+2</span></li>
<li><span class="math math-inline">2+3+2+2</span></li>
<li><span class="math math-inline">3+2+2+2</span></li>
</ul>
<h1 id="input">Input</h1>
<p>The first input line has two integers <span class="math math-inline">n</span> and <span class="math math-inline">x</span>: the number of coins and the desired sum of money.</p>
<p>The second line has <span class="math math-inline">n</span> distinct integers <span class="math math-inline">c_1,c_2,\dots,c_n</span>: the value of each coin.</p>
<h1 id="output">Output</h1>
<p>Print one integer: the number of ways modulo <span class="math math-inline">10^9+7</span>.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 100</span></li>
<li><span class="math math-inline">1 \le x \le 10^6</span></li>
<li><span class="math math-inline">1 \le c_i \le 10^6</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>3 9
2 3 5
</pre>
<p>Output:</p>
<pre>8
</pre>
