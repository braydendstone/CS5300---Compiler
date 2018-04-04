.globl main
.code
main:
j start
start: 
li $s7, 20
move $s6, $gp
addi $s6, $s6, 0
sw $s7, 0($s6)
WHILE0: 
move $s7, $gp
addi $s7, $s7, 0
lw $s6, 0($s7)
lw $s5, 0($gp)
li $s6, 25
slt $s7, $s5, $s6
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
lw $s4, 0($gp)
li $s5, 1
add $s6, $s4, $s5
move $s4, $gp
addi $s4, $s4, 0
sw $s6, 0($s4)
WHILE1: 
move $s6, $gp
addi $s6, $s6, 0
lw $s4, 0($s6)
lw $s5, 0($gp)
li $s4, 23
seq $s6, $s5, $s4
beq $s6, $0, WHILE1_END
la $a0, STR0
li $v0, 4
syscall
move $s5, $gp
addi $s5, $s5, 0
lw $s6, 0($s5)
lw $s4, 0($gp)
li $s6, 1
add $s5, $s4, $s6
move $s4, $gp
addi $s4, $s4, 0
sw $s5, 0($s4)
j WHILE1
WHILE1_END:
j WHILE0
WHILE0_END:
.data
.asciiz
STR0: "innter while"
