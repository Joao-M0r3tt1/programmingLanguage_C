/*
en-US: EXAMPLE_06.C - Example 06. Towers of Hanoi 
- Statement: Move all disks from tower A to tower C, using tower B as maneuver space.

Restrictions:
     - Move one disc at a time.
     - Do not place a disc on top of a smaller one.
     - Transfer disks from one tower to another immediately.
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Torres de Hanói
- Enunciado: Mover todos os discos da torre A para a torre C, usando a torre B como espaço de manobra.

Restrições:
    - Mover um disco de cada vez.
    - Não colocar um disco sobre outro menor.
    - Transferir os discos de uma torre para outra, imediatamente.
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-05.pdf
*/

/* 
Recursive solution:

Move n-1 from A to B
Move 1 from A to C
Move n-1 from B to C
*/