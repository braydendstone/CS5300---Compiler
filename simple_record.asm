.globl main
.code
main:
j start
start: 
li $s7, 1
move $s6, $gp
addi $s6, $s6, 12
sw $s7, 0($s6)
li $s6, 2
move $s7, $gp
addi $s7, $s7, 16
sw $s6, 0($s7)
li $s7, 3
move $s6, $gp
addi $s6, $s6, 20
sw $s7, 0($s6)
move $s7, $gp
addi $s7, $s7, 12
lw $s6, 0($s7)
move $s5, $gp
addi $s5, $s5, 16
lw $s7, 0($s5)
mul $s5, $s6, $s7
move $s7, $gp
addi $s7, $s7, 0
addi $s6, $s7, 0
sw $s5, 0($s6)
move $s5, $gp
addi $s5, $s5, 16
lw $s6, 0($s5)
move $s4, $gp
addi $s4, $s4, 20
lw $s5, 0($s4)
mul $s4, $s6, $s5
move $s5, $gp
addi $s5, $s5, 0
addi $s6, $s5, 4
sw $s4, 0($s6)
move $s4, $gp
addi $s4, $s4, 20
lw $s6, 0($s4)
move $s3, $gp
addi $s3, $s3, 12
lw $s4, 0($s3)
mul $s3, $s6, $s4
move $s4, $gp
addi $s4, $s4, 0
addi $s6, $s4, 8
sw $s3, 0($s6)
move $s3, $gp
addi $s3, $s3, 0
addi $s2, $s3, 0
lw $s6, 0($s2)
move $s1, $gp
addi $s1, $s1, 0
addi $s0, $s1, 4
lw $s2, 0($s0)
move $t9, $gp
addi $t9, $t9, 0
addi $t8, $t9, 8
lw $s0, 0($t8)
move $a0, $s6
li $v0, 1
syscall
move $a0, $s2
li $v0, 1
syscall
move $a0, $s0
li $v0, 1
syscall
.data
.asciiz
