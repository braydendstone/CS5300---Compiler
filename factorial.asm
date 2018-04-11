.globl main
.code
main:
j start
start: 
li $s7, 1
move $s6, $gp
addi $s6, $s6, 4
sw $s7, 0($s6)
li $s6, 1
move $s7, $gp
addi $s7, $s7, 0
sw $s6, 0($s7)
FOR0:
move $s6, $gp
addi $s6, $s6, 0
lw $s7, 0($s6)
li $s5, 8
sgt $s6, $s7, $s5
bne $s6, $0, FOR0END
move $s7, $gp
addi $s7, $s7, 4
lw $s5, 0($s7)
move $s4, $gp
addi $s4, $s4, 0
lw $s7, 0($s4)
mul $s4, $s5, $s7
move $s7, $gp
addi $s7, $s7, 4
sw $s4, 0($s7)
move $s4, $gp
addi $s4, $s4, 0
lw $s7, 0($s4)
move $s5, $gp
addi $s5, $s5, 4
lw $s4, 0($s5)
move $a0, $s7
li $v0, 1
syscall
li $a0, 9
li $v0, 11
syscall
move $a0, $s4
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
move $s3, $gp
addi $s3, $s3, 0
lw $s5, 0($s3)
li $s2, 1
add $s3, $s5, $s2
move $s2, $gp
addi $s2, $s2, 0
sw $s3, 0($s2)
j FOR0
FOR0END:
.data
.asciiz
