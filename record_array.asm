.globl main
.code
main:
j start
start: 
li $s7, 314
move $s6, $gp
addi $s6, $s6, 0
addi $s5, $s6, 44952
addi $s6, $s5, 4
addi $s4, $s6, 8
addi $s3, $s4, 2496
addi $s4, $s3, 192
addi $s3, $s4, 12
addi $s2, $s3, 52
sw $s7, 0($s2)
move $s7, $gp
addi $s7, $s7, 0
addi $s3, $s7, 44952
addi $s7, $s3, 4
addi $s1, $s7, 8
addi $s0, $s1, 2496
addi $s1, $s0, 192
move $s2, $s1
move $s1, $gp
addi $s1, $s1, 0
addi $s0, $s1, 22476
addi $s1, $s0, 4
addi $t9, $s1, 8
addi $t8, $t9, 288
lw $t9, 0($s2)
sw $t9, 0($t8)
lw $t9, 4($s2)
sw $t9, 4($t8)
lw $t9, 8($s2)
sw $t9, 8($t8)
lw $t9, 12($s2)
sw $t9, 12($t8)
lw $t9, 16($s2)
sw $t9, 16($t8)
lw $t9, 20($s2)
sw $t9, 20($t8)
lw $t9, 24($s2)
sw $t9, 24($t8)
lw $t9, 28($s2)
sw $t9, 28($t8)
lw $t9, 32($s2)
sw $t9, 32($t8)
lw $t9, 36($s2)
sw $t9, 36($t8)
lw $t9, 40($s2)
sw $t9, 40($t8)
lw $t9, 44($s2)
sw $t9, 44($t8)
lw $t9, 48($s2)
sw $t9, 48($t8)
lw $t9, 52($s2)
sw $t9, 52($t8)
lw $t9, 56($s2)
sw $t9, 56($t8)
lw $t9, 60($s2)
sw $t9, 60($t8)
lw $t9, 64($s2)
sw $t9, 64($t8)
lw $t9, 68($s2)
sw $t9, 68($t8)
lw $t9, 72($s2)
sw $t9, 72($t8)
lw $t9, 76($s2)
sw $t9, 76($t8)
lw $t9, 80($s2)
sw $t9, 80($t8)
lw $t9, 84($s2)
sw $t9, 84($t8)
lw $t9, 88($s2)
sw $t9, 88($t8)
lw $t9, 92($s2)
sw $t9, 92($t8)
move $s2, $gp
addi $s2, $s2, 0
addi $t7, $s2, 22476
addi $s2, $t7, 4
addi $t6, $s2, 8
addi $t5, $t6, 288
addi $t6, $t5, 12
addi $t4, $t6, 52
lw $t8, 0($t4)
move $a0, $t8
li $v0, 1
syscall
.data
.asciiz
