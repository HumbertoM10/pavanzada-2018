Proyecto 3
-------------------------------------------------------------------------------------------------------------------

Problema:  
  
Nim is a well-known combinatorial game, based on removing stones from piles. In this problem, we'll deal with a similar game, which we'll call Dual Nim. The rules of this game are as follows:  
  
    Initially, there are N piles of stones, numbered 1 through N. The i-th pile contains ai stones.
    The players take alternate turns. If the bitwise XOR of all piles equals 0 before a player's turn, then that player wins the game.
    In his/her turn, a player must choose one of the remaining piles and remove it. (Note that if there are no piles, that player already won.)
  
Decide which player wins, given that both play optimally.  
Input  
  
    The first line of the input contains an integer T - the number of test cases.
    The first line of each test case contains N - the number of piles.
    The following line contains N space-separated integers a1,..,aN - the sizes of piles.
  
Output  
  
For each test case, output one string on a separate line - "First" (without quotes) if the first player wins, "Second" (without quotes) if the second player wins.  
Constraints  
  
    1 ≤ T ≤ 10
    1 ≤ N ≤ 500
    1 ≤ ai ≤ 500
  
Example  
  
Input:  
3  
4  
1 2 4 8  
3  
2 3 3  
5  
3 3 3 3 3  
  
Output:  
First  
Second  
Second  
  
Analysis:   
<object data="https://github.com/HumbertoM10/pavanzada-2018/raw/master/Proyectos/Proyecto2/Readme%20(Word).pdf" type="application/pdf" width="700px" height="700px">
    <embed src="https://github.com/HumbertoM10/pavanzada-2018/raw/master/Proyectos/Proyecto3/Readme%20(PDF).pdf">
        This browser does not support PDFs. Please download the PDF to view it: <a href="https://github.com/HumbertoM10/pavanzada-2018/raw/master/Proyectos/Proyecto2/Readme%20(Word).pdf">Download PDF</a>.</p>
    </embed>
</object>