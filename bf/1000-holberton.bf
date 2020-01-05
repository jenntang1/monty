						set up cell blocks 0 | 70 | 100 | 10:
+++++ +++++				cell 0: initialize counter to 10
[						set loop
	> +++++ ++			cell 1: add 7
	> +++++ +++++		cell 2: add 10
	> +					cell 3: add 1
	<<< -				decrease counter to cell 0
]						end loop

						print to standard out:
> ++ .					putchar H (70 + 2 = 72)
> +++++ +++++ +.		putchar o (100 + 11 = 111)
---- .				WTF	putchar l (111 - 4 = 107)
----- ---- .			putchar b (108 - 10 = 98)
++++ .					putchar e (98 + 3 = 101)
+++++ +++++ ++ .		putchar r (101 + 13 = 114)
+ .						putchar t (114 + 2 = 116)
----- - .				putchar o (116 - 5 = 111)
+- .					putchar n (111 - 1 = 110)
<< .					putchar null byte (0)
>>> .					putchar \n (10)
