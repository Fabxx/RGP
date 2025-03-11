
# Format

x86_64 ELF Little-Endian

# Coe Behavior


- first CMP instruction verifies if argument is given, if not prints usage message

- If first CMP is successfull, it compares the given string with a constant DWORD PTR, so 32 bit EAX register portion is tested,

  - if strcmp() does not return 0, the string is rejected.


# Applied Solution

revert strcmp() condition, instead of JNZ use JZ, if a string is different will always be accepted.

opcode JNZ address: `0x0000000000000000 + 0x400609`

constant DWORD PTR address for string AAAA-Z10N-42-OK: `0x0000000000000000 + 0x4005FA`

C++ Code has been written from scratch
