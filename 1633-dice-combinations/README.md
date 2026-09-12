<h2><a href="https://cses.fi/problemset/task/1633">Dice Combinations</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18408097](https://cses.fi/problemset/result/18408097/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>Your task is to count the number of ways to construct sum <span class="math math-inline">n</span> by throwing a dice one or more times. Each throw produces an outcome between <span class="math math-inline">1</span> and  <span class="math math-inline">6</span>.</p>
<p>For example, if <span class="math math-inline">n=3</span>, there are <span class="math math-inline">4</span> ways:</p>
<ul>
<li><span class="math math-inline">1+1+1</span></li>
<li><span class="math math-inline">1+2</span></li>
<li><span class="math math-inline">2+1</span></li>
<li><span class="math math-inline">3</span></li>
</ul>
<h1 id="input">Input</h1>
<p>The only input line has an integer <span class="math math-inline">n</span>.</p>
<h1 id="output">Output</h1>
<p>Print the number of ways modulo <span class="math math-inline">10^9+7</span>.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 10^6</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>3
</pre>
<p>Output:</p>
<pre>4
</pre>
