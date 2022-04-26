.globl factorial

.data
n: .word 7

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
	# a0 contains number
	addi a1, x0, 1 # To store result
loop:
    	beq a0, x0, exit
	mul a1, a1, a0
	addi a0, a0, -1
	j loop
exit:
	add a0, x0, a1
	jr ra
	
