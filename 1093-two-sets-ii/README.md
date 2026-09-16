<h2><a href="https://cses.fi/problemset/task/1093">Two Sets II</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18765041](https://cses.fi/problemset/result/18765041/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>Your task is to count the number of ways numbers <span class="math math-inline">1,2,\ldots,n</span> can be divided into two sets of equal sum.</p>
<p>For example, if <span class="math math-inline">n=7</span>, there are four solutions:</p>
<ul>
<li><span class="math math-inline">\{1,3,4,6\}</span> and <span class="math math-inline">\{2,5,7\}</span></li>
<li><span class="math math-inline">\{1,2,5,6\}</span> and <span class="math math-inline">\{3,4,7\}</span></li>
<li><span class="math math-inline">\{1,2,4,7\}</span> and <span class="math math-inline">\{3,5,6\}</span></li>
<li><span class="math math-inline">\{1,6,7\}</span> and <span class="math math-inline">\{2,3,4,5\}</span></li>
</ul>
<h1 id="input">Input</h1>
<p>The only input line contains an integer <span class="math math-inline">n</span>.</p>
<h1 id="output">Output</h1>
<p>Print the answer modulo <span class="math math-inline">10^9+7</span>.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 500</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>7
</pre>
<p>Output:</p>
<pre>4
</pre>
