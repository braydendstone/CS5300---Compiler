.globl main
.code
main:
j start
start: 
li $s7, 0
move $s6, $gp
addi $s6, $s6, 0
sw $s7, 0($s6)
WHILE0: 
move $s7, $gp
addi $s7, $s7, 0
lw $s6, 0($s7)
li $s5, 10
slt $s7, $s6, $s5
beq $s7, $0, WHILE0_END
move $s5, $gp
addi $s5, $s5, 0
lw $s7, 0($s5)
move $a0, $s7
li $v0, 1
syscall
move $s6, $gp
addi $s6, $s6, 0
lw $s5, 0($s6)
li $s4, 1
add $s6, $s5, $s4
move $s4, $gp
addi $s4, $s4, 0
sw $s6, 0($s4)
j WHILE0
WHILE0_END:
.data
.asciiz
