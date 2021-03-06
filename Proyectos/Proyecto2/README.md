Proyecto 1
-------------------------------------------------------------------------------------------------------------------

Problema:  

"Summer is finally here: time to relax, have some fun, go outside and enjoy the nice weather!" says Alice, a very dedicated Ranger working in a popular National Park. During the summer, lots of families take some time off to camp there and have a good time, and it is Alice's job to accommodate the visitors.  
  
Alice is in charge of one of the many camps around the park. The camp can be described as a matrix of size N x N, where each cell has enough space for at most one tent. In order to arrange the families in the camp, there are several regulations that Alice needs to follow:  

    Only families with 1, 2 or 3 members are allowed in the camp. Also, each tent can contain members of only one family, and families cannot be split across multiple tents.
    For security reasons, Alice doesn't want the rows or columns to be too crowded or too empty, so she wants exactly 3 members in each row and column.
    Also, according to the park's safety policies, there shouldn't be more than 2 tents in any row or column.

  
Additionally, Alice knows in advance that at least X three-member families will be visiting the camp, and that there will be enough one- or two-member families to fill the rest of the camp.  
  
For example, these are valid arrangements for N = 3 and X = 0:  
  
1  2  0  |  3  0  0  
0  1  2  |  0  1  2  
2  0  1  |  0  2  1  
  
These are not valid arrangements for N = 3 and X = 1:  
  
1  2  0  |  0  3  0  |  1  2  0  |  1  1  1  
0  1  2  |  3  0  0  |  0  2  0  |  1  1  1  
2  0  1  |  0  0  0  |  2  0  1  |  1  1  1  
  
    The first one is not valid because there should be at least one three-member family.
    The second example is not valid because the number of persons in the third row (and column) is not three.
    The third one is invalid because there are more than three members in the second column (and fewer than three in the second row).
    The last example contains more than two tents per row or column.

Finally, Alice likes to keep things interesting. She would like to know how many different arrangements are possible given N and X.  
  
Two arrangements A and B are considered different, if a cell in one arrangement contains a tent, but the same cell in the other arrangement doesn't; or if there is a tent in the same cell of both arrangements, but the number of members in that cell in A is different than the number of members in the same cell in B.  
  
Input  
  
The first line of the input contains T, the number of test cases. T test cases follow. Each test case consists of exactly one line with two integers N and X corresponding to the number of rows (and columns) in Alice's camp and the minimum number of three-member families, respectively.  
Output  
  
For each test case, output one line containing "Case #X: Y", where X is the test case number (starting from 1) and Y is the number of possible arrangements.  
  
The answer may be huge, so output the answer modulo 10^9 + 7.  
Limits  
  
1 ≤ T ≤ 200.  
0 ≤ X ≤ N.  
Small dataset  
1 ≤ N ≤ 20.  
Large dataset  
1 ≤ N ≤ 10^6.  
  
Sample:  
  
Input  
  
3  
2 2  
3 1  
15 0  

Output  	
  
Case #1: 2  
Case #2: 24  
Case #3: 738721209  
  
In case #1, you have two different valid arrangements:  
  
0 3  |  3 0  
3 0  |  0 3  

Analysis:  
<object data="https://github.com/HumbertoM10/pavanzada-2018/raw/master/Proyectos/Proyecto2/Readme%20(Word).pdf" type="application/pdf" width="700px" height="700px">
    <embed src="https://github.com/HumbertoM10/pavanzada-2018/raw/master/Proyectos/Proyecto2/Readme%20(Word).pdf">
        This browser does not support PDFs. Please download the PDF to view it: <a href="https://github.com/HumbertoM10/pavanzada-2018/raw/master/Proyectos/Proyecto2/Readme%20(Word).pdf">Download PDF</a>.</p>
    </embed>
</object>
