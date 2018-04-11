.globl main
.code
main:
j start
start: 
li $s7, 0
move $s6, $gp
addi $s6, $s6, 0
sw $s7, 0($s6)
FOR0:
move $s7, $gp
addi $s7, $s7, 0
lw $s6, 0($s7)
li $s5, 5
sgt $s7, $s6, $s5
beq $s7, $0, FOR0END
move $s6, $gp
addi $s6, $s6, 0
lw $s5, 0($s6)
move $a0, $s5
li $v0, 1
syscall
la $a0, STR0
li $v0, 4
syscall
move $s4, $gp
addi $s4, $s4, 0
lw $s6, 0($s4)
li $s3, 1
add $s4, $s6, $s3
move $s3, $gp
addi $s3, $s3, 0
sw $s4, 0($s3)
FOR0END:
.data
.asciiz
STR0: " \n"
