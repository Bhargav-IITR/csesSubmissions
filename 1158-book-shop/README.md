<h2><a href="https://cses.fi/problemset/task/1158">Book Shop</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18468296](https://cses.fi/problemset/result/18468296/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>You are in a book shop which sells <span class="math math-inline">n</span> different books. You know the price and number of pages of each book.</p>
<p>You have decided that the total price of your purchases will be at most <span class="math math-inline">x</span>. What is the maximum number of pages you can buy? You can buy each book at most once.</p>
<h1 id="input">Input</h1>
<p>The first input line contains two integers <span class="math math-inline">n</span> and <span class="math math-inline">x</span>: the number of books and the maximum total price.</p>
<p>The next line contains <span class="math math-inline">n</span> integers <span class="math math-inline">h_1,h_2,\ldots,h_n</span>: the price of each book.</p>
<p>The last line contains <span class="math math-inline">n</span> integers <span class="math math-inline">s_1,s_2,\ldots,s_n</span>: the number of pages of each book.</p>
<h1 id="output">Output</h1>
<p>Print one integer: the maximum number of pages.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 1000</span></li>
<li><span class="math math-inline">1 \le x \le 10^5</span></li>
<li><span class="math math-inline">1 \le h_i, s_i \le 1000</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>4 10
4 8 5 3
5 12 8 1
</pre>
<p>Output:</p>
<pre>13
</pre>
<p>Explanation: You can buy books 1 and 3. Their price is <span class="math math-inline">4+5=9</span> and the number of pages is <span class="math math-inline">5+8=13</span>.</p>

