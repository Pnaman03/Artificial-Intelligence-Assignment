# Artificial intelligence Assignment

### Input File : [input_for_all4ques.txt](https://github.com/Pnaman03/Artificial-Intelligence-Assignment/blob/master/input_for_all4ques.txt)

## Assignment 1 : 8 Queen problem using UCS.

Implemented using queue and pushing childs and exploring again in the order of push i.e BFS since cost is same so this is UCS only.

**Code File Name :** [Assignment1(8queenUCS).cpp](https://github.com/Pnaman03/Artificial-Intelligence-Assignment/blob/master/Assignment1(8queenUCS).cpp)\
**Complilation Instruction :**  g++ Assignment1(8queenUCS).cpp\
**Output File :** [output_8queen_UCS.txt](https://github.com/Pnaman03/Artificial-Intelligence-Assignment/blob/master/output_8queen_UCS.txt)\
**Run Instruction :** ./a.out\
**State space File :**  [Assigment1(doc file).doc](https://github.com/Pnaman03/Artificial-Intelligence-Assignment/blob/master/Assigment1(doc%20file).doc) 

<br/><br/>
## Assignment 2 : 8 Queen problem using A-star algorithm

8 Queen problem using A-star algoritm with suitable huristic function.(implemented using priority queue with priority as sum of g(n) and h(n))

**Heuristic Function** : No. of feasible posution/blocks in current state

**Code File Name :** [Assignment2(8queenAstaralgo).cpp](https://github.com/Pnaman03/Artificial-Intelligence-Assignment/blob/master/Assignment2(8queenAstaralgo).cpp)\
**Complilation Instruction :**    g++ Assignment2(8queenAstaralgo).cpp\
**Run Instruction :** ./a.out\
**Output File :**[output_8quuen_A*algo.txt](https://github.com/Pnaman03/Artificial-Intelligence-Assignment/blob/master/output_8quuen_A*algo)


<br/><br/>
## Assignment 3 : Group n students in 3 groups so that the diversity(i.e absolute differnce of marks) in each group is minimum.

**Chromosome :** array of group integer : first 3 integer represents group representative of their group and 4th intger is the fitness value of that chromosome.\
**Population size :** 50 chromosomes\
**selection and crossover :** selecting two parent by tournament selection and crossing using a random cross over point.\
**mutation :** selecting random y individuals from the cross over population and mutating or changing a single rand group representavi to increase diversity and then replacing old popul. by the new generated and mutated population.

**Code File Name :** [genetic_student_group.cpp](https://github.com/Pnaman03/Artificial-Intelligence-Assignment/blob/master/genetic_student_group.cpp)\
**Complilation Instruction :**    g++ genetic_student_group.cpp\
**Run Instruction :** ./a.out\
**Output File :** [output_genetic_algo.txt](https://github.com/Pnaman03/Artificial-Intelligence-Assignment/blob/master/output_genetic_algo.txt)

<br/><br/>
## Assignment 4 : Game Of Sticks
**(Run on codeblocks or terminal for Interactive interface)**

Game of sticks in which a Player can picks 1,2,3 sticks in one move using Min-Max with Alpha Beta Pruning.\
Need to develop 
1. 1 Player
2. 2 player  
3. AI vs AI 


**Code File Name :** [game_of_sticks.cpp](https://github.com/Pnaman03/Artificial-Intelligence-Assignment/blob/master/game_of_sticks.cpp)\
**Complilation Instruction :**    g++ game_of_sticks.cpp\
**Run Instruction :** ./a.out\
**Output File :**  [output_gameofsticks.txt](https://github.com/Pnaman03/Artificial-Intelligence-Assignment/blob/master/output_gameofsticks.txt)


