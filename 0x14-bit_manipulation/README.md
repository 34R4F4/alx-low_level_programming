
[D]	[X]	[B]
0	0	0000
1	1	0001
2	2	0010
3	3	0011
4	4	0100
5	5	0101
6	6	0110
7	7	0111
8	8	1000
9	9	1001
10	A	1010
11	B	1011
12	c	1100
13	D	1101
14	E	1110
15	F	1111
---------------------
0x98	9	8
	1001	1000
~0x98	0110	0111
	6	7	= 0x67
---------------------
0x89 = [8] [9] = 1000 1001
---------------------
   0x44	0100 0100
 | 0x22	0010 0010
 	0110 0110 = 0x66
---------------------
0x02 >> 1	0010
		0001 = 0x01
---------------------
n/base	d+r
89/16	5+9
5/16	0+5	r = 5 + 9 = 59

98/16	6+2
6/16	0+6	= 62
---------------------
0x89 >>3	10001001
		00010001 = 0x11
---------------------
0x13 << 1	0001 0011
		0010 0110 = 0x26
---------------------
   0x01	0001
 & 0x00 0000
 	0000 = 0x00
---------------------
0x01 << 1	0001
		0010 = 0x02
---------------------
0b    0  1   0  1     0  0  1   0
      0  64  0  16    0  0  2   0 
  = 64 + 16 + 2 = 82
---------------------
   0x88	1000 1000
 & 0x01	0000 0001
 	0000 0000 = 0x00
---------------------
  0x89	1000 1001
& 0x01	0000 0001
	0000 0001 = 0x01
---------------------
   0x01	0001
 | 0x01 0001
 	0001 = 0x01
---------------------
0x89 1000 1001
1	0	0	0	1	0	0	1
128	0	0	0	8	0	0	1
= 128 + 8 + 1	= 137
---------------------
98/2	49+0
49/2	24+1
24	12+0
12	6+0
6	3+0
3	1+1
1	0+1
---------------------
0b01101101 in base16
0110 1101
 6    13
 6    D		=0x6D
---------------------
   0x66	0110 0110
 & 0x22	0010 0010
 	0010 0010
 	2	2 = 0x22
---------------------
   0x01	0001
 | 0x00	0000
 	0001	= 0x01
---------------------
   0x01	0001
 & 0x01 0001
 	0001 = 0x01
---------------------
~ 0x12	0001 0010
	1110 1101 = xED
---------------------
---------------------

