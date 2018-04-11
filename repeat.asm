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
la $a0, STR0
li $v0, 4
syscall
move $a0, $s6
li $v0, 1
syscall
la $a0, STR1
li $v0, 4
syscall
move $s5, $gp
addi $s5, $s5, 0
lw $s7, 0($s5)
li $s4, 1
add $s5, $s7, $s4
move $s4, $gp
addi $s4, $s4, 0
sw $s5, 0($s4)
move $s5, $gp
addi $s5, $s5, 0
lw $s4, 0($s5)
li $s7, 5
sgt $s5, $s4, $s7
beq $s5, $0, WHILE0
WHILE1: 
move $s7, $gp
addi $s7, $s7, 0
lw $s5, 0($s7)
la $a0, STR2
li $v0, 4
syscall
move $a0, $s5
li $v0, 1
syscall
la $a0, STR3
li $v0, 4
syscall
move $s4, $gp
addi $s4, $s4, 0
lw $s7, 0($s4)
li $s3, 1
add $s4, $s7, $s3
move $s3, $gp
addi $s3, $s3, 0
sw $s4, 0($s3)
move $s4, $gp
addi $s4, $s4, 0
lw $s3, 0($s4)
li $s7, 5
sgt $s4, $s3, $s7
beq $s4, $0, WHILE1
WHILE2: 
move $s7, $gp
addi $s7, $s7, 0
lw $s4, 0($s7)
li $s3, 5
slt $s7, $s4, $s3
beq $s7, $0, WHILE2_END
move $s3, $gp
addi $s3, $s3, 0
lw $s7, 0($s3)
la $a0, STR4
li $v0, 4
syscall
move $a0, $s7
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
j WHILE2
WHILE2_END:
.data
.asciiz
STR0: "i: "
STR1: " \n"
STR2: "should only happen once "
STR3: " \n"
STR4: "should not happen i="
