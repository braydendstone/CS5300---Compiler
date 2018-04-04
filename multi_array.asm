.globl main
.code
main:
j start
start: 
li $s7, 0
move $s6, $gp
addi $s6, $s6, 80
sw $s7, 0($s6)
li $s6, 0
move $s7, $gp
addi $s7, $s7, 80
addi $s5, $s7, 4
sw $s6, 0($s5)
li $s5, 0
move $s6, $gp
addi $s6, $s6, 80
addi $s7, $s6, 8
sw $s5, 0($s7)
li $s7, 0
move $s5, $gp
addi $s5, $s5, 80
addi $s6, $s5, 12
sw $s7, 0($s6)
li $s6, 0
move $s7, $gp
addi $s7, $s7, 80
addi $s5, $s7, 16
sw $s6, 0($s5)
li $s5, 1
move $s6, $gp
addi $s6, $s6, 80
addi $s7, $s6, 16
addi $s6, $s7, 4
sw $s5, 0($s6)
li $s6, 2
move $s5, $gp
addi $s5, $s5, 80
addi $s7, $s5, 16
addi $s5, $s7, 8
sw $s6, 0($s5)
li $s5, 3
move $s6, $gp
addi $s6, $s6, 80
addi $s7, $s6, 16
addi $s6, $s7, 12
sw $s5, 0($s6)
li $s6, 0
move $s5, $gp
addi $s5, $s5, 80
addi $s7, $s5, 32
sw $s6, 0($s7)
li $s7, 2
move $s6, $gp
addi $s6, $s6, 80
addi $s5, $s6, 32
addi $s6, $s5, 4
sw $s7, 0($s6)
li $s6, 4
move $s7, $gp
addi $s7, $s7, 80
addi $s5, $s7, 32
addi $s7, $s5, 8
sw $s6, 0($s7)
li $s7, 6
move $s6, $gp
addi $s6, $s6, 80
addi $s5, $s6, 32
addi $s6, $s5, 12
sw $s7, 0($s6)
li $s6, 0
move $s7, $gp
addi $s7, $s7, 80
addi $s5, $s7, 48
sw $s6, 0($s5)
li $s5, 3
move $s6, $gp
addi $s6, $s6, 80
addi $s7, $s6, 48
addi $s6, $s7, 4
sw $s5, 0($s6)
li $s6, 6
move $s5, $gp
addi $s5, $s5, 80
addi $s7, $s5, 48
addi $s5, $s7, 8
sw $s6, 0($s5)
li $s5, 9
move $s6, $gp
addi $s6, $s6, 80
addi $s7, $s6, 48
addi $s6, $s7, 12
sw $s5, 0($s6)
li $s6, 2
move $s5, $gp
addi $s5, $s5, 160
sw $s6, 0($s5)
move $s6, $gp
addi $s6, $s6, 160
lw $s5, 0($s6)
move $s7, $gp
addi $s7, $s7, 80
li $s4, 0
sub $s3, $s5, $s4
li $s4, 16
mul $s2, $s3, $s4
add $s1, $s7, $s2
move $s6, $s1
move $s1, $gp
addi $s1, $s1, 144
lw $s2, 0($s6)
sw $s2, 0($s1)
lw $s2, 4($s6)
sw $s2, 4($s1)
lw $s2, 8($s6)
sw $s2, 8($s1)
lw $s2, 12($s6)
sw $s2, 12($s1)
move $s6, $gp
addi $s6, $s6, 160
lw $s1, 0($s6)
move $s3, $gp
addi $s3, $s3, 144
li $s4, 0
sub $s0, $s1, $s4
li $s4, 4
mul $t9, $s0, $s4
add $t8, $s3, $t9
lw $s6, 0($t8)
move $t8, $gp
addi $t8, $t8, 164
sw $s6, 0($t8)
move $s6, $gp
addi $s6, $s6, 164
lw $t8, 0($s6)
move $a0, $t8
li $v0, 1
syscall
.data
.asciiz
