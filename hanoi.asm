.globl main
.code
main:
j start
_moveTower_:
move $s6, $gp
addi $s6, $s6, 4
lw $s7, 0($s6)
li $s5, 1
seq $s6, $s7, $s5
beq $s6, $0, IF0EL0
move $s7, $gp
addi $s7, $s7, 4
lw $s5, 0($s7)
move $s4, $gp
addi $s4, $s4, 8
lw $s7, 0($s4)
move $s3, $gp
addi $s3, $s3, 12
lw $s4, 0($s3)
la $a0, STR0
li $v0, 4
syscall
move $a0, $s5
li $v0, 1
syscall
la $a0, STR1
li $v0, 4
syscall
lw $a0, 0($s7)
li $v0, 11
syscall
la $a0, STR2
li $v0, 4
syscall
lw $a0, 0($s4)
li $v0, 11
syscall
li $a0, 10
li $v0, 11
syscall
j IF0_END
IF0EL0:
move $s2, $gp
addi $s2, $s2, 4
lw $s3, 0($s2)
li $s1, 1
sub $s2, $s3, $s1
move $s3, $gp
addi $s3, $s3, 8
lw $s1, 0($s3)
move $s0, $gp
addi $s0, $s0, 16
lw $s3, 0($s0)
move $t9, $gp
addi $t9, $t9, 12
lw $s0, 0($t9)
addi $sp, $sp, -8
sw $ra, 0($sp)
sw $fp, 4($sp)
addi $sp, $sp, -72
sw $t0, 0($sp)
sw $t1, 4($sp)
sw $t2, 8($sp)
sw $t3, 12($sp)
sw $t4, 16($sp)
sw $t5, 20($sp)
sw $t6, 24($sp)
sw $t7, 28($sp)
sw $t8, 32($sp)
sw $t9, 36($sp)
sw $s0, 40($sp)
sw $s1, 44($sp)
sw $s2, 48($sp)
sw $s3, 52($sp)
sw $s4, 56($sp)
sw $s5, 60($sp)
sw $s6, 64($sp)
sw $s7, 68($sp)
addi $sp, $sp, -16
move $t9, $s2
sw $t9, 0($sp)
move $t9, $s1
sw $t9, 4($sp)
move $t9, $s3
sw $t9, 8($sp)
move $t9, $s0
sw $t9, 12($sp)
move $fp, $sp
jal _moveTower_
addi $sp, $sp, 16
lw $t0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
lw $t3, 12($sp)
lw $t4, 16($sp)
lw $t5, 20($sp)
lw $t6, 24($sp)
lw $t7, 28($sp)
lw $t8, 32($sp)
lw $t9, 36($sp)
lw $s0, 40($sp)
lw $s1, 44($sp)
lw $s2, 48($sp)
lw $s3, 52($sp)
lw $s4, 56($sp)
lw $s5, 60($sp)
lw $s6, 64($sp)
lw $s7, 68($sp)
addi $sp, $sp, 72
lw $ra, 0($sp)
lw $fp, 4($sp)
addi $sp, $sp, 8
move $s0, $gp
addi $s0, $s0, 4
lw $t9, 0($s0)
move $s3, $gp
addi $s3, $s3, 8
lw $s0, 0($s3)
move $s1, $gp
addi $s1, $s1, 12
lw $s3, 0($s1)
la $a0, STR3
li $v0, 4
syscall
move $a0, $t9
li $v0, 1
syscall
la $a0, STR4
li $v0, 4
syscall
lw $a0, 0($s0)
li $v0, 11
syscall
la $a0, STR5
li $v0, 4
syscall
lw $a0, 0($s3)
li $v0, 11
syscall
li $a0, 10
li $v0, 11
syscall
move $s2, $gp
addi $s2, $s2, 4
lw $s1, 0($s2)
li $t8, 1
sub $s2, $s1, $t8
move $s1, $gp
addi $s1, $s1, 16
lw $t8, 0($s1)
move $t7, $gp
addi $t7, $t7, 12
lw $s1, 0($t7)
move $t6, $gp
addi $t6, $t6, 8
lw $t7, 0($t6)
addi $sp, $sp, -8
sw $ra, 0($sp)
sw $fp, 4($sp)
addi $sp, $sp, -72
sw $t0, 0($sp)
sw $t1, 4($sp)
sw $t2, 8($sp)
sw $t3, 12($sp)
sw $t4, 16($sp)
sw $t5, 20($sp)
sw $t6, 24($sp)
sw $t7, 28($sp)
sw $t8, 32($sp)
sw $t9, 36($sp)
sw $s0, 40($sp)
sw $s1, 44($sp)
sw $s2, 48($sp)
sw $s3, 52($sp)
sw $s4, 56($sp)
sw $s5, 60($sp)
sw $s6, 64($sp)
sw $s7, 68($sp)
addi $sp, $sp, -16
move $t6, $s2
sw $t6, 0($sp)
move $t6, $t8
sw $t6, 4($sp)
move $t6, $s1
sw $t6, 8($sp)
move $t6, $t7
sw $t6, 12($sp)
move $fp, $sp
jal _moveTower_
addi $sp, $sp, 16
lw $t0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
lw $t3, 12($sp)
lw $t4, 16($sp)
lw $t5, 20($sp)
lw $t6, 24($sp)
lw $t7, 28($sp)
lw $t8, 32($sp)
lw $t9, 36($sp)
lw $s0, 40($sp)
lw $s1, 44($sp)
lw $s2, 48($sp)
lw $s3, 52($sp)
lw $s4, 56($sp)
lw $s5, 60($sp)
lw $s6, 64($sp)
lw $s7, 68($sp)
addi $sp, $sp, 72
lw $ra, 0($sp)
lw $fp, 4($sp)
addi $sp, $sp, 8
j IF0_END
IF0_END:
move $sp, $fp
jr $ra
start: 
la $a0, STR6
li $v0, 4
syscall
move $t7, $gp
addi $t7, $t7, 0
lw $t6, 0($t7)
li $v0, 5
syscall
sw $v0, 0($t6)
move $s1, $gp
addi $s1, $s1, 0
lw $t7, 0($s1)
la $a0, STR7
li $v0, 4
syscall
move $a0, $t7
li $v0, 1
syscall
la $a0, STR8
li $v0, 4
syscall
move $t8, $gp
addi $t8, $t8, 0
lw $s1, 0($t8)
addi $sp, $sp, -8
sw $ra, 0($sp)
sw $fp, 4($sp)
addi $sp, $sp, -72
sw $t0, 0($sp)
sw $t1, 4($sp)
sw $t2, 8($sp)
sw $t3, 12($sp)
sw $t4, 16($sp)
sw $t5, 20($sp)
sw $t6, 24($sp)
sw $t7, 28($sp)
sw $t8, 32($sp)
sw $t9, 36($sp)
sw $s0, 40($sp)
sw $s1, 44($sp)
sw $s2, 48($sp)
sw $s3, 52($sp)
sw $s4, 56($sp)
sw $s5, 60($sp)
sw $s6, 64($sp)
sw $s7, 68($sp)
addi $sp, $sp, -16
move $t8, $s1
sw $t8, 0($sp)
li $t8, 65
sw $t8, 4($sp)
li $t8, 66
sw $t8, 8($sp)
li $t8, 67
sw $t8, 12($sp)
move $fp, $sp
jal _moveTower_
addi $sp, $sp, 16
lw $t0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
lw $t3, 12($sp)
lw $t4, 16($sp)
lw $t5, 20($sp)
lw $t6, 24($sp)
lw $t7, 28($sp)
lw $t8, 32($sp)
lw $t9, 36($sp)
lw $s0, 40($sp)
lw $s1, 44($sp)
lw $s2, 48($sp)
lw $s3, 52($sp)
lw $s4, 56($sp)
lw $s5, 60($sp)
lw $s6, 64($sp)
lw $s7, 68($sp)
addi $sp, $sp, 72
lw $ra, 0($sp)
lw $fp, 4($sp)
addi $sp, $sp, 8
la $a0, STR9
li $v0, 4
syscall
.data
.asciiz
STR0: "Move "
STR1: " from "
STR2: " to "
STR3: "Move "
STR4: " from "
STR5: " to "
STR6: "Enter number of disks:"
STR7: "Moving "
STR8: " disks from tower A to tower B with tower C helping\n"
STR9: "Done\n"
