global   start
	  extern    printf
start:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 60
	  ret
format: db `Hello, Holberton\n`,0

