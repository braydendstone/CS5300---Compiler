.globl main
.code
main:
j start
start: 
li $s7, 10
move $s6, $gp
addi $s6, $s6, 0
sw $s7, 0($s6)
FOR0:
move $s7, $gp
addi $s7, $s7, 0
lw $s6, 0($s7)
li $s5, 5
slt $s7, $s6, $s5
bne $s7, $0, FOR0END
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
sub $s4, $s6, $s3
move $s3, $gp
addi $s3, $s3, 0
sw $s4, 0($s3)
j FOR0
FOR0END:
li $s3, 4
move $s4, $gp
addi $s4, $s4, 4
sw $s3, 0($s4)
FOR1:
move $s3, $gp
addi $s3, $s3, 4
lw $s4, 0($s3)
li $s6, 0
slt $s3, $s4, $s6
bne $s3, $0, FOR1END
move $s4, $gp
addi $s4, $s4, 4
lw $s6, 0($s4)
li $a0, 32
li $v0, 11
syscall
move $a0, $s6
li $v0, 1
syscall
move $s2, $gp
addi $s2, $s2, 4
lw $s4, 0($s2)
li $s1, 1
sub $s2, $s4, $s1
move $s1, $gp
addi $s1, $s1, 4
sw $s2, 0($s1)
j FOR1
FOR1END:
.data
.asciiz
STR0: " \n"
