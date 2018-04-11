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
li $s6, 2
rem $s5, $s7, $s6
li $s7, 0
seq $s6, $s5, $s7
beq $s6, $0, IF0EL0
move $s5, $gp
addi $s5, $s5, 0
lw $s7, 0($s5)
move $a0, $s7
li $v0, 1
syscall
j IF0_END
IF0EL0:
IF0_END:
move $s4, $gp
addi $s4, $s4, 0
lw $s5, 0($s4)
li $s3, 1
add $s4, $s5, $s3
move $s3, $gp
addi $s3, $s3, 0
sw $s4, 0($s3)
j WHILE0
WHILE0_END:
.data
.asciiz
