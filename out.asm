.globl main
.code
main:
j start
start: 
li $s7, 40
move $s6, $gp
addi $s6, $s6, 0
sw $s7, 0($s6)
li $s6, 2
move $s7, $gp
addi $s7, $s7, 12
sw $s6, 0($s7)
move $s6, $gp
addi $s6, $s6, 12
lw $s7, 0($s6)
move $s5, $gp
addi $s5, $s5, 12
lw $s6, 0($s5)
move $s5, $gp
addi $s5, $s5, 0
li $s4, 1
sub $s3, $s7, $s4
li $s4, 4
mul $s2, $s3, $s4
add $s1, $s5, $s2
sw $s6, 0($s1)
move $s6, $gp
addi $s6, $s6, 0
lw $s1, 0($s6)
move $s2, $gp
addi $s2, $s2, 0
addi $s3, $s2, 4
lw $s6, 0($s3)
add $s3, $s1, $s6
move $s6, $gp
addi $s6, $s6, 0
addi $s1, $s6, 8
sw $s3, 0($s1)
move $s3, $gp
addi $s3, $s3, 0
addi $s6, $s3, 8
lw $s1, 0($s6)
move $a0, $s1
li $v0, 1
syscall
.data
.asciiz
