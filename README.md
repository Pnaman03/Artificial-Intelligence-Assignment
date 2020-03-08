# Artificial intelligence Assignment

Assignment 1 :
8 queen problem using UCS.
(implementing using queue and pushing childs and exploring again in the order of push i.e BFS since cost is same so this is UCS only) 

Assignment 2 :
8 Queen problem using A-star algoritm with suitable huristic function.(implemented using priority queue with priority as sum of g(n) and h(n))
Heuristic Function : No. of feasible posution/blocks in current state

Assignment 3 :
Group n students in 3 groups so that the diversity(i.e absolute differnce of marks) in each group is minimum.
chromosome: array of group integer : first 3 integer represents group representative of their group and 4th intger is the fitness value of that chromosome.
population size : 50 chrosomes
selection and crossover :selecting two parent by tournament selection and crossing using a random cross over point.
mutation : selecting random y individuals from the cross over population and mutating or changing a single rand group representavi to increase diversity and then replacing old popul. by the new generated and mutated population.


