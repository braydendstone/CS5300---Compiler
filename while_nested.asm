.globl main
.code
main:
j start
start: 
li $s7, 0
move $s6, $gp
addi $s6, $s6, 0
sw $s7, 0($s6)
li $s6, 0
move $s7, $gp
addi $s7, $s7, 4
sw $s6, 0($s7)
WHILE0: 
move $s6, $gp
addi $s6, $s6, 0
lw $s7, 0($s6)
li $s5, 6
sle $s6, $s7, $s5
beq $s6, $0, WHILE0_END
WHILE1: 
move $s5, $gp
addi $s5, $s5, 4
lw $s6, 0($s5)
move $s7, $gp
addi $s7, $s7, 0
lw $s5, 0($s7)
sle $s7, $s6, $s5
beq $s7, $0, WHILE1_END
move $s5, $gp
addi $s5, $s5, 0
lw $s7, 0($s5)
move $s6, $gp
addi $s6, $s6, 4
lw $s5, 0($s6)
move $a0, $s7
li $v0, 1
syscall
la $a0, STR0
li $v0, 4
syscall
move $a0, $s5
li $v0, 1
syscall
li $a0, 32
li $v0, 11
syscall
move $s4, $gp
addi $s4, $s4, 4
lw $s6, 0($s4)
li $s3, 1
add $s4, $s6, $s3
move $s3, $gp
addi $s3, $s3, 4
sw $s4, 0($s3)
j WHILE1
WHILE1_END:
li $a0, 10
li $v0, 11
syscall
move $s4, $gp
addi $s4, $s4, 0
lw $s3, 0($s4)
addi $s3, $s3, 1
move $s4, $gp
addi $s4, $s4, 0
sw $s3, 0($s4)
li $s4, 0
move $s3, $gp
addi $s3, $s3, 4
sw $s4, 0($s3)
j WHILE0
WHILE0_END:
.data
.asciiz
STR0: ":"
