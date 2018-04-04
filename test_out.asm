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
la $a0, STR0
li $v0, 4
syscall
move $s7, $gp
addi $s7, $s7, 0
lw $s6, 0($s7)
lw $s5, 0($gp)
li $s6, 1
add $s7, $s5, $s6
move $s5, $gp
addi $s5, $s5, 0
sw $s7, 0($s5)
move $s7, $gp
addi $s7, $s7, 0
lw $s5, 0($s7)
lw $s6, 0($gp)
li $s5, 5
sge $s7, $s6, $s5
beq $s7, $0, WHILE0
la $a0, STR1
li $v0, 4
syscall
.data
.asciiz
STR0: "It is not 5 yet\n"
STR1: "\nAll done! :)"
