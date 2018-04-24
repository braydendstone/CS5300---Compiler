.globl main
.code
main:
j start
_moveTower_:
move $s6, $fp
addi $s6, $s6, 4
lw $s7, 0($s6)
li $s5, 1
seq $s6, $s7, $s5
beq $s6, $0, IF0EL0
move $s5, $fp
addi $s5, $s5, 4
lw $s6, 0($s5)
move $s7, $fp
addi $s7, $s7, 8
lw $s5, 0($s7)
move $s4, $fp
addi $s4, $s4, 12
lw $s7, 0($s4)
la $a0, STR0
li $v0, 4
syscall
move $a0, $s6
li $v0, 1
syscall
la $a0, STR1
li $v0, 4
syscall
lw $a0, 0($s5)
li $v0, 11
syscall
la $a0, STR2
li $v0, 4
syscall
lw $a0, 0($s7)
li $v0, 11
syscall
li $a0, 10
li $v0, 11
syscall
j IF0_END
IF0EL0:
move $s5, $fp
addi $s5, $s5, 4
lw $s7, 0($s5)
li $s6, 1
sub $s5, $s7, $s6
move $s7, $fp
addi $s7, $s7, 8
lw $s6, 0($s7)
move $s4, $fp
addi $s4, $s4, 16
lw $s7, 0($s4)
move $s3, $fp
addi $s3, $s3, 12
lw $s4, 0($s3)
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
move $s3, $s5
sw $s3, 0($sp)
move $s3, $s6
sw $s3, 4($sp)
move $s3, $s7
sw $s3, 8($sp)
move $s3, $s4
sw $s3, 12($sp)
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
move $s2, $fp
addi $s2, $s2, 4
lw $s3, 0($s2)
move $s1, $fp
addi $s1, $s1, 8
lw $s2, 0($s1)
move $s0, $fp
addi $s0, $s0, 12
lw $s1, 0($s0)
la $a0, STR3
li $v0, 4
syscall
move $a0, $s3
li $v0, 1
syscall
la $a0, STR4
li $v0, 4
syscall
lw $a0, 0($s2)
li $v0, 11
syscall
la $a0, STR5
li $v0, 4
syscall
lw $a0, 0($s1)
li $v0, 11
syscall
li $a0, 10
li $v0, 11
syscall
move $s2, $fp
addi $s2, $s2, 4
lw $s1, 0($s2)
li $s3, 1
sub $s2, $s1, $s3
move $s1, $fp
addi $s1, $s1, 16
lw $s3, 0($s1)
move $s0, $fp
addi $s0, $s0, 12
lw $s1, 0($s0)
move $t9, $fp
addi $t9, $t9, 8
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
move $t9, $s3
sw $t9, 4($sp)
move $t9, $s1
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
j IF0_END
IF0_END:
move $sp, $fp
jr $ra
start: 
la $a0, STR6
li $v0, 4
syscall
move $t9, $fp
addi $t9, $t9, 4
li $v0, 5
syscall
sw $v0, 0($t9)
move $t8, $fp
addi $t8, $t8, 4
lw $t9, 0($t8)
la $a0, STR7
li $v0, 4
syscall
move $a0, $t9
li $v0, 1
syscall
la $a0, STR8
li $v0, 4
syscall
move $t8, $fp
addi $t8, $t8, 4
lw $t9, 0($t8)
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
move $t8, $t9
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
