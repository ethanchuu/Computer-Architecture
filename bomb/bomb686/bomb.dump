
bomb:     file format elf32-i386


Disassembly of section .init:

00002000 <_init>:
    2000:	f3 0f 1e fb          	endbr32 
    2004:	53                   	push   %ebx
    2005:	83 ec 08             	sub    $0x8,%esp
    2008:	e8 53 02 00 00       	call   2260 <__x86.get_pc_thunk.bx>
    200d:	81 c3 5b 4f 00 00    	add    $0x4f5b,%ebx
    2013:	8b 83 8c 00 00 00    	mov    0x8c(%ebx),%eax
    2019:	85 c0                	test   %eax,%eax
    201b:	74 02                	je     201f <_init+0x1f>
    201d:	ff d0                	call   *%eax
    201f:	83 c4 08             	add    $0x8,%esp
    2022:	5b                   	pop    %ebx
    2023:	c3                   	ret    

Disassembly of section .plt:

00002030 <strcmp@plt-0x10>:
    2030:	ff b3 04 00 00 00    	push   0x4(%ebx)
    2036:	ff a3 08 00 00 00    	jmp    *0x8(%ebx)
    203c:	00 00                	add    %al,(%eax)
	...

00002040 <strcmp@plt>:
    2040:	ff a3 0c 00 00 00    	jmp    *0xc(%ebx)
    2046:	68 00 00 00 00       	push   $0x0
    204b:	e9 e0 ff ff ff       	jmp    2030 <_init+0x30>

00002050 <__libc_start_main@plt>:
    2050:	ff a3 10 00 00 00    	jmp    *0x10(%ebx)
    2056:	68 08 00 00 00       	push   $0x8
    205b:	e9 d0 ff ff ff       	jmp    2030 <_init+0x30>

00002060 <read@plt>:
    2060:	ff a3 14 00 00 00    	jmp    *0x14(%ebx)
    2066:	68 10 00 00 00       	push   $0x10
    206b:	e9 c0 ff ff ff       	jmp    2030 <_init+0x30>

00002070 <fflush@plt>:
    2070:	ff a3 18 00 00 00    	jmp    *0x18(%ebx)
    2076:	68 18 00 00 00       	push   $0x18
    207b:	e9 b0 ff ff ff       	jmp    2030 <_init+0x30>

00002080 <fgets@plt>:
    2080:	ff a3 1c 00 00 00    	jmp    *0x1c(%ebx)
    2086:	68 20 00 00 00       	push   $0x20
    208b:	e9 a0 ff ff ff       	jmp    2030 <_init+0x30>

00002090 <signal@plt>:
    2090:	ff a3 20 00 00 00    	jmp    *0x20(%ebx)
    2096:	68 28 00 00 00       	push   $0x28
    209b:	e9 90 ff ff ff       	jmp    2030 <_init+0x30>

000020a0 <sleep@plt>:
    20a0:	ff a3 24 00 00 00    	jmp    *0x24(%ebx)
    20a6:	68 30 00 00 00       	push   $0x30
    20ab:	e9 80 ff ff ff       	jmp    2030 <_init+0x30>

000020b0 <alarm@plt>:
    20b0:	ff a3 28 00 00 00    	jmp    *0x28(%ebx)
    20b6:	68 38 00 00 00       	push   $0x38
    20bb:	e9 70 ff ff ff       	jmp    2030 <_init+0x30>

000020c0 <strcpy@plt>:
    20c0:	ff a3 2c 00 00 00    	jmp    *0x2c(%ebx)
    20c6:	68 40 00 00 00       	push   $0x40
    20cb:	e9 60 ff ff ff       	jmp    2030 <_init+0x30>

000020d0 <gethostname@plt>:
    20d0:	ff a3 30 00 00 00    	jmp    *0x30(%ebx)
    20d6:	68 48 00 00 00       	push   $0x48
    20db:	e9 50 ff ff ff       	jmp    2030 <_init+0x30>

000020e0 <getenv@plt>:
    20e0:	ff a3 34 00 00 00    	jmp    *0x34(%ebx)
    20e6:	68 50 00 00 00       	push   $0x50
    20eb:	e9 40 ff ff ff       	jmp    2030 <_init+0x30>

000020f0 <malloc@plt>:
    20f0:	ff a3 38 00 00 00    	jmp    *0x38(%ebx)
    20f6:	68 58 00 00 00       	push   $0x58
    20fb:	e9 30 ff ff ff       	jmp    2030 <_init+0x30>

00002100 <puts@plt>:
    2100:	ff a3 3c 00 00 00    	jmp    *0x3c(%ebx)
    2106:	68 60 00 00 00       	push   $0x60
    210b:	e9 20 ff ff ff       	jmp    2030 <_init+0x30>

00002110 <__memmove_chk@plt>:
    2110:	ff a3 40 00 00 00    	jmp    *0x40(%ebx)
    2116:	68 68 00 00 00       	push   $0x68
    211b:	e9 10 ff ff ff       	jmp    2030 <_init+0x30>

00002120 <exit@plt>:
    2120:	ff a3 44 00 00 00    	jmp    *0x44(%ebx)
    2126:	68 70 00 00 00       	push   $0x70
    212b:	e9 00 ff ff ff       	jmp    2030 <_init+0x30>

00002130 <strlen@plt>:
    2130:	ff a3 48 00 00 00    	jmp    *0x48(%ebx)
    2136:	68 78 00 00 00       	push   $0x78
    213b:	e9 f0 fe ff ff       	jmp    2030 <_init+0x30>

00002140 <write@plt>:
    2140:	ff a3 4c 00 00 00    	jmp    *0x4c(%ebx)
    2146:	68 80 00 00 00       	push   $0x80
    214b:	e9 e0 fe ff ff       	jmp    2030 <_init+0x30>

00002150 <strcasecmp@plt>:
    2150:	ff a3 50 00 00 00    	jmp    *0x50(%ebx)
    2156:	68 88 00 00 00       	push   $0x88
    215b:	e9 d0 fe ff ff       	jmp    2030 <_init+0x30>

00002160 <__isoc99_sscanf@plt>:
    2160:	ff a3 54 00 00 00    	jmp    *0x54(%ebx)
    2166:	68 90 00 00 00       	push   $0x90
    216b:	e9 c0 fe ff ff       	jmp    2030 <_init+0x30>

00002170 <fopen@plt>:
    2170:	ff a3 58 00 00 00    	jmp    *0x58(%ebx)
    2176:	68 98 00 00 00       	push   $0x98
    217b:	e9 b0 fe ff ff       	jmp    2030 <_init+0x30>

00002180 <__errno_location@plt>:
    2180:	ff a3 5c 00 00 00    	jmp    *0x5c(%ebx)
    2186:	68 a0 00 00 00       	push   $0xa0
    218b:	e9 a0 fe ff ff       	jmp    2030 <_init+0x30>

00002190 <__printf_chk@plt>:
    2190:	ff a3 60 00 00 00    	jmp    *0x60(%ebx)
    2196:	68 a8 00 00 00       	push   $0xa8
    219b:	e9 90 fe ff ff       	jmp    2030 <_init+0x30>

000021a0 <socket@plt>:
    21a0:	ff a3 64 00 00 00    	jmp    *0x64(%ebx)
    21a6:	68 b0 00 00 00       	push   $0xb0
    21ab:	e9 80 fe ff ff       	jmp    2030 <_init+0x30>

000021b0 <__fprintf_chk@plt>:
    21b0:	ff a3 68 00 00 00    	jmp    *0x68(%ebx)
    21b6:	68 b8 00 00 00       	push   $0xb8
    21bb:	e9 70 fe ff ff       	jmp    2030 <_init+0x30>

000021c0 <gethostbyname@plt>:
    21c0:	ff a3 6c 00 00 00    	jmp    *0x6c(%ebx)
    21c6:	68 c0 00 00 00       	push   $0xc0
    21cb:	e9 60 fe ff ff       	jmp    2030 <_init+0x30>

000021d0 <strtol@plt>:
    21d0:	ff a3 70 00 00 00    	jmp    *0x70(%ebx)
    21d6:	68 c8 00 00 00       	push   $0xc8
    21db:	e9 50 fe ff ff       	jmp    2030 <_init+0x30>

000021e0 <connect@plt>:
    21e0:	ff a3 74 00 00 00    	jmp    *0x74(%ebx)
    21e6:	68 d0 00 00 00       	push   $0xd0
    21eb:	e9 40 fe ff ff       	jmp    2030 <_init+0x30>

000021f0 <close@plt>:
    21f0:	ff a3 78 00 00 00    	jmp    *0x78(%ebx)
    21f6:	68 d8 00 00 00       	push   $0xd8
    21fb:	e9 30 fe ff ff       	jmp    2030 <_init+0x30>

00002200 <__ctype_b_loc@plt>:
    2200:	ff a3 7c 00 00 00    	jmp    *0x7c(%ebx)
    2206:	68 e0 00 00 00       	push   $0xe0
    220b:	e9 20 fe ff ff       	jmp    2030 <_init+0x30>

00002210 <__sprintf_chk@plt>:
    2210:	ff a3 80 00 00 00    	jmp    *0x80(%ebx)
    2216:	68 e8 00 00 00       	push   $0xe8
    221b:	e9 10 fe ff ff       	jmp    2030 <_init+0x30>

Disassembly of section .plt.got:

00002220 <__cxa_finalize@plt>:
    2220:	ff a3 88 00 00 00    	jmp    *0x88(%ebx)
    2226:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

00002230 <_start>:
    2230:	f3 0f 1e fb          	endbr32 
    2234:	31 ed                	xor    %ebp,%ebp
    2236:	5e                   	pop    %esi
    2237:	89 e1                	mov    %esp,%ecx
    2239:	83 e4 f0             	and    $0xfffffff0,%esp
    223c:	50                   	push   %eax
    223d:	54                   	push   %esp
    223e:	52                   	push   %edx
    223f:	e8 18 00 00 00       	call   225c <_start+0x2c>
    2244:	81 c3 24 4d 00 00    	add    $0x4d24,%ebx
    224a:	6a 00                	push   $0x0
    224c:	6a 00                	push   $0x0
    224e:	51                   	push   %ecx
    224f:	56                   	push   %esi
    2250:	ff b3 90 00 00 00    	push   0x90(%ebx)
    2256:	e8 f5 fd ff ff       	call   2050 <__libc_start_main@plt>
    225b:	f4                   	hlt    
    225c:	8b 1c 24             	mov    (%esp),%ebx
    225f:	c3                   	ret    

00002260 <__x86.get_pc_thunk.bx>:
    2260:	8b 1c 24             	mov    (%esp),%ebx
    2263:	c3                   	ret    
    2264:	66 90                	xchg   %ax,%ax
    2266:	66 90                	xchg   %ax,%ax
    2268:	66 90                	xchg   %ax,%ax
    226a:	66 90                	xchg   %ax,%ax
    226c:	66 90                	xchg   %ax,%ax
    226e:	66 90                	xchg   %ax,%ax

00002270 <deregister_tm_clones>:
    2270:	e8 e4 00 00 00       	call   2359 <__x86.get_pc_thunk.dx>
    2275:	81 c2 f3 4c 00 00    	add    $0x4cf3,%edx
    227b:	8d 8a d8 07 00 00    	lea    0x7d8(%edx),%ecx
    2281:	8d 82 d8 07 00 00    	lea    0x7d8(%edx),%eax
    2287:	39 c8                	cmp    %ecx,%eax
    2289:	74 1d                	je     22a8 <deregister_tm_clones+0x38>
    228b:	8b 82 84 00 00 00    	mov    0x84(%edx),%eax
    2291:	85 c0                	test   %eax,%eax
    2293:	74 13                	je     22a8 <deregister_tm_clones+0x38>
    2295:	55                   	push   %ebp
    2296:	89 e5                	mov    %esp,%ebp
    2298:	83 ec 14             	sub    $0x14,%esp
    229b:	51                   	push   %ecx
    229c:	ff d0                	call   *%eax
    229e:	83 c4 10             	add    $0x10,%esp
    22a1:	c9                   	leave  
    22a2:	c3                   	ret    
    22a3:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
    22a7:	90                   	nop
    22a8:	c3                   	ret    
    22a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

000022b0 <register_tm_clones>:
    22b0:	e8 a4 00 00 00       	call   2359 <__x86.get_pc_thunk.dx>
    22b5:	81 c2 b3 4c 00 00    	add    $0x4cb3,%edx
    22bb:	55                   	push   %ebp
    22bc:	89 e5                	mov    %esp,%ebp
    22be:	53                   	push   %ebx
    22bf:	8d 8a d8 07 00 00    	lea    0x7d8(%edx),%ecx
    22c5:	8d 82 d8 07 00 00    	lea    0x7d8(%edx),%eax
    22cb:	83 ec 04             	sub    $0x4,%esp
    22ce:	29 c8                	sub    %ecx,%eax
    22d0:	89 c3                	mov    %eax,%ebx
    22d2:	c1 e8 1f             	shr    $0x1f,%eax
    22d5:	c1 fb 02             	sar    $0x2,%ebx
    22d8:	01 d8                	add    %ebx,%eax
    22da:	d1 f8                	sar    %eax
    22dc:	74 14                	je     22f2 <register_tm_clones+0x42>
    22de:	8b 92 94 00 00 00    	mov    0x94(%edx),%edx
    22e4:	85 d2                	test   %edx,%edx
    22e6:	74 0a                	je     22f2 <register_tm_clones+0x42>
    22e8:	83 ec 08             	sub    $0x8,%esp
    22eb:	50                   	push   %eax
    22ec:	51                   	push   %ecx
    22ed:	ff d2                	call   *%edx
    22ef:	83 c4 10             	add    $0x10,%esp
    22f2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
    22f5:	c9                   	leave  
    22f6:	c3                   	ret    
    22f7:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
    22fe:	66 90                	xchg   %ax,%ax

00002300 <__do_global_dtors_aux>:
    2300:	f3 0f 1e fb          	endbr32 
    2304:	55                   	push   %ebp
    2305:	89 e5                	mov    %esp,%ebp
    2307:	53                   	push   %ebx
    2308:	e8 53 ff ff ff       	call   2260 <__x86.get_pc_thunk.bx>
    230d:	81 c3 5b 4c 00 00    	add    $0x4c5b,%ebx
    2313:	83 ec 04             	sub    $0x4,%esp
    2316:	80 bb 00 08 00 00 00 	cmpb   $0x0,0x800(%ebx)
    231d:	75 27                	jne    2346 <__do_global_dtors_aux+0x46>
    231f:	8b 83 88 00 00 00    	mov    0x88(%ebx),%eax
    2325:	85 c0                	test   %eax,%eax
    2327:	74 11                	je     233a <__do_global_dtors_aux+0x3a>
    2329:	83 ec 0c             	sub    $0xc,%esp
    232c:	ff b3 9c 00 00 00    	push   0x9c(%ebx)
    2332:	e8 e9 fe ff ff       	call   2220 <__cxa_finalize@plt>
    2337:	83 c4 10             	add    $0x10,%esp
    233a:	e8 31 ff ff ff       	call   2270 <deregister_tm_clones>
    233f:	c6 83 00 08 00 00 01 	movb   $0x1,0x800(%ebx)
    2346:	8b 5d fc             	mov    -0x4(%ebp),%ebx
    2349:	c9                   	leave  
    234a:	c3                   	ret    
    234b:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
    234f:	90                   	nop

00002350 <frame_dummy>:
    2350:	f3 0f 1e fb          	endbr32 
    2354:	e9 57 ff ff ff       	jmp    22b0 <register_tm_clones>

00002359 <__x86.get_pc_thunk.dx>:
    2359:	8b 14 24             	mov    (%esp),%edx
    235c:	c3                   	ret    

0000235d <main>:
    235d:	8d 4c 24 04          	lea    0x4(%esp),%ecx
    2361:	83 e4 f0             	and    $0xfffffff0,%esp
    2364:	ff 71 fc             	push   -0x4(%ecx)
    2367:	55                   	push   %ebp
    2368:	89 e5                	mov    %esp,%ebp
    236a:	53                   	push   %ebx
    236b:	51                   	push   %ecx
    236c:	8b 01                	mov    (%ecx),%eax
    236e:	8b 59 04             	mov    0x4(%ecx),%ebx
    2371:	83 f8 01             	cmp    $0x1,%eax
    2374:	0f 84 5b 01 00 00    	je     24d5 <main+0x178>
    237a:	83 f8 02             	cmp    $0x2,%eax
    237d:	0f 85 7e 01 00 00    	jne    2501 <main+0x1a4>
    2383:	83 ec 08             	sub    $0x8,%esp
    2386:	68 08 40 00 00       	push   $0x4008
    238b:	ff 73 04             	push   0x4(%ebx)
    238e:	e8 fc ff ff ff       	call   238f <main+0x32>
    2393:	a3 6c 77 00 00       	mov    %eax,0x776c
    2398:	83 c4 10             	add    $0x10,%esp
    239b:	85 c0                	test   %eax,%eax
    239d:	0f 84 41 01 00 00    	je     24e4 <main+0x187>
    23a3:	e8 ab 06 00 00       	call   2a53 <initialize_bomb>
    23a8:	83 ec 0c             	sub    $0xc,%esp
    23ab:	68 98 40 00 00       	push   $0x4098
    23b0:	e8 fc ff ff ff       	call   23b1 <main+0x54>
    23b5:	c7 04 24 d4 40 00 00 	movl   $0x40d4,(%esp)
    23bc:	e8 fc ff ff ff       	call   23bd <main+0x60>
    23c1:	e8 f7 08 00 00       	call   2cbd <read_line>
    23c6:	89 04 24             	mov    %eax,(%esp)
    23c9:	e8 50 01 00 00       	call   251e <phase_1>
    23ce:	e8 de 09 00 00       	call   2db1 <phase_defused>
    23d3:	c7 04 24 00 41 00 00 	movl   $0x4100,(%esp)
    23da:	e8 fc ff ff ff       	call   23db <main+0x7e>
    23df:	e8 d9 08 00 00       	call   2cbd <read_line>
    23e4:	89 04 24             	mov    %eax,(%esp)
    23e7:	e8 74 01 00 00       	call   2560 <phase_2>
    23ec:	e8 c0 09 00 00       	call   2db1 <phase_defused>
    23f1:	c7 04 24 41 40 00 00 	movl   $0x4041,(%esp)
    23f8:	e8 fc ff ff ff       	call   23f9 <main+0x9c>
    23fd:	e8 bb 08 00 00       	call   2cbd <read_line>
    2402:	89 04 24             	mov    %eax,(%esp)
    2405:	e8 79 01 00 00       	call   2583 <phase_3>
    240a:	e8 a2 09 00 00       	call   2db1 <phase_defused>
    240f:	c7 04 24 5f 40 00 00 	movl   $0x405f,(%esp)
    2416:	e8 fc ff ff ff       	call   2417 <main+0xba>
    241b:	e8 9d 08 00 00       	call   2cbd <read_line>
    2420:	89 04 24             	mov    %eax,(%esp)
    2423:	e8 ec 01 00 00       	call   2614 <phase_4>
    2428:	e8 84 09 00 00       	call   2db1 <phase_defused>
    242d:	c7 04 24 2c 41 00 00 	movl   $0x412c,(%esp)
    2434:	e8 fc ff ff ff       	call   2435 <main+0xd8>
    2439:	e8 7f 08 00 00       	call   2cbd <read_line>
    243e:	89 04 24             	mov    %eax,(%esp)
    2441:	e8 2b 02 00 00       	call   2671 <phase_5>
    2446:	e8 66 09 00 00       	call   2db1 <phase_defused>
    244b:	c7 04 24 70 40 00 00 	movl   $0x4070,(%esp)
    2452:	e8 fc ff ff ff       	call   2453 <main+0xf6>
    2457:	e8 61 08 00 00       	call   2cbd <read_line>
    245c:	89 04 24             	mov    %eax,(%esp)
    245f:	e8 c0 02 00 00       	call   2724 <phase_6>
    2464:	e8 48 09 00 00       	call   2db1 <phase_defused>
    2469:	c7 04 24 50 41 00 00 	movl   $0x4150,(%esp)
    2470:	e8 fc ff ff ff       	call   2471 <main+0x114>
    2475:	e8 43 08 00 00       	call   2cbd <read_line>
    247a:	89 04 24             	mov    %eax,(%esp)
    247d:	e8 f9 02 00 00       	call   277b <phase_7>
    2482:	e8 2a 09 00 00       	call   2db1 <phase_defused>
    2487:	c7 04 24 70 41 00 00 	movl   $0x4170,(%esp)
    248e:	e8 fc ff ff ff       	call   248f <main+0x132>
    2493:	e8 25 08 00 00       	call   2cbd <read_line>
    2498:	89 04 24             	mov    %eax,(%esp)
    249b:	e8 27 03 00 00       	call   27c7 <phase_8>
    24a0:	e8 0c 09 00 00       	call   2db1 <phase_defused>
    24a5:	c7 04 24 8e 40 00 00 	movl   $0x408e,(%esp)
    24ac:	e8 fc ff ff ff       	call   24ad <main+0x150>
    24b1:	e8 07 08 00 00       	call   2cbd <read_line>
    24b6:	89 04 24             	mov    %eax,(%esp)
    24b9:	e8 59 04 00 00       	call   2917 <phase_9>
    24be:	e8 ee 08 00 00       	call   2db1 <phase_defused>
    24c3:	83 c4 10             	add    $0x10,%esp
    24c6:	b8 00 00 00 00       	mov    $0x0,%eax
    24cb:	8d 65 f8             	lea    -0x8(%ebp),%esp
    24ce:	59                   	pop    %ecx
    24cf:	5b                   	pop    %ebx
    24d0:	5d                   	pop    %ebp
    24d1:	8d 61 fc             	lea    -0x4(%ecx),%esp
    24d4:	c3                   	ret    
    24d5:	a1 00 00 00 00       	mov    0x0,%eax
    24da:	a3 6c 77 00 00       	mov    %eax,0x776c
    24df:	e9 bf fe ff ff       	jmp    23a3 <main+0x46>
    24e4:	ff 73 04             	push   0x4(%ebx)
    24e7:	ff 33                	push   (%ebx)
    24e9:	68 0a 40 00 00       	push   $0x400a
    24ee:	6a 01                	push   $0x1
    24f0:	e8 fc ff ff ff       	call   24f1 <main+0x194>
    24f5:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
    24fc:	e8 fc ff ff ff       	call   24fd <main+0x1a0>
    2501:	83 ec 04             	sub    $0x4,%esp
    2504:	ff 33                	push   (%ebx)
    2506:	68 27 40 00 00       	push   $0x4027
    250b:	6a 01                	push   $0x1
    250d:	e8 fc ff ff ff       	call   250e <main+0x1b1>
    2512:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
    2519:	e8 fc ff ff ff       	call   251a <main+0x1bd>

0000251e <phase_1>:
    251e:	83 ec 20             	sub    $0x20,%esp
    2521:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
    2528:	00 
    2529:	8d 44 24 10          	lea    0x10(%esp),%eax
    252d:	50                   	push   %eax
    252e:	68 20 44 00 00       	push   $0x4420
    2533:	ff 74 24 2c          	push   0x2c(%esp)
    2537:	e8 fc ff ff ff       	call   2538 <phase_1+0x1a>
    253c:	83 c4 10             	add    $0x10,%esp
    253f:	83 f8 01             	cmp    $0x1,%eax
    2542:	75 0e                	jne    2552 <phase_1+0x34>
    2544:	81 7c 24 0c 52 03 00 	cmpl   $0x352,0xc(%esp)
    254b:	00 
    254c:	75 0b                	jne    2559 <phase_1+0x3b>
    254e:	83 c4 1c             	add    $0x1c,%esp
    2551:	c3                   	ret    
    2552:	e8 ec 06 00 00       	call   2c43 <explode_bomb>
    2557:	eb eb                	jmp    2544 <phase_1+0x26>
    2559:	e8 e5 06 00 00       	call   2c43 <explode_bomb>
    255e:	eb ee                	jmp    254e <phase_1+0x30>

00002560 <phase_2>:
    2560:	83 ec 14             	sub    $0x14,%esp
    2563:	68 ac 41 00 00       	push   $0x41ac
    2568:	ff 74 24 1c          	push   0x1c(%esp)
    256c:	e8 8a 04 00 00       	call   29fb <strings_not_equal>
    2571:	83 c4 10             	add    $0x10,%esp
    2574:	85 c0                	test   %eax,%eax
    2576:	75 04                	jne    257c <phase_2+0x1c>
    2578:	83 c4 0c             	add    $0xc,%esp
    257b:	c3                   	ret    
    257c:	e8 c2 06 00 00       	call   2c43 <explode_bomb>
    2581:	eb f5                	jmp    2578 <phase_2+0x18>

00002583 <phase_3>:
    2583:	83 ec 18             	sub    $0x18,%esp
    2586:	68 e0 41 00 00       	push   $0x41e0
    258b:	e8 4d 04 00 00       	call   29dd <string_length>
    2590:	83 c0 01             	add    $0x1,%eax
    2593:	89 04 24             	mov    %eax,(%esp)
    2596:	e8 fc ff ff ff       	call   2597 <phase_3+0x14>
    259b:	c7 00 44 6f 20 79    	movl   $0x79206f44,(%eax)
    25a1:	c7 40 04 6f 75 20 72 	movl   $0x7220756f,0x4(%eax)
    25a8:	c7 40 08 65 6d 65 6d 	movl   $0x6d656d65,0x8(%eax)
    25af:	c7 40 0c 62 65 72 20 	movl   $0x20726562,0xc(%eax)
    25b6:	c7 40 10 74 68 65 20 	movl   $0x20656874,0x10(%eax)
    25bd:	c7 40 14 74 77 65 6e 	movl   $0x6e657774,0x14(%eax)
    25c4:	c7 40 18 74 79 2d 66 	movl   $0x662d7974,0x18(%eax)
    25cb:	c7 40 1c 69 72 73 74 	movl   $0x74737269,0x1c(%eax)
    25d2:	c7 40 20 20 6f 66 20 	movl   $0x20666f20,0x20(%eax)
    25d9:	c7 40 24 53 65 70 74 	movl   $0x74706553,0x24(%eax)
    25e0:	c7 40 28 65 6d 62 65 	movl   $0x65626d65,0x28(%eax)
    25e7:	66 c7 40 2c 72 3f    	movw   $0x3f72,0x2c(%eax)
    25ed:	c6 40 2e 00          	movb   $0x0,0x2e(%eax)
    25f1:	c6 40 05 6f          	movb   $0x6f,0x5(%eax)
    25f5:	83 c4 08             	add    $0x8,%esp
    25f8:	50                   	push   %eax
    25f9:	ff 74 24 1c          	push   0x1c(%esp)
    25fd:	e8 f9 03 00 00       	call   29fb <strings_not_equal>
    2602:	83 c4 10             	add    $0x10,%esp
    2605:	85 c0                	test   %eax,%eax
    2607:	75 04                	jne    260d <phase_3+0x8a>
    2609:	83 c4 0c             	add    $0xc,%esp
    260c:	c3                   	ret    
    260d:	e8 31 06 00 00       	call   2c43 <explode_bomb>
    2612:	eb f5                	jmp    2609 <phase_3+0x86>

00002614 <phase_4>:
    2614:	56                   	push   %esi
    2615:	53                   	push   %ebx
    2616:	83 ec 10             	sub    $0x10,%esp
    2619:	8b 74 24 1c          	mov    0x1c(%esp),%esi
    261d:	56                   	push   %esi
    261e:	e8 ba 03 00 00       	call   29dd <string_length>
    2623:	89 c3                	mov    %eax,%ebx
    2625:	8d 40 01             	lea    0x1(%eax),%eax
    2628:	89 04 24             	mov    %eax,(%esp)
    262b:	e8 fc ff ff ff       	call   262c <phase_4+0x18>
    2630:	8d 14 18             	lea    (%eax,%ebx,1),%edx
    2633:	c6 02 00             	movb   $0x0,(%edx)
    2636:	0f b6 0e             	movzbl (%esi),%ecx
    2639:	83 c4 10             	add    $0x10,%esp
    263c:	84 c9                	test   %cl,%cl
    263e:	74 0f                	je     264f <phase_4+0x3b>
    2640:	83 ea 01             	sub    $0x1,%edx
    2643:	88 0a                	mov    %cl,(%edx)
    2645:	83 c6 01             	add    $0x1,%esi
    2648:	0f b6 0e             	movzbl (%esi),%ecx
    264b:	84 c9                	test   %cl,%cl
    264d:	75 f1                	jne    2640 <phase_4+0x2c>
    264f:	83 ec 08             	sub    $0x8,%esp
    2652:	50                   	push   %eax
    2653:	68 8f 41 00 00       	push   $0x418f
    2658:	e8 9e 03 00 00       	call   29fb <strings_not_equal>
    265d:	83 c4 10             	add    $0x10,%esp
    2660:	85 c0                	test   %eax,%eax
    2662:	75 06                	jne    266a <phase_4+0x56>
    2664:	83 c4 04             	add    $0x4,%esp
    2667:	5b                   	pop    %ebx
    2668:	5e                   	pop    %esi
    2669:	c3                   	ret    
    266a:	e8 d4 05 00 00       	call   2c43 <explode_bomb>
    266f:	eb f3                	jmp    2664 <phase_4+0x50>

00002671 <phase_5>:
    2671:	83 ec 20             	sub    $0x20,%esp
    2674:	8d 44 24 10          	lea    0x10(%esp),%eax
    2678:	50                   	push   %eax
    2679:	68 20 44 00 00       	push   $0x4420
    267e:	ff 74 24 2c          	push   0x2c(%esp)
    2682:	e8 fc ff ff ff       	call   2683 <phase_5+0x12>
    2687:	83 c4 10             	add    $0x10,%esp
    268a:	83 f8 01             	cmp    $0x1,%eax
    268d:	75 29                	jne    26b8 <phase_5+0x47>
    268f:	8b 4c 24 0c          	mov    0xc(%esp),%ecx
    2693:	83 f9 02             	cmp    $0x2,%ecx
    2696:	7e 27                	jle    26bf <phase_5+0x4e>
    2698:	ba 01 00 00 00       	mov    $0x1,%edx
    269d:	b8 02 00 00 00       	mov    $0x2,%eax
    26a2:	0f af d0             	imul   %eax,%edx
    26a5:	83 c0 01             	add    $0x1,%eax
    26a8:	39 c8                	cmp    %ecx,%eax
    26aa:	75 f6                	jne    26a2 <phase_5+0x31>
    26ac:	81 fa d0 02 00 00    	cmp    $0x2d0,%edx
    26b2:	75 0b                	jne    26bf <phase_5+0x4e>
    26b4:	83 c4 1c             	add    $0x1c,%esp
    26b7:	c3                   	ret    
    26b8:	e8 86 05 00 00       	call   2c43 <explode_bomb>
    26bd:	eb d0                	jmp    268f <phase_5+0x1e>
    26bf:	e8 7f 05 00 00       	call   2c43 <explode_bomb>
    26c4:	eb ee                	jmp    26b4 <phase_5+0x43>

000026c6 <func6>:
    26c6:	53                   	push   %ebx
    26c7:	83 ec 08             	sub    $0x8,%esp
    26ca:	8b 4c 24 10          	mov    0x10(%esp),%ecx
    26ce:	8b 5c 24 18          	mov    0x18(%esp),%ebx
    26d2:	89 d8                	mov    %ebx,%eax
    26d4:	2b 44 24 14          	sub    0x14(%esp),%eax
    26d8:	89 c2                	mov    %eax,%edx
    26da:	c1 ea 1f             	shr    $0x1f,%edx
    26dd:	01 c2                	add    %eax,%edx
    26df:	d1 fa                	sar    %edx
    26e1:	03 54 24 14          	add    0x14(%esp),%edx
    26e5:	39 ca                	cmp    %ecx,%edx
    26e7:	7f 0c                	jg     26f5 <func6+0x2f>
    26e9:	b8 00 00 00 00       	mov    $0x0,%eax
    26ee:	7c 1d                	jl     270d <func6+0x47>
    26f0:	83 c4 08             	add    $0x8,%esp
    26f3:	5b                   	pop    %ebx
    26f4:	c3                   	ret    
    26f5:	83 ec 04             	sub    $0x4,%esp
    26f8:	83 ea 01             	sub    $0x1,%edx
    26fb:	52                   	push   %edx
    26fc:	ff 74 24 1c          	push   0x1c(%esp)
    2700:	51                   	push   %ecx
    2701:	e8 c0 ff ff ff       	call   26c6 <func6>
    2706:	83 c4 10             	add    $0x10,%esp
    2709:	01 c0                	add    %eax,%eax
    270b:	eb e3                	jmp    26f0 <func6+0x2a>
    270d:	83 ec 04             	sub    $0x4,%esp
    2710:	53                   	push   %ebx
    2711:	83 c2 01             	add    $0x1,%edx
    2714:	52                   	push   %edx
    2715:	51                   	push   %ecx
    2716:	e8 ab ff ff ff       	call   26c6 <func6>
    271b:	83 c4 10             	add    $0x10,%esp
    271e:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
    2722:	eb cc                	jmp    26f0 <func6+0x2a>

00002724 <phase_6>:
    2724:	83 ec 1c             	sub    $0x1c,%esp
    2727:	8d 44 24 08          	lea    0x8(%esp),%eax
    272b:	50                   	push   %eax
    272c:	8d 44 24 10          	lea    0x10(%esp),%eax
    2730:	50                   	push   %eax
    2731:	68 1d 44 00 00       	push   $0x441d
    2736:	ff 74 24 2c          	push   0x2c(%esp)
    273a:	e8 fc ff ff ff       	call   273b <phase_6+0x17>
    273f:	83 c4 10             	add    $0x10,%esp
    2742:	83 f8 02             	cmp    $0x2,%eax
    2745:	75 07                	jne    274e <phase_6+0x2a>
    2747:	83 7c 24 0c 0e       	cmpl   $0xe,0xc(%esp)
    274c:	76 05                	jbe    2753 <phase_6+0x2f>
    274e:	e8 f0 04 00 00       	call   2c43 <explode_bomb>
    2753:	83 ec 04             	sub    $0x4,%esp
    2756:	6a 0e                	push   $0xe
    2758:	6a 00                	push   $0x0
    275a:	ff 74 24 18          	push   0x18(%esp)
    275e:	e8 63 ff ff ff       	call   26c6 <func6>
    2763:	83 c4 10             	add    $0x10,%esp
    2766:	83 f8 03             	cmp    $0x3,%eax
    2769:	75 07                	jne    2772 <phase_6+0x4e>
    276b:	83 7c 24 08 03       	cmpl   $0x3,0x8(%esp)
    2770:	74 05                	je     2777 <phase_6+0x53>
    2772:	e8 cc 04 00 00       	call   2c43 <explode_bomb>
    2777:	83 c4 1c             	add    $0x1c,%esp
    277a:	c3                   	ret    

0000277b <phase_7>:
    277b:	53                   	push   %ebx
    277c:	83 ec 14             	sub    $0x14,%esp
    277f:	8b 5c 24 1c          	mov    0x1c(%esp),%ebx
    2783:	53                   	push   %ebx
    2784:	e8 54 02 00 00       	call   29dd <string_length>
    2789:	83 c4 10             	add    $0x10,%esp
    278c:	83 f8 06             	cmp    $0x6,%eax
    278f:	75 28                	jne    27b9 <phase_7+0x3e>
    2791:	89 d8                	mov    %ebx,%eax
    2793:	83 c3 06             	add    $0x6,%ebx
    2796:	b9 00 00 00 00       	mov    $0x0,%ecx
    279b:	0f b6 10             	movzbl (%eax),%edx
    279e:	83 e2 0f             	and    $0xf,%edx
    27a1:	03 0c 95 20 42 00 00 	add    0x4220(,%edx,4),%ecx
    27a8:	83 c0 01             	add    $0x1,%eax
    27ab:	39 d8                	cmp    %ebx,%eax
    27ad:	75 ec                	jne    279b <phase_7+0x20>
    27af:	83 f9 26             	cmp    $0x26,%ecx
    27b2:	75 0c                	jne    27c0 <phase_7+0x45>
    27b4:	83 c4 08             	add    $0x8,%esp
    27b7:	5b                   	pop    %ebx
    27b8:	c3                   	ret    
    27b9:	e8 85 04 00 00       	call   2c43 <explode_bomb>
    27be:	eb d1                	jmp    2791 <phase_7+0x16>
    27c0:	e8 7e 04 00 00       	call   2c43 <explode_bomb>
    27c5:	eb ed                	jmp    27b4 <phase_7+0x39>

000027c7 <phase_8>:
    27c7:	55                   	push   %ebp
    27c8:	57                   	push   %edi
    27c9:	56                   	push   %esi
    27ca:	53                   	push   %ebx
    27cb:	83 ec 54             	sub    $0x54,%esp
    27ce:	8d 44 24 30          	lea    0x30(%esp),%eax
    27d2:	50                   	push   %eax
    27d3:	ff 74 24 6c          	push   0x6c(%esp)
    27d7:	e8 a6 04 00 00       	call   2c82 <read_six_numbers>
    27dc:	8d 7c 24 38          	lea    0x38(%esp),%edi
    27e0:	83 c4 10             	add    $0x10,%esp
    27e3:	89 fd                	mov    %edi,%ebp
    27e5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
    27ec:	00 
    27ed:	eb 21                	jmp    2810 <phase_8+0x49>
    27ef:	e8 4f 04 00 00       	call   2c43 <explode_bomb>
    27f4:	eb 27                	jmp    281d <phase_8+0x56>
    27f6:	83 c3 01             	add    $0x1,%ebx
    27f9:	83 fb 06             	cmp    $0x6,%ebx
    27fc:	74 0f                	je     280d <phase_8+0x46>
    27fe:	8b 44 9c 28          	mov    0x28(%esp,%ebx,4),%eax
    2802:	39 06                	cmp    %eax,(%esi)
    2804:	75 f0                	jne    27f6 <phase_8+0x2f>
    2806:	e8 38 04 00 00       	call   2c43 <explode_bomb>
    280b:	eb e9                	jmp    27f6 <phase_8+0x2f>
    280d:	83 c5 04             	add    $0x4,%ebp
    2810:	89 ee                	mov    %ebp,%esi
    2812:	8b 45 00             	mov    0x0(%ebp),%eax
    2815:	83 e8 01             	sub    $0x1,%eax
    2818:	83 f8 05             	cmp    $0x5,%eax
    281b:	77 d2                	ja     27ef <phase_8+0x28>
    281d:	83 44 24 0c 01       	addl   $0x1,0xc(%esp)
    2822:	8b 5c 24 0c          	mov    0xc(%esp),%ebx
    2826:	83 fb 05             	cmp    $0x5,%ebx
    2829:	7e d3                	jle    27fe <phase_8+0x37>
    282b:	8d 54 24 40          	lea    0x40(%esp),%edx
    282f:	b9 07 00 00 00       	mov    $0x7,%ecx
    2834:	89 c8                	mov    %ecx,%eax
    2836:	2b 07                	sub    (%edi),%eax
    2838:	89 07                	mov    %eax,(%edi)
    283a:	83 c7 04             	add    $0x4,%edi
    283d:	39 fa                	cmp    %edi,%edx
    283f:	75 f3                	jne    2834 <phase_8+0x6d>
    2841:	bb 00 00 00 00       	mov    $0x0,%ebx
    2846:	89 de                	mov    %ebx,%esi
    2848:	8b 4c 9c 28          	mov    0x28(%esp,%ebx,4),%ecx
    284c:	b8 01 00 00 00       	mov    $0x1,%eax
    2851:	ba d4 70 00 00       	mov    $0x70d4,%edx
    2856:	83 f9 01             	cmp    $0x1,%ecx
    2859:	7e 0a                	jle    2865 <phase_8+0x9e>
    285b:	8b 52 08             	mov    0x8(%edx),%edx
    285e:	83 c0 01             	add    $0x1,%eax
    2861:	39 c8                	cmp    %ecx,%eax
    2863:	75 f6                	jne    285b <phase_8+0x94>
    2865:	89 54 b4 10          	mov    %edx,0x10(%esp,%esi,4)
    2869:	83 c3 01             	add    $0x1,%ebx
    286c:	83 fb 06             	cmp    $0x6,%ebx
    286f:	75 d5                	jne    2846 <phase_8+0x7f>
    2871:	8b 5c 24 10          	mov    0x10(%esp),%ebx
    2875:	8b 44 24 14          	mov    0x14(%esp),%eax
    2879:	89 43 08             	mov    %eax,0x8(%ebx)
    287c:	8b 54 24 18          	mov    0x18(%esp),%edx
    2880:	89 50 08             	mov    %edx,0x8(%eax)
    2883:	8b 44 24 1c          	mov    0x1c(%esp),%eax
    2887:	89 42 08             	mov    %eax,0x8(%edx)
    288a:	8b 54 24 20          	mov    0x20(%esp),%edx
    288e:	89 50 08             	mov    %edx,0x8(%eax)
    2891:	8b 44 24 24          	mov    0x24(%esp),%eax
    2895:	89 42 08             	mov    %eax,0x8(%edx)
    2898:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
    289f:	be 05 00 00 00       	mov    $0x5,%esi
    28a4:	eb 08                	jmp    28ae <phase_8+0xe7>
    28a6:	8b 5b 08             	mov    0x8(%ebx),%ebx
    28a9:	83 ee 01             	sub    $0x1,%esi
    28ac:	74 10                	je     28be <phase_8+0xf7>
    28ae:	8b 43 08             	mov    0x8(%ebx),%eax
    28b1:	8b 00                	mov    (%eax),%eax
    28b3:	39 03                	cmp    %eax,(%ebx)
    28b5:	7d ef                	jge    28a6 <phase_8+0xdf>
    28b7:	e8 87 03 00 00       	call   2c43 <explode_bomb>
    28bc:	eb e8                	jmp    28a6 <phase_8+0xdf>
    28be:	83 c4 4c             	add    $0x4c,%esp
    28c1:	5b                   	pop    %ebx
    28c2:	5e                   	pop    %esi
    28c3:	5f                   	pop    %edi
    28c4:	5d                   	pop    %ebp
    28c5:	c3                   	ret    

000028c6 <fun9>:
    28c6:	53                   	push   %ebx
    28c7:	83 ec 08             	sub    $0x8,%esp
    28ca:	8b 54 24 10          	mov    0x10(%esp),%edx
    28ce:	8b 4c 24 14          	mov    0x14(%esp),%ecx
    28d2:	85 d2                	test   %edx,%edx
    28d4:	74 3a                	je     2910 <fun9+0x4a>
    28d6:	8b 1a                	mov    (%edx),%ebx
    28d8:	39 cb                	cmp    %ecx,%ebx
    28da:	7f 0c                	jg     28e8 <fun9+0x22>
    28dc:	b8 00 00 00 00       	mov    $0x0,%eax
    28e1:	75 18                	jne    28fb <fun9+0x35>
    28e3:	83 c4 08             	add    $0x8,%esp
    28e6:	5b                   	pop    %ebx
    28e7:	c3                   	ret    
    28e8:	83 ec 08             	sub    $0x8,%esp
    28eb:	51                   	push   %ecx
    28ec:	ff 72 04             	push   0x4(%edx)
    28ef:	e8 d2 ff ff ff       	call   28c6 <fun9>
    28f4:	83 c4 10             	add    $0x10,%esp
    28f7:	01 c0                	add    %eax,%eax
    28f9:	eb e8                	jmp    28e3 <fun9+0x1d>
    28fb:	83 ec 08             	sub    $0x8,%esp
    28fe:	51                   	push   %ecx
    28ff:	ff 72 08             	push   0x8(%edx)
    2902:	e8 bf ff ff ff       	call   28c6 <fun9>
    2907:	83 c4 10             	add    $0x10,%esp
    290a:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
    290e:	eb d3                	jmp    28e3 <fun9+0x1d>
    2910:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    2915:	eb cc                	jmp    28e3 <fun9+0x1d>

00002917 <phase_9>:
    2917:	53                   	push   %ebx
    2918:	83 ec 0c             	sub    $0xc,%esp
    291b:	6a 0a                	push   $0xa
    291d:	6a 00                	push   $0x0
    291f:	ff 74 24 1c          	push   0x1c(%esp)
    2923:	e8 fc ff ff ff       	call   2924 <phase_9+0xd>
    2928:	89 c3                	mov    %eax,%ebx
    292a:	8d 40 ff             	lea    -0x1(%eax),%eax
    292d:	83 c4 10             	add    $0x10,%esp
    2930:	3d e8 03 00 00       	cmp    $0x3e8,%eax
    2935:	77 1b                	ja     2952 <phase_9+0x3b>
    2937:	83 ec 08             	sub    $0x8,%esp
    293a:	53                   	push   %ebx
    293b:	68 20 70 00 00       	push   $0x7020
    2940:	e8 81 ff ff ff       	call   28c6 <fun9>
    2945:	83 c4 10             	add    $0x10,%esp
    2948:	83 f8 04             	cmp    $0x4,%eax
    294b:	75 0c                	jne    2959 <phase_9+0x42>
    294d:	83 c4 08             	add    $0x8,%esp
    2950:	5b                   	pop    %ebx
    2951:	c3                   	ret    
    2952:	e8 ec 02 00 00       	call   2c43 <explode_bomb>
    2957:	eb de                	jmp    2937 <phase_9+0x20>
    2959:	e8 e5 02 00 00       	call   2c43 <explode_bomb>
    295e:	eb ed                	jmp    294d <phase_9+0x36>

00002960 <sig_handler>:
    2960:	56                   	push   %esi
    2961:	5e                   	pop    %esi
    2962:	83 ec 18             	sub    $0x18,%esp
    2965:	68 60 42 00 00       	push   $0x4260
    296a:	e8 fc ff ff ff       	call   296b <sig_handler+0xb>
    296f:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
    2976:	e8 fc ff ff ff       	call   2977 <sig_handler+0x17>
    297b:	83 c4 08             	add    $0x8,%esp
    297e:	68 99 43 00 00       	push   $0x4399
    2983:	6a 01                	push   $0x1
    2985:	e8 fc ff ff ff       	call   2986 <sig_handler+0x26>
    298a:	83 c4 04             	add    $0x4,%esp
    298d:	ff 35 00 00 00 00    	push   0x0
    2993:	e8 fc ff ff ff       	call   2994 <sig_handler+0x34>
    2998:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
    299f:	e8 fc ff ff ff       	call   29a0 <sig_handler+0x40>
    29a4:	c7 04 24 a1 43 00 00 	movl   $0x43a1,(%esp)
    29ab:	e8 fc ff ff ff       	call   29ac <sig_handler+0x4c>
    29b0:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
    29b7:	e8 fc ff ff ff       	call   29b8 <sig_handler+0x58>

000029bc <invalid_phase>:
    29bc:	56                   	push   %esi
    29bd:	5e                   	pop    %esi
    29be:	83 ec 10             	sub    $0x10,%esp
    29c1:	ff 74 24 14          	push   0x14(%esp)
    29c5:	68 a9 43 00 00       	push   $0x43a9
    29ca:	6a 01                	push   $0x1
    29cc:	e8 fc ff ff ff       	call   29cd <invalid_phase+0x11>
    29d1:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
    29d8:	e8 fc ff ff ff       	call   29d9 <invalid_phase+0x1d>

000029dd <string_length>:
    29dd:	8b 54 24 04          	mov    0x4(%esp),%edx
    29e1:	80 3a 00             	cmpb   $0x0,(%edx)
    29e4:	74 0f                	je     29f5 <string_length+0x18>
    29e6:	b8 00 00 00 00       	mov    $0x0,%eax
    29eb:	83 c0 01             	add    $0x1,%eax
    29ee:	80 3c 02 00          	cmpb   $0x0,(%edx,%eax,1)
    29f2:	75 f7                	jne    29eb <string_length+0xe>
    29f4:	c3                   	ret    
    29f5:	b8 00 00 00 00       	mov    $0x0,%eax
    29fa:	c3                   	ret    

000029fb <strings_not_equal>:
    29fb:	57                   	push   %edi
    29fc:	56                   	push   %esi
    29fd:	53                   	push   %ebx
    29fe:	8b 5c 24 10          	mov    0x10(%esp),%ebx
    2a02:	8b 74 24 14          	mov    0x14(%esp),%esi
    2a06:	53                   	push   %ebx
    2a07:	e8 d1 ff ff ff       	call   29dd <string_length>
    2a0c:	89 c7                	mov    %eax,%edi
    2a0e:	89 34 24             	mov    %esi,(%esp)
    2a11:	e8 c7 ff ff ff       	call   29dd <string_length>
    2a16:	83 c4 04             	add    $0x4,%esp
    2a19:	89 c2                	mov    %eax,%edx
    2a1b:	b8 01 00 00 00       	mov    $0x1,%eax
    2a20:	39 d7                	cmp    %edx,%edi
    2a22:	75 2b                	jne    2a4f <strings_not_equal+0x54>
    2a24:	0f b6 03             	movzbl (%ebx),%eax
    2a27:	84 c0                	test   %al,%al
    2a29:	74 18                	je     2a43 <strings_not_equal+0x48>
    2a2b:	38 06                	cmp    %al,(%esi)
    2a2d:	75 1b                	jne    2a4a <strings_not_equal+0x4f>
    2a2f:	83 c3 01             	add    $0x1,%ebx
    2a32:	83 c6 01             	add    $0x1,%esi
    2a35:	0f b6 03             	movzbl (%ebx),%eax
    2a38:	84 c0                	test   %al,%al
    2a3a:	75 ef                	jne    2a2b <strings_not_equal+0x30>
    2a3c:	b8 00 00 00 00       	mov    $0x0,%eax
    2a41:	eb 0c                	jmp    2a4f <strings_not_equal+0x54>
    2a43:	b8 00 00 00 00       	mov    $0x0,%eax
    2a48:	eb 05                	jmp    2a4f <strings_not_equal+0x54>
    2a4a:	b8 01 00 00 00       	mov    $0x1,%eax
    2a4f:	5b                   	pop    %ebx
    2a50:	5e                   	pop    %esi
    2a51:	5f                   	pop    %edi
    2a52:	c3                   	ret    

00002a53 <initialize_bomb>:
    2a53:	56                   	push   %esi
    2a54:	53                   	push   %ebx
    2a55:	81 ec 00 10 00 00    	sub    $0x1000,%esp
    2a5b:	83 0c 24 00          	orl    $0x0,(%esp)
    2a5f:	81 ec 00 10 00 00    	sub    $0x1000,%esp
    2a65:	83 0c 24 00          	orl    $0x0,(%esp)
    2a69:	83 ec 4c             	sub    $0x4c,%esp
    2a6c:	68 60 29 00 00       	push   $0x2960
    2a71:	6a 02                	push   $0x2
    2a73:	e8 fc ff ff ff       	call   2a74 <initialize_bomb+0x21>
    2a78:	83 c4 08             	add    $0x8,%esp
    2a7b:	6a 40                	push   $0x40
    2a7d:	8d 84 24 0c 20 00 00 	lea    0x200c(%esp),%eax
    2a84:	50                   	push   %eax
    2a85:	e8 fc ff ff ff       	call   2a86 <initialize_bomb+0x33>
    2a8a:	83 c4 10             	add    $0x10,%esp
    2a8d:	85 c0                	test   %eax,%eax
    2a8f:	75 4a                	jne    2adb <initialize_bomb+0x88>
    2a91:	89 c3                	mov    %eax,%ebx
    2a93:	a1 40 75 00 00       	mov    0x7540,%eax
    2a98:	8d b4 24 00 20 00 00 	lea    0x2000(%esp),%esi
    2a9f:	85 c0                	test   %eax,%eax
    2aa1:	74 1f                	je     2ac2 <initialize_bomb+0x6f>
    2aa3:	83 ec 08             	sub    $0x8,%esp
    2aa6:	56                   	push   %esi
    2aa7:	50                   	push   %eax
    2aa8:	e8 fc ff ff ff       	call   2aa9 <initialize_bomb+0x56>
    2aad:	83 c4 10             	add    $0x10,%esp
    2ab0:	85 c0                	test   %eax,%eax
    2ab2:	74 60                	je     2b14 <initialize_bomb+0xc1>
    2ab4:	83 c3 01             	add    $0x1,%ebx
    2ab7:	8b 04 9d 40 75 00 00 	mov    0x7540(,%ebx,4),%eax
    2abe:	85 c0                	test   %eax,%eax
    2ac0:	75 e1                	jne    2aa3 <initialize_bomb+0x50>
    2ac2:	83 ec 0c             	sub    $0xc,%esp
    2ac5:	68 d0 42 00 00       	push   $0x42d0
    2aca:	e8 fc ff ff ff       	call   2acb <initialize_bomb+0x78>
    2acf:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
    2ad6:	e8 fc ff ff ff       	call   2ad7 <initialize_bomb+0x84>
    2adb:	83 ec 0c             	sub    $0xc,%esp
    2ade:	68 98 42 00 00       	push   $0x4298
    2ae3:	e8 fc ff ff ff       	call   2ae4 <initialize_bomb+0x91>
    2ae8:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
    2aef:	e8 fc ff ff ff       	call   2af0 <initialize_bomb+0x9d>
    2af4:	83 ec 04             	sub    $0x4,%esp
    2af7:	8d 44 24 04          	lea    0x4(%esp),%eax
    2afb:	50                   	push   %eax
    2afc:	68 ba 43 00 00       	push   $0x43ba
    2b01:	6a 01                	push   $0x1
    2b03:	e8 fc ff ff ff       	call   2b04 <initialize_bomb+0xb1>
    2b08:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
    2b0f:	e8 fc ff ff ff       	call   2b10 <initialize_bomb+0xbd>
    2b14:	83 ec 0c             	sub    $0xc,%esp
    2b17:	8d 44 24 0c          	lea    0xc(%esp),%eax
    2b1b:	50                   	push   %eax
    2b1c:	e8 8f 0b 00 00       	call   36b0 <init_driver>
    2b21:	83 c4 10             	add    $0x10,%esp
    2b24:	85 c0                	test   %eax,%eax
    2b26:	78 cc                	js     2af4 <initialize_bomb+0xa1>
    2b28:	81 c4 44 20 00 00    	add    $0x2044,%esp
    2b2e:	5b                   	pop    %ebx
    2b2f:	5e                   	pop    %esi
    2b30:	c3                   	ret    

00002b31 <initialize_bomb_solve>:
    2b31:	c3                   	ret    

00002b32 <blank_line>:
    2b32:	56                   	push   %esi
    2b33:	53                   	push   %ebx
    2b34:	83 ec 04             	sub    $0x4,%esp
    2b37:	8b 74 24 10          	mov    0x10(%esp),%esi
    2b3b:	0f b6 1e             	movzbl (%esi),%ebx
    2b3e:	84 db                	test   %bl,%bl
    2b40:	74 1b                	je     2b5d <blank_line+0x2b>
    2b42:	e8 fc ff ff ff       	call   2b43 <blank_line+0x11>
    2b47:	83 c6 01             	add    $0x1,%esi
    2b4a:	0f be db             	movsbl %bl,%ebx
    2b4d:	8b 00                	mov    (%eax),%eax
    2b4f:	f6 44 58 01 20       	testb  $0x20,0x1(%eax,%ebx,2)
    2b54:	75 e5                	jne    2b3b <blank_line+0x9>
    2b56:	b8 00 00 00 00       	mov    $0x0,%eax
    2b5b:	eb 05                	jmp    2b62 <blank_line+0x30>
    2b5d:	b8 01 00 00 00       	mov    $0x1,%eax
    2b62:	83 c4 04             	add    $0x4,%esp
    2b65:	5b                   	pop    %ebx
    2b66:	5e                   	pop    %esi
    2b67:	c3                   	ret    

00002b68 <skip>:
    2b68:	53                   	push   %ebx
    2b69:	83 ec 08             	sub    $0x8,%esp
    2b6c:	83 ec 04             	sub    $0x4,%esp
    2b6f:	ff 35 6c 77 00 00    	push   0x776c
    2b75:	6a 55                	push   $0x55
    2b77:	6b 05 d8 77 00 00 55 	imul   $0x55,0x77d8,%eax
    2b7e:	05 e0 77 00 00       	add    $0x77e0,%eax
    2b83:	50                   	push   %eax
    2b84:	e8 fc ff ff ff       	call   2b85 <skip+0x1d>
    2b89:	89 c3                	mov    %eax,%ebx
    2b8b:	83 c4 10             	add    $0x10,%esp
    2b8e:	85 c0                	test   %eax,%eax
    2b90:	74 10                	je     2ba2 <skip+0x3a>
    2b92:	83 ec 0c             	sub    $0xc,%esp
    2b95:	50                   	push   %eax
    2b96:	e8 97 ff ff ff       	call   2b32 <blank_line>
    2b9b:	83 c4 10             	add    $0x10,%esp
    2b9e:	85 c0                	test   %eax,%eax
    2ba0:	75 ca                	jne    2b6c <skip+0x4>
    2ba2:	89 d8                	mov    %ebx,%eax
    2ba4:	83 c4 08             	add    $0x8,%esp
    2ba7:	5b                   	pop    %ebx
    2ba8:	c3                   	ret    

00002ba9 <send_msg>:
    2ba9:	53                   	push   %ebx
    2baa:	8d 84 24 00 c0 ff ff 	lea    -0x4000(%esp),%eax
    2bb1:	81 ec 00 10 00 00    	sub    $0x1000,%esp
    2bb7:	83 0c 24 00          	orl    $0x0,(%esp)
    2bbb:	39 c4                	cmp    %eax,%esp
    2bbd:	75 f2                	jne    2bb1 <send_msg+0x8>
    2bbf:	83 ec 08             	sub    $0x8,%esp
    2bc2:	8b 0d d8 77 00 00    	mov    0x77d8,%ecx
    2bc8:	8d 41 ff             	lea    -0x1(%ecx),%eax
    2bcb:	6b c0 55             	imul   $0x55,%eax,%eax
    2bce:	05 e0 77 00 00       	add    $0x77e0,%eax
    2bd3:	83 bc 24 10 40 00 00 	cmpl   $0x0,0x4010(%esp)
    2bda:	00 
    2bdb:	ba d4 43 00 00       	mov    $0x43d4,%edx
    2be0:	bb dc 43 00 00       	mov    $0x43dc,%ebx
    2be5:	0f 44 d3             	cmove  %ebx,%edx
    2be8:	50                   	push   %eax
    2be9:	51                   	push   %ecx
    2bea:	52                   	push   %edx
    2beb:	ff 35 20 75 00 00    	push   0x7520
    2bf1:	68 e5 43 00 00       	push   $0x43e5
    2bf6:	68 00 20 00 00       	push   $0x2000
    2bfb:	6a 01                	push   $0x1
    2bfd:	8d 9c 24 1c 20 00 00 	lea    0x201c(%esp),%ebx
    2c04:	53                   	push   %ebx
    2c05:	e8 fc ff ff ff       	call   2c06 <send_msg+0x5d>
    2c0a:	83 c4 20             	add    $0x20,%esp
    2c0d:	54                   	push   %esp
    2c0e:	6a 00                	push   $0x0
    2c10:	53                   	push   %ebx
    2c11:	68 20 71 00 00       	push   $0x7120
    2c16:	e8 4f 0c 00 00       	call   386a <driver_post>
    2c1b:	83 c4 10             	add    $0x10,%esp
    2c1e:	85 c0                	test   %eax,%eax
    2c20:	78 08                	js     2c2a <send_msg+0x81>
    2c22:	81 c4 08 40 00 00    	add    $0x4008,%esp
    2c28:	5b                   	pop    %ebx
    2c29:	c3                   	ret    
    2c2a:	83 ec 0c             	sub    $0xc,%esp
    2c2d:	8d 44 24 0c          	lea    0xc(%esp),%eax
    2c31:	50                   	push   %eax
    2c32:	e8 fc ff ff ff       	call   2c33 <send_msg+0x8a>
    2c37:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
    2c3e:	e8 fc ff ff ff       	call   2c3f <send_msg+0x96>

00002c43 <explode_bomb>:
    2c43:	56                   	push   %esi
    2c44:	5e                   	pop    %esi
    2c45:	83 ec 18             	sub    $0x18,%esp
    2c48:	68 f1 43 00 00       	push   $0x43f1
    2c4d:	e8 fc ff ff ff       	call   2c4e <explode_bomb+0xb>
    2c52:	c7 04 24 fa 43 00 00 	movl   $0x43fa,(%esp)
    2c59:	e8 fc ff ff ff       	call   2c5a <explode_bomb+0x17>
    2c5e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
    2c65:	e8 3f ff ff ff       	call   2ba9 <send_msg>
    2c6a:	c7 04 24 08 43 00 00 	movl   $0x4308,(%esp)
    2c71:	e8 fc ff ff ff       	call   2c72 <explode_bomb+0x2f>
    2c76:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
    2c7d:	e8 fc ff ff ff       	call   2c7e <explode_bomb+0x3b>

00002c82 <read_six_numbers>:
    2c82:	83 ec 0c             	sub    $0xc,%esp
    2c85:	8b 44 24 14          	mov    0x14(%esp),%eax
    2c89:	8d 50 14             	lea    0x14(%eax),%edx
    2c8c:	52                   	push   %edx
    2c8d:	8d 50 10             	lea    0x10(%eax),%edx
    2c90:	52                   	push   %edx
    2c91:	8d 50 0c             	lea    0xc(%eax),%edx
    2c94:	52                   	push   %edx
    2c95:	8d 50 08             	lea    0x8(%eax),%edx
    2c98:	52                   	push   %edx
    2c99:	8d 50 04             	lea    0x4(%eax),%edx
    2c9c:	52                   	push   %edx
    2c9d:	50                   	push   %eax
    2c9e:	68 11 44 00 00       	push   $0x4411
    2ca3:	ff 74 24 2c          	push   0x2c(%esp)
    2ca7:	e8 fc ff ff ff       	call   2ca8 <read_six_numbers+0x26>
    2cac:	83 c4 20             	add    $0x20,%esp
    2caf:	83 f8 05             	cmp    $0x5,%eax
    2cb2:	7e 04                	jle    2cb8 <read_six_numbers+0x36>
    2cb4:	83 c4 0c             	add    $0xc,%esp
    2cb7:	c3                   	ret    
    2cb8:	e8 86 ff ff ff       	call   2c43 <explode_bomb>

00002cbd <read_line>:
    2cbd:	57                   	push   %edi
    2cbe:	56                   	push   %esi
    2cbf:	53                   	push   %ebx
    2cc0:	e8 a3 fe ff ff       	call   2b68 <skip>
    2cc5:	85 c0                	test   %eax,%eax
    2cc7:	74 3e                	je     2d07 <read_line+0x4a>
    2cc9:	8b 1d d8 77 00 00    	mov    0x77d8,%ebx
    2ccf:	6b f3 55             	imul   $0x55,%ebx,%esi
    2cd2:	81 c6 e0 77 00 00    	add    $0x77e0,%esi
    2cd8:	83 ec 0c             	sub    $0xc,%esp
    2cdb:	56                   	push   %esi
    2cdc:	e8 fc ff ff ff       	call   2cdd <read_line+0x20>
    2ce1:	83 c4 10             	add    $0x10,%esp
    2ce4:	83 f8 53             	cmp    $0x53,%eax
    2ce7:	0f 8f 8e 00 00 00    	jg     2d7b <read_line+0xbe>
    2ced:	6b d3 55             	imul   $0x55,%ebx,%edx
    2cf0:	c6 84 10 df 77 00 00 	movb   $0x0,0x77df(%eax,%edx,1)
    2cf7:	00 
    2cf8:	83 c3 01             	add    $0x1,%ebx
    2cfb:	89 1d d8 77 00 00    	mov    %ebx,0x77d8
    2d01:	89 f0                	mov    %esi,%eax
    2d03:	5b                   	pop    %ebx
    2d04:	5e                   	pop    %esi
    2d05:	5f                   	pop    %edi
    2d06:	c3                   	ret    
    2d07:	a1 00 00 00 00       	mov    0x0,%eax
    2d0c:	39 05 6c 77 00 00    	cmp    %eax,0x776c
    2d12:	74 1e                	je     2d32 <read_line+0x75>
    2d14:	83 ec 0c             	sub    $0xc,%esp
    2d17:	68 41 44 00 00       	push   $0x4441
    2d1c:	e8 fc ff ff ff       	call   2d1d <read_line+0x60>
    2d21:	83 c4 10             	add    $0x10,%esp
    2d24:	85 c0                	test   %eax,%eax
    2d26:	74 23                	je     2d4b <read_line+0x8e>
    2d28:	83 ec 0c             	sub    $0xc,%esp
    2d2b:	6a 00                	push   $0x0
    2d2d:	e8 fc ff ff ff       	call   2d2e <read_line+0x71>
    2d32:	83 ec 0c             	sub    $0xc,%esp
    2d35:	68 23 44 00 00       	push   $0x4423
    2d3a:	e8 fc ff ff ff       	call   2d3b <read_line+0x7e>
    2d3f:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
    2d46:	e8 fc ff ff ff       	call   2d47 <read_line+0x8a>
    2d4b:	a1 00 00 00 00       	mov    0x0,%eax
    2d50:	a3 6c 77 00 00       	mov    %eax,0x776c
    2d55:	e8 0e fe ff ff       	call   2b68 <skip>
    2d5a:	85 c0                	test   %eax,%eax
    2d5c:	0f 85 67 ff ff ff    	jne    2cc9 <read_line+0xc>
    2d62:	83 ec 0c             	sub    $0xc,%esp
    2d65:	68 23 44 00 00       	push   $0x4423
    2d6a:	e8 fc ff ff ff       	call   2d6b <read_line+0xae>
    2d6f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
    2d76:	e8 fc ff ff ff       	call   2d77 <read_line+0xba>
    2d7b:	83 ec 0c             	sub    $0xc,%esp
    2d7e:	68 4c 44 00 00       	push   $0x444c
    2d83:	e8 fc ff ff ff       	call   2d84 <read_line+0xc7>
    2d88:	a1 d8 77 00 00       	mov    0x77d8,%eax
    2d8d:	8d 50 01             	lea    0x1(%eax),%edx
    2d90:	89 15 d8 77 00 00    	mov    %edx,0x77d8
    2d96:	6b c0 55             	imul   $0x55,%eax,%eax
    2d99:	05 e0 77 00 00       	add    $0x77e0,%eax
    2d9e:	be 67 44 00 00       	mov    $0x4467,%esi
    2da3:	b9 04 00 00 00       	mov    $0x4,%ecx
    2da8:	89 c7                	mov    %eax,%edi
    2daa:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
    2dac:	e8 92 fe ff ff       	call   2c43 <explode_bomb>

00002db1 <phase_defused>:
    2db1:	83 ec 18             	sub    $0x18,%esp
    2db4:	6a 01                	push   $0x1
    2db6:	e8 ee fd ff ff       	call   2ba9 <send_msg>
    2dbb:	83 c4 10             	add    $0x10,%esp
    2dbe:	83 3d d8 77 00 00 09 	cmpl   $0x9,0x77d8
    2dc5:	74 04                	je     2dcb <phase_defused+0x1a>
    2dc7:	83 c4 0c             	add    $0xc,%esp
    2dca:	c3                   	ret    
    2dcb:	83 ec 0c             	sub    $0xc,%esp
    2dce:	68 2c 43 00 00       	push   $0x432c
    2dd3:	e8 fc ff ff ff       	call   2dd4 <phase_defused+0x23>
    2dd8:	c7 04 24 58 43 00 00 	movl   $0x4358,(%esp)
    2ddf:	e8 fc ff ff ff       	call   2de0 <phase_defused+0x2f>
    2de4:	83 c4 10             	add    $0x10,%esp
    2de7:	eb de                	jmp    2dc7 <phase_defused+0x16>

00002de9 <sigalrm_handler>:
    2de9:	56                   	push   %esi
    2dea:	5e                   	pop    %esi
    2deb:	83 ec 0c             	sub    $0xc,%esp
    2dee:	6a 00                	push   $0x0
    2df0:	68 f0 46 00 00       	push   $0x46f0
    2df5:	6a 01                	push   $0x1
    2df7:	ff 35 00 00 00 00    	push   0x0
    2dfd:	e8 fc ff ff ff       	call   2dfe <sigalrm_handler+0x15>
    2e02:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
    2e09:	e8 fc ff ff ff       	call   2e0a <sigalrm_handler+0x21>

00002e0e <rio_readlineb>:
    2e0e:	55                   	push   %ebp
    2e0f:	57                   	push   %edi
    2e10:	56                   	push   %esi
    2e11:	53                   	push   %ebx
    2e12:	83 ec 1c             	sub    $0x1c,%esp
    2e15:	89 d7                	mov    %edx,%edi
    2e17:	83 f9 01             	cmp    $0x1,%ecx
    2e1a:	76 7e                	jbe    2e9a <rio_readlineb+0x8c>
    2e1c:	89 c3                	mov    %eax,%ebx
    2e1e:	8d 44 0a ff          	lea    -0x1(%edx,%ecx,1),%eax
    2e22:	89 44 24 0c          	mov    %eax,0xc(%esp)
    2e26:	bd 01 00 00 00       	mov    $0x1,%ebp
    2e2b:	8d 73 0c             	lea    0xc(%ebx),%esi
    2e2e:	eb 4f                	jmp    2e7f <rio_readlineb+0x71>
    2e30:	e8 fc ff ff ff       	call   2e31 <rio_readlineb+0x23>
    2e35:	83 38 04             	cmpl   $0x4,(%eax)
    2e38:	75 4e                	jne    2e88 <rio_readlineb+0x7a>
    2e3a:	83 ec 04             	sub    $0x4,%esp
    2e3d:	68 00 20 00 00       	push   $0x2000
    2e42:	56                   	push   %esi
    2e43:	ff 33                	push   (%ebx)
    2e45:	e8 fc ff ff ff       	call   2e46 <rio_readlineb+0x38>
    2e4a:	89 43 04             	mov    %eax,0x4(%ebx)
    2e4d:	83 c4 10             	add    $0x10,%esp
    2e50:	85 c0                	test   %eax,%eax
    2e52:	78 dc                	js     2e30 <rio_readlineb+0x22>
    2e54:	74 37                	je     2e8d <rio_readlineb+0x7f>
    2e56:	89 73 08             	mov    %esi,0x8(%ebx)
    2e59:	8b 53 08             	mov    0x8(%ebx),%edx
    2e5c:	0f b6 0a             	movzbl (%edx),%ecx
    2e5f:	83 c2 01             	add    $0x1,%edx
    2e62:	89 53 08             	mov    %edx,0x8(%ebx)
    2e65:	83 e8 01             	sub    $0x1,%eax
    2e68:	89 43 04             	mov    %eax,0x4(%ebx)
    2e6b:	83 c7 01             	add    $0x1,%edi
    2e6e:	88 4f ff             	mov    %cl,-0x1(%edi)
    2e71:	80 f9 0a             	cmp    $0xa,%cl
    2e74:	74 2f                	je     2ea5 <rio_readlineb+0x97>
    2e76:	83 c5 01             	add    $0x1,%ebp
    2e79:	3b 7c 24 0c          	cmp    0xc(%esp),%edi
    2e7d:	74 22                	je     2ea1 <rio_readlineb+0x93>
    2e7f:	8b 43 04             	mov    0x4(%ebx),%eax
    2e82:	85 c0                	test   %eax,%eax
    2e84:	7e b4                	jle    2e3a <rio_readlineb+0x2c>
    2e86:	eb d1                	jmp    2e59 <rio_readlineb+0x4b>
    2e88:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    2e8d:	85 c0                	test   %eax,%eax
    2e8f:	75 21                	jne    2eb2 <rio_readlineb+0xa4>
    2e91:	83 fd 01             	cmp    $0x1,%ebp
    2e94:	75 0f                	jne    2ea5 <rio_readlineb+0x97>
    2e96:	89 c5                	mov    %eax,%ebp
    2e98:	eb 0e                	jmp    2ea8 <rio_readlineb+0x9a>
    2e9a:	bd 01 00 00 00       	mov    $0x1,%ebp
    2e9f:	eb 04                	jmp    2ea5 <rio_readlineb+0x97>
    2ea1:	8b 7c 24 0c          	mov    0xc(%esp),%edi
    2ea5:	c6 07 00             	movb   $0x0,(%edi)
    2ea8:	89 e8                	mov    %ebp,%eax
    2eaa:	83 c4 1c             	add    $0x1c,%esp
    2ead:	5b                   	pop    %ebx
    2eae:	5e                   	pop    %esi
    2eaf:	5f                   	pop    %edi
    2eb0:	5d                   	pop    %ebp
    2eb1:	c3                   	ret    
    2eb2:	bd ff ff ff ff       	mov    $0xffffffff,%ebp
    2eb7:	eb ef                	jmp    2ea8 <rio_readlineb+0x9a>

00002eb9 <submitr>:
    2eb9:	55                   	push   %ebp
    2eba:	57                   	push   %edi
    2ebb:	56                   	push   %esi
    2ebc:	53                   	push   %ebx
    2ebd:	8d 84 24 00 60 ff ff 	lea    -0xa000(%esp),%eax
    2ec4:	81 ec 00 10 00 00    	sub    $0x1000,%esp
    2eca:	83 0c 24 00          	orl    $0x0,(%esp)
    2ece:	39 c4                	cmp    %eax,%esp
    2ed0:	75 f2                	jne    2ec4 <submitr+0xb>
    2ed2:	83 ec 50             	sub    $0x50,%esp
    2ed5:	c7 84 24 24 20 00 00 	movl   $0x0,0x2024(%esp)
    2edc:	00 00 00 00 
    2ee0:	6a 00                	push   $0x0
    2ee2:	6a 01                	push   $0x1
    2ee4:	6a 02                	push   $0x2
    2ee6:	e8 fc ff ff ff       	call   2ee7 <submitr+0x2e>
    2eeb:	83 c4 10             	add    $0x10,%esp
    2eee:	85 c0                	test   %eax,%eax
    2ef0:	0f 88 45 01 00 00    	js     303b <submitr+0x182>
    2ef6:	89 c5                	mov    %eax,%ebp
    2ef8:	83 ec 0c             	sub    $0xc,%esp
    2efb:	ff b4 24 6c a0 00 00 	push   0xa06c(%esp)
    2f02:	e8 fc ff ff ff       	call   2f03 <submitr+0x4a>
    2f07:	83 c4 10             	add    $0x10,%esp
    2f0a:	85 c0                	test   %eax,%eax
    2f0c:	0f 84 7e 01 00 00    	je     3090 <submitr+0x1d7>
    2f12:	8d 9c 24 30 a0 00 00 	lea    0xa030(%esp),%ebx
    2f19:	c7 84 24 30 a0 00 00 	movl   $0x0,0xa030(%esp)
    2f20:	00 00 00 00 
    2f24:	c7 84 24 34 a0 00 00 	movl   $0x0,0xa034(%esp)
    2f2b:	00 00 00 00 
    2f2f:	c7 84 24 38 a0 00 00 	movl   $0x0,0xa038(%esp)
    2f36:	00 00 00 00 
    2f3a:	c7 84 24 3c a0 00 00 	movl   $0x0,0xa03c(%esp)
    2f41:	00 00 00 00 
    2f45:	66 c7 84 24 30 a0 00 	movw   $0x2,0xa030(%esp)
    2f4c:	00 02 00 
    2f4f:	6a 0c                	push   $0xc
    2f51:	ff 70 0c             	push   0xc(%eax)
    2f54:	8b 40 10             	mov    0x10(%eax),%eax
    2f57:	ff 30                	push   (%eax)
    2f59:	8d 84 24 40 a0 00 00 	lea    0xa040(%esp),%eax
    2f60:	50                   	push   %eax
    2f61:	e8 fc ff ff ff       	call   2f62 <submitr+0xa9>
    2f66:	0f b7 84 24 74 a0 00 	movzwl 0xa074(%esp),%eax
    2f6d:	00 
    2f6e:	66 c1 c0 08          	rol    $0x8,%ax
    2f72:	66 89 84 24 42 a0 00 	mov    %ax,0xa042(%esp)
    2f79:	00 
    2f7a:	83 c4 0c             	add    $0xc,%esp
    2f7d:	6a 10                	push   $0x10
    2f7f:	53                   	push   %ebx
    2f80:	55                   	push   %ebp
    2f81:	e8 fc ff ff ff       	call   2f82 <submitr+0xc9>
    2f86:	83 c4 10             	add    $0x10,%esp
    2f89:	85 c0                	test   %eax,%eax
    2f8b:	0f 88 72 01 00 00    	js     3103 <submitr+0x24a>
    2f91:	83 ec 0c             	sub    $0xc,%esp
    2f94:	ff b4 24 80 a0 00 00 	push   0xa080(%esp)
    2f9b:	e8 fc ff ff ff       	call   2f9c <submitr+0xe3>
    2fa0:	83 c4 04             	add    $0x4,%esp
    2fa3:	89 c3                	mov    %eax,%ebx
    2fa5:	ff b4 24 74 a0 00 00 	push   0xa074(%esp)
    2fac:	e8 fc ff ff ff       	call   2fad <submitr+0xf4>
    2fb1:	83 c4 04             	add    $0x4,%esp
    2fb4:	89 c7                	mov    %eax,%edi
    2fb6:	ff b4 24 78 a0 00 00 	push   0xa078(%esp)
    2fbd:	e8 fc ff ff ff       	call   2fbe <submitr+0x105>
    2fc2:	83 c4 04             	add    $0x4,%esp
    2fc5:	89 c6                	mov    %eax,%esi
    2fc7:	ff b4 24 7c a0 00 00 	push   0xa07c(%esp)
    2fce:	e8 fc ff ff ff       	call   2fcf <submitr+0x116>
    2fd3:	83 c4 10             	add    $0x10,%esp
    2fd6:	89 c2                	mov    %eax,%edx
    2fd8:	8d 84 37 80 00 00 00 	lea    0x80(%edi,%esi,1),%eax
    2fdf:	01 d0                	add    %edx,%eax
    2fe1:	8d 14 5b             	lea    (%ebx,%ebx,2),%edx
    2fe4:	01 d0                	add    %edx,%eax
    2fe6:	3d 00 20 00 00       	cmp    $0x2000,%eax
    2feb:	0f 87 77 01 00 00    	ja     3168 <submitr+0x2af>
    2ff1:	8d 94 24 24 40 00 00 	lea    0x4024(%esp),%edx
    2ff8:	b9 00 08 00 00       	mov    $0x800,%ecx
    2ffd:	b8 00 00 00 00       	mov    $0x0,%eax
    3002:	89 d7                	mov    %edx,%edi
    3004:	f3 ab                	rep stos %eax,%es:(%edi)
    3006:	83 ec 0c             	sub    $0xc,%esp
    3009:	ff b4 24 80 a0 00 00 	push   0xa080(%esp)
    3010:	e8 fc ff ff ff       	call   3011 <submitr+0x158>
    3015:	83 c4 10             	add    $0x10,%esp
    3018:	89 c7                	mov    %eax,%edi
    301a:	85 c0                	test   %eax,%eax
    301c:	0f 84 5a 02 00 00    	je     327c <submitr+0x3c3>
    3022:	8b 9c 24 74 a0 00 00 	mov    0xa074(%esp),%ebx
    3029:	8d b4 24 24 40 00 00 	lea    0x4024(%esp),%esi
    3030:	89 6c 24 0c          	mov    %ebp,0xc(%esp)
    3034:	89 dd                	mov    %ebx,%ebp
    3036:	e9 bf 01 00 00       	jmp    31fa <submitr+0x341>
    303b:	8b 84 24 78 a0 00 00 	mov    0xa078(%esp),%eax
    3042:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
    3048:	c7 40 04 72 3a 20 43 	movl   $0x43203a72,0x4(%eax)
    304f:	c7 40 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%eax)
    3056:	c7 40 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%eax)
    305d:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
    3064:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
    306b:	c7 40 18 63 72 65 61 	movl   $0x61657263,0x18(%eax)
    3072:	c7 40 1c 74 65 20 73 	movl   $0x73206574,0x1c(%eax)
    3079:	c7 40 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%eax)
    3080:	66 c7 40 24 74 00    	movw   $0x74,0x24(%eax)
    3086:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    308b:	e9 a0 04 00 00       	jmp    3530 <submitr+0x677>
    3090:	8b 84 24 78 a0 00 00 	mov    0xa078(%esp),%eax
    3097:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
    309d:	c7 40 04 72 3a 20 44 	movl   $0x44203a72,0x4(%eax)
    30a4:	c7 40 08 4e 53 20 69 	movl   $0x6920534e,0x8(%eax)
    30ab:	c7 40 0c 73 20 75 6e 	movl   $0x6e752073,0xc(%eax)
    30b2:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
    30b9:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
    30c0:	c7 40 18 72 65 73 6f 	movl   $0x6f736572,0x18(%eax)
    30c7:	c7 40 1c 6c 76 65 20 	movl   $0x2065766c,0x1c(%eax)
    30ce:	c7 40 20 73 65 72 76 	movl   $0x76726573,0x20(%eax)
    30d5:	c7 40 24 65 72 20 61 	movl   $0x61207265,0x24(%eax)
    30dc:	c7 40 28 64 64 72 65 	movl   $0x65726464,0x28(%eax)
    30e3:	66 c7 40 2c 73 73    	movw   $0x7373,0x2c(%eax)
    30e9:	c6 40 2e 00          	movb   $0x0,0x2e(%eax)
    30ed:	83 ec 0c             	sub    $0xc,%esp
    30f0:	55                   	push   %ebp
    30f1:	e8 fc ff ff ff       	call   30f2 <submitr+0x239>
    30f6:	83 c4 10             	add    $0x10,%esp
    30f9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    30fe:	e9 2d 04 00 00       	jmp    3530 <submitr+0x677>
    3103:	8b 84 24 78 a0 00 00 	mov    0xa078(%esp),%eax
    310a:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
    3110:	c7 40 04 72 3a 20 55 	movl   $0x55203a72,0x4(%eax)
    3117:	c7 40 08 6e 61 62 6c 	movl   $0x6c62616e,0x8(%eax)
    311e:	c7 40 0c 65 20 74 6f 	movl   $0x6f742065,0xc(%eax)
    3125:	c7 40 10 20 63 6f 6e 	movl   $0x6e6f6320,0x10(%eax)
    312c:	c7 40 14 6e 65 63 74 	movl   $0x7463656e,0x14(%eax)
    3133:	c7 40 18 20 74 6f 20 	movl   $0x206f7420,0x18(%eax)
    313a:	c7 40 1c 74 68 65 20 	movl   $0x20656874,0x1c(%eax)
    3141:	c7 40 20 73 65 72 76 	movl   $0x76726573,0x20(%eax)
    3148:	66 c7 40 24 65 72    	movw   $0x7265,0x24(%eax)
    314e:	c6 40 26 00          	movb   $0x0,0x26(%eax)
    3152:	83 ec 0c             	sub    $0xc,%esp
    3155:	55                   	push   %ebp
    3156:	e8 fc ff ff ff       	call   3157 <submitr+0x29e>
    315b:	83 c4 10             	add    $0x10,%esp
    315e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3163:	e9 c8 03 00 00       	jmp    3530 <submitr+0x677>
    3168:	8b 84 24 78 a0 00 00 	mov    0xa078(%esp),%eax
    316f:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
    3175:	c7 40 04 72 3a 20 52 	movl   $0x52203a72,0x4(%eax)
    317c:	c7 40 08 65 73 75 6c 	movl   $0x6c757365,0x8(%eax)
    3183:	c7 40 0c 74 20 73 74 	movl   $0x74732074,0xc(%eax)
    318a:	c7 40 10 72 69 6e 67 	movl   $0x676e6972,0x10(%eax)
    3191:	c7 40 14 20 74 6f 6f 	movl   $0x6f6f7420,0x14(%eax)
    3198:	c7 40 18 20 6c 61 72 	movl   $0x72616c20,0x18(%eax)
    319f:	c7 40 1c 67 65 2e 20 	movl   $0x202e6567,0x1c(%eax)
    31a6:	c7 40 20 49 6e 63 72 	movl   $0x72636e49,0x20(%eax)
    31ad:	c7 40 24 65 61 73 65 	movl   $0x65736165,0x24(%eax)
    31b4:	c7 40 28 20 53 55 42 	movl   $0x42555320,0x28(%eax)
    31bb:	c7 40 2c 4d 49 54 52 	movl   $0x5254494d,0x2c(%eax)
    31c2:	c7 40 30 5f 4d 41 58 	movl   $0x58414d5f,0x30(%eax)
    31c9:	c7 40 34 42 55 46 00 	movl   $0x465542,0x34(%eax)
    31d0:	83 ec 0c             	sub    $0xc,%esp
    31d3:	55                   	push   %ebp
    31d4:	e8 fc ff ff ff       	call   31d5 <submitr+0x31c>
    31d9:	83 c4 10             	add    $0x10,%esp
    31dc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    31e1:	e9 4a 03 00 00       	jmp    3530 <submitr+0x677>
    31e6:	3c 5f                	cmp    $0x5f,%al
    31e8:	75 72                	jne    325c <submitr+0x3a3>
    31ea:	88 06                	mov    %al,(%esi)
    31ec:	8d 76 01             	lea    0x1(%esi),%esi
    31ef:	83 c3 01             	add    $0x1,%ebx
    31f2:	8d 44 3d 00          	lea    0x0(%ebp,%edi,1),%eax
    31f6:	39 c3                	cmp    %eax,%ebx
    31f8:	74 7e                	je     3278 <submitr+0x3bf>
    31fa:	0f b6 03             	movzbl (%ebx),%eax
    31fd:	8d 50 d6             	lea    -0x2a(%eax),%edx
    3200:	80 fa 0f             	cmp    $0xf,%dl
    3203:	77 e1                	ja     31e6 <submitr+0x32d>
    3205:	b9 d9 ff 00 00       	mov    $0xffd9,%ecx
    320a:	0f a3 d1             	bt     %edx,%ecx
    320d:	72 db                	jb     31ea <submitr+0x331>
    320f:	3c 5f                	cmp    $0x5f,%al
    3211:	74 d7                	je     31ea <submitr+0x331>
    3213:	8d 50 e0             	lea    -0x20(%eax),%edx
    3216:	80 fa 5f             	cmp    $0x5f,%dl
    3219:	76 08                	jbe    3223 <submitr+0x36a>
    321b:	3c 09                	cmp    $0x9,%al
    321d:	0f 85 ff 03 00 00    	jne    3622 <submitr+0x769>
    3223:	83 ec 0c             	sub    $0xc,%esp
    3226:	0f b6 c0             	movzbl %al,%eax
    3229:	50                   	push   %eax
    322a:	68 fa 47 00 00       	push   $0x47fa
    322f:	6a 08                	push   $0x8
    3231:	6a 01                	push   $0x1
    3233:	8d 44 24 34          	lea    0x34(%esp),%eax
    3237:	50                   	push   %eax
    3238:	e8 fc ff ff ff       	call   3239 <submitr+0x380>
    323d:	0f b6 44 24 38       	movzbl 0x38(%esp),%eax
    3242:	88 06                	mov    %al,(%esi)
    3244:	0f b6 44 24 39       	movzbl 0x39(%esp),%eax
    3249:	88 46 01             	mov    %al,0x1(%esi)
    324c:	0f b6 44 24 3a       	movzbl 0x3a(%esp),%eax
    3251:	88 46 02             	mov    %al,0x2(%esi)
    3254:	83 c4 20             	add    $0x20,%esp
    3257:	8d 76 03             	lea    0x3(%esi),%esi
    325a:	eb 93                	jmp    31ef <submitr+0x336>
    325c:	89 c2                	mov    %eax,%edx
    325e:	83 e2 df             	and    $0xffffffdf,%edx
    3261:	83 ea 41             	sub    $0x41,%edx
    3264:	80 fa 19             	cmp    $0x19,%dl
    3267:	76 81                	jbe    31ea <submitr+0x331>
    3269:	3c 20                	cmp    $0x20,%al
    326b:	75 a6                	jne    3213 <submitr+0x35a>
    326d:	c6 06 2b             	movb   $0x2b,(%esi)
    3270:	8d 76 01             	lea    0x1(%esi),%esi
    3273:	e9 77 ff ff ff       	jmp    31ef <submitr+0x336>
    3278:	8b 6c 24 0c          	mov    0xc(%esp),%ebp
    327c:	8d 84 24 24 40 00 00 	lea    0x4024(%esp),%eax
    3283:	50                   	push   %eax
    3284:	ff b4 24 74 a0 00 00 	push   0xa074(%esp)
    328b:	ff b4 24 74 a0 00 00 	push   0xa074(%esp)
    3292:	ff b4 24 74 a0 00 00 	push   0xa074(%esp)
    3299:	68 88 47 00 00       	push   $0x4788
    329e:	68 00 20 00 00       	push   $0x2000
    32a3:	6a 01                	push   $0x1
    32a5:	8d 9c 24 40 60 00 00 	lea    0x6040(%esp),%ebx
    32ac:	53                   	push   %ebx
    32ad:	e8 fc ff ff ff       	call   32ae <submitr+0x3f5>
    32b2:	83 c4 14             	add    $0x14,%esp
    32b5:	53                   	push   %ebx
    32b6:	e8 fc ff ff ff       	call   32b7 <submitr+0x3fe>
    32bb:	83 c4 10             	add    $0x10,%esp
    32be:	89 c3                	mov    %eax,%ebx
    32c0:	8d b4 24 24 60 00 00 	lea    0x6024(%esp),%esi
    32c7:	bf 00 00 00 00       	mov    $0x0,%edi
    32cc:	85 c0                	test   %eax,%eax
    32ce:	0f 85 34 01 00 00    	jne    3408 <submitr+0x54f>
    32d4:	89 ac 24 24 80 00 00 	mov    %ebp,0x8024(%esp)
    32db:	c7 84 24 28 80 00 00 	movl   $0x0,0x8028(%esp)
    32e2:	00 00 00 00 
    32e6:	8d 84 24 30 80 00 00 	lea    0x8030(%esp),%eax
    32ed:	89 84 24 2c 80 00 00 	mov    %eax,0x802c(%esp)
    32f4:	b9 00 20 00 00       	mov    $0x2000,%ecx
    32f9:	8d 94 24 24 60 00 00 	lea    0x6024(%esp),%edx
    3300:	8d 84 24 24 80 00 00 	lea    0x8024(%esp),%eax
    3307:	e8 02 fb ff ff       	call   2e0e <rio_readlineb>
    330c:	85 c0                	test   %eax,%eax
    330e:	0f 8e 18 01 00 00    	jle    342c <submitr+0x573>
    3314:	83 ec 0c             	sub    $0xc,%esp
    3317:	8d 44 24 2c          	lea    0x2c(%esp),%eax
    331b:	50                   	push   %eax
    331c:	8d 84 24 30 20 00 00 	lea    0x2030(%esp),%eax
    3323:	50                   	push   %eax
    3324:	8d 84 24 38 20 00 00 	lea    0x2038(%esp),%eax
    332b:	50                   	push   %eax
    332c:	68 01 48 00 00       	push   $0x4801
    3331:	8d 84 24 40 60 00 00 	lea    0x6040(%esp),%eax
    3338:	50                   	push   %eax
    3339:	e8 fc ff ff ff       	call   333a <submitr+0x481>
    333e:	8b 84 24 40 20 00 00 	mov    0x2040(%esp),%eax
    3345:	83 c4 20             	add    $0x20,%esp
    3348:	3d c8 00 00 00       	cmp    $0xc8,%eax
    334d:	0f 85 56 01 00 00    	jne    34a9 <submitr+0x5f0>
    3353:	8d 9c 24 24 60 00 00 	lea    0x6024(%esp),%ebx
    335a:	83 ec 08             	sub    $0x8,%esp
    335d:	68 12 48 00 00       	push   $0x4812
    3362:	53                   	push   %ebx
    3363:	e8 fc ff ff ff       	call   3364 <submitr+0x4ab>
    3368:	83 c4 10             	add    $0x10,%esp
    336b:	85 c0                	test   %eax,%eax
    336d:	0f 84 67 01 00 00    	je     34da <submitr+0x621>
    3373:	b9 00 20 00 00       	mov    $0x2000,%ecx
    3378:	89 da                	mov    %ebx,%edx
    337a:	8d 84 24 24 80 00 00 	lea    0x8024(%esp),%eax
    3381:	e8 88 fa ff ff       	call   2e0e <rio_readlineb>
    3386:	85 c0                	test   %eax,%eax
    3388:	7f d0                	jg     335a <submitr+0x4a1>
    338a:	8b 84 24 78 a0 00 00 	mov    0xa078(%esp),%eax
    3391:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
    3397:	c7 40 04 72 3a 20 43 	movl   $0x43203a72,0x4(%eax)
    339e:	c7 40 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%eax)
    33a5:	c7 40 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%eax)
    33ac:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
    33b3:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
    33ba:	c7 40 18 72 65 61 64 	movl   $0x64616572,0x18(%eax)
    33c1:	c7 40 1c 20 68 65 61 	movl   $0x61656820,0x1c(%eax)
    33c8:	c7 40 20 64 65 72 73 	movl   $0x73726564,0x20(%eax)
    33cf:	c7 40 24 20 66 72 6f 	movl   $0x6f726620,0x24(%eax)
    33d6:	c7 40 28 6d 20 73 65 	movl   $0x6573206d,0x28(%eax)
    33dd:	c7 40 2c 72 76 65 72 	movl   $0x72657672,0x2c(%eax)
    33e4:	c6 40 30 00          	movb   $0x0,0x30(%eax)
    33e8:	83 ec 0c             	sub    $0xc,%esp
    33eb:	55                   	push   %ebp
    33ec:	e8 fc ff ff ff       	call   33ed <submitr+0x534>
    33f1:	83 c4 10             	add    $0x10,%esp
    33f4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    33f9:	e9 32 01 00 00       	jmp    3530 <submitr+0x677>
    33fe:	01 c6                	add    %eax,%esi
    3400:	29 c3                	sub    %eax,%ebx
    3402:	0f 84 cc fe ff ff    	je     32d4 <submitr+0x41b>
    3408:	83 ec 04             	sub    $0x4,%esp
    340b:	53                   	push   %ebx
    340c:	56                   	push   %esi
    340d:	55                   	push   %ebp
    340e:	e8 fc ff ff ff       	call   340f <submitr+0x556>
    3413:	83 c4 10             	add    $0x10,%esp
    3416:	85 c0                	test   %eax,%eax
    3418:	7f e4                	jg     33fe <submitr+0x545>
    341a:	e8 fc ff ff ff       	call   341b <submitr+0x562>
    341f:	83 38 04             	cmpl   $0x4,(%eax)
    3422:	0f 85 91 01 00 00    	jne    35b9 <submitr+0x700>
    3428:	89 f8                	mov    %edi,%eax
    342a:	eb d2                	jmp    33fe <submitr+0x545>
    342c:	8b 84 24 78 a0 00 00 	mov    0xa078(%esp),%eax
    3433:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
    3439:	c7 40 04 72 3a 20 43 	movl   $0x43203a72,0x4(%eax)
    3440:	c7 40 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%eax)
    3447:	c7 40 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%eax)
    344e:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
    3455:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
    345c:	c7 40 18 72 65 61 64 	movl   $0x64616572,0x18(%eax)
    3463:	c7 40 1c 20 66 69 72 	movl   $0x72696620,0x1c(%eax)
    346a:	c7 40 20 73 74 20 68 	movl   $0x68207473,0x20(%eax)
    3471:	c7 40 24 65 61 64 65 	movl   $0x65646165,0x24(%eax)
    3478:	c7 40 28 72 20 66 72 	movl   $0x72662072,0x28(%eax)
    347f:	c7 40 2c 6f 6d 20 73 	movl   $0x73206d6f,0x2c(%eax)
    3486:	c7 40 30 65 72 76 65 	movl   $0x65767265,0x30(%eax)
    348d:	66 c7 40 34 72 00    	movw   $0x72,0x34(%eax)
    3493:	83 ec 0c             	sub    $0xc,%esp
    3496:	55                   	push   %ebp
    3497:	e8 fc ff ff ff       	call   3498 <submitr+0x5df>
    349c:	83 c4 10             	add    $0x10,%esp
    349f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    34a4:	e9 87 00 00 00       	jmp    3530 <submitr+0x677>
    34a9:	83 ec 08             	sub    $0x8,%esp
    34ac:	8d 54 24 28          	lea    0x28(%esp),%edx
    34b0:	52                   	push   %edx
    34b1:	50                   	push   %eax
    34b2:	68 14 47 00 00       	push   $0x4714
    34b7:	6a ff                	push   $0xffffffff
    34b9:	6a 01                	push   $0x1
    34bb:	ff b4 24 94 a0 00 00 	push   0xa094(%esp)
    34c2:	e8 fc ff ff ff       	call   34c3 <submitr+0x60a>
    34c7:	83 c4 14             	add    $0x14,%esp
    34ca:	55                   	push   %ebp
    34cb:	e8 fc ff ff ff       	call   34cc <submitr+0x613>
    34d0:	83 c4 10             	add    $0x10,%esp
    34d3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    34d8:	eb 56                	jmp    3530 <submitr+0x677>
    34da:	b9 00 20 00 00       	mov    $0x2000,%ecx
    34df:	8d 94 24 24 60 00 00 	lea    0x6024(%esp),%edx
    34e6:	8d 84 24 24 80 00 00 	lea    0x8024(%esp),%eax
    34ed:	e8 1c f9 ff ff       	call   2e0e <rio_readlineb>
    34f2:	85 c0                	test   %eax,%eax
    34f4:	7e 45                	jle    353b <submitr+0x682>
    34f6:	83 ec 08             	sub    $0x8,%esp
    34f9:	8d 84 24 2c 60 00 00 	lea    0x602c(%esp),%eax
    3500:	50                   	push   %eax
    3501:	ff b4 24 84 a0 00 00 	push   0xa084(%esp)
    3508:	e8 fc ff ff ff       	call   3509 <submitr+0x650>
    350d:	89 2c 24             	mov    %ebp,(%esp)
    3510:	e8 fc ff ff ff       	call   3511 <submitr+0x658>
    3515:	83 c4 08             	add    $0x8,%esp
    3518:	68 15 48 00 00       	push   $0x4815
    351d:	ff b4 24 84 a0 00 00 	push   0xa084(%esp)
    3524:	e8 fc ff ff ff       	call   3525 <submitr+0x66c>
    3529:	83 c4 10             	add    $0x10,%esp
    352c:	f7 d8                	neg    %eax
    352e:	19 c0                	sbb    %eax,%eax
    3530:	81 c4 4c a0 00 00    	add    $0xa04c,%esp
    3536:	5b                   	pop    %ebx
    3537:	5e                   	pop    %esi
    3538:	5f                   	pop    %edi
    3539:	5d                   	pop    %ebp
    353a:	c3                   	ret    
    353b:	8b 84 24 78 a0 00 00 	mov    0xa078(%esp),%eax
    3542:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
    3548:	c7 40 04 72 3a 20 43 	movl   $0x43203a72,0x4(%eax)
    354f:	c7 40 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%eax)
    3556:	c7 40 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%eax)
    355d:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
    3564:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
    356b:	c7 40 18 72 65 61 64 	movl   $0x64616572,0x18(%eax)
    3572:	c7 40 1c 20 73 74 61 	movl   $0x61747320,0x1c(%eax)
    3579:	c7 40 20 74 75 73 20 	movl   $0x20737574,0x20(%eax)
    3580:	c7 40 24 6d 65 73 73 	movl   $0x7373656d,0x24(%eax)
    3587:	c7 40 28 61 67 65 20 	movl   $0x20656761,0x28(%eax)
    358e:	c7 40 2c 66 72 6f 6d 	movl   $0x6d6f7266,0x2c(%eax)
    3595:	c7 40 30 20 73 65 72 	movl   $0x72657320,0x30(%eax)
    359c:	c7 40 34 76 65 72 00 	movl   $0x726576,0x34(%eax)
    35a3:	83 ec 0c             	sub    $0xc,%esp
    35a6:	55                   	push   %ebp
    35a7:	e8 fc ff ff ff       	call   35a8 <submitr+0x6ef>
    35ac:	83 c4 10             	add    $0x10,%esp
    35af:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    35b4:	e9 77 ff ff ff       	jmp    3530 <submitr+0x677>
    35b9:	8b 84 24 78 a0 00 00 	mov    0xa078(%esp),%eax
    35c0:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
    35c6:	c7 40 04 72 3a 20 43 	movl   $0x43203a72,0x4(%eax)
    35cd:	c7 40 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%eax)
    35d4:	c7 40 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%eax)
    35db:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
    35e2:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
    35e9:	c7 40 18 77 72 69 74 	movl   $0x74697277,0x18(%eax)
    35f0:	c7 40 1c 65 20 74 6f 	movl   $0x6f742065,0x1c(%eax)
    35f7:	c7 40 20 20 74 68 65 	movl   $0x65687420,0x20(%eax)
    35fe:	c7 40 24 20 73 65 72 	movl   $0x72657320,0x24(%eax)
    3605:	c7 40 28 76 65 72 00 	movl   $0x726576,0x28(%eax)
    360c:	83 ec 0c             	sub    $0xc,%esp
    360f:	55                   	push   %ebp
    3610:	e8 fc ff ff ff       	call   3611 <submitr+0x758>
    3615:	83 c4 10             	add    $0x10,%esp
    3618:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    361d:	e9 0e ff ff ff       	jmp    3530 <submitr+0x677>
    3622:	8b 6c 24 0c          	mov    0xc(%esp),%ebp
    3626:	a1 44 47 00 00       	mov    0x4744,%eax
    362b:	8b 8c 24 78 a0 00 00 	mov    0xa078(%esp),%ecx
    3632:	89 01                	mov    %eax,(%ecx)
    3634:	a1 83 47 00 00       	mov    0x4783,%eax
    3639:	8b 8c 24 78 a0 00 00 	mov    0xa078(%esp),%ecx
    3640:	89 41 3f             	mov    %eax,0x3f(%ecx)
    3643:	8b 84 24 78 a0 00 00 	mov    0xa078(%esp),%eax
    364a:	8d 78 04             	lea    0x4(%eax),%edi
    364d:	83 e7 fc             	and    $0xfffffffc,%edi
    3650:	29 f8                	sub    %edi,%eax
    3652:	be 44 47 00 00       	mov    $0x4744,%esi
    3657:	29 c6                	sub    %eax,%esi
    3659:	83 c0 43             	add    $0x43,%eax
    365c:	c1 e8 02             	shr    $0x2,%eax
    365f:	89 c1                	mov    %eax,%ecx
    3661:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
    3663:	83 ec 0c             	sub    $0xc,%esp
    3666:	55                   	push   %ebp
    3667:	e8 fc ff ff ff       	call   3668 <submitr+0x7af>
    366c:	83 c4 10             	add    $0x10,%esp
    366f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3674:	e9 b7 fe ff ff       	jmp    3530 <submitr+0x677>

00003679 <init_timeout>:
    3679:	53                   	push   %ebx
    367a:	83 ec 08             	sub    $0x8,%esp
    367d:	8b 5c 24 10          	mov    0x10(%esp),%ebx
    3681:	85 db                	test   %ebx,%ebx
    3683:	75 05                	jne    368a <init_timeout+0x11>
    3685:	83 c4 08             	add    $0x8,%esp
    3688:	5b                   	pop    %ebx
    3689:	c3                   	ret    
    368a:	83 ec 08             	sub    $0x8,%esp
    368d:	68 e9 2d 00 00       	push   $0x2de9
    3692:	6a 0e                	push   $0xe
    3694:	e8 fc ff ff ff       	call   3695 <init_timeout+0x1c>
    3699:	85 db                	test   %ebx,%ebx
    369b:	b8 00 00 00 00       	mov    $0x0,%eax
    36a0:	0f 48 d8             	cmovs  %eax,%ebx
    36a3:	89 1c 24             	mov    %ebx,(%esp)
    36a6:	e8 fc ff ff ff       	call   36a7 <init_timeout+0x2e>
    36ab:	83 c4 10             	add    $0x10,%esp
    36ae:	eb d5                	jmp    3685 <init_timeout+0xc>

000036b0 <init_driver>:
    36b0:	57                   	push   %edi
    36b1:	56                   	push   %esi
    36b2:	53                   	push   %ebx
    36b3:	83 ec 18             	sub    $0x18,%esp
    36b6:	8b 74 24 28          	mov    0x28(%esp),%esi
    36ba:	6a 01                	push   $0x1
    36bc:	6a 0d                	push   $0xd
    36be:	e8 fc ff ff ff       	call   36bf <init_driver+0xf>
    36c3:	83 c4 08             	add    $0x8,%esp
    36c6:	6a 01                	push   $0x1
    36c8:	6a 1d                	push   $0x1d
    36ca:	e8 fc ff ff ff       	call   36cb <init_driver+0x1b>
    36cf:	83 c4 08             	add    $0x8,%esp
    36d2:	6a 01                	push   $0x1
    36d4:	6a 1d                	push   $0x1d
    36d6:	e8 fc ff ff ff       	call   36d7 <init_driver+0x27>
    36db:	83 c4 0c             	add    $0xc,%esp
    36de:	6a 00                	push   $0x0
    36e0:	6a 01                	push   $0x1
    36e2:	6a 02                	push   $0x2
    36e4:	e8 fc ff ff ff       	call   36e5 <init_driver+0x35>
    36e9:	83 c4 10             	add    $0x10,%esp
    36ec:	85 c0                	test   %eax,%eax
    36ee:	0f 88 93 00 00 00    	js     3787 <init_driver+0xd7>
    36f4:	89 c3                	mov    %eax,%ebx
    36f6:	83 ec 0c             	sub    $0xc,%esp
    36f9:	68 af 44 00 00       	push   $0x44af
    36fe:	e8 fc ff ff ff       	call   36ff <init_driver+0x4f>
    3703:	83 c4 10             	add    $0x10,%esp
    3706:	85 c0                	test   %eax,%eax
    3708:	0f 84 c4 00 00 00    	je     37d2 <init_driver+0x122>
    370e:	89 e7                	mov    %esp,%edi
    3710:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
    3717:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
    371e:	00 
    371f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
    3726:	00 
    3727:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
    372e:	00 
    372f:	66 c7 04 24 02 00    	movw   $0x2,(%esp)
    3735:	6a 0c                	push   $0xc
    3737:	ff 70 0c             	push   0xc(%eax)
    373a:	8b 40 10             	mov    0x10(%eax),%eax
    373d:	ff 30                	push   (%eax)
    373f:	8d 44 24 10          	lea    0x10(%esp),%eax
    3743:	50                   	push   %eax
    3744:	e8 fc ff ff ff       	call   3745 <init_driver+0x95>
    3749:	66 c7 44 24 12 3b 6c 	movw   $0x6c3b,0x12(%esp)
    3750:	83 c4 0c             	add    $0xc,%esp
    3753:	6a 10                	push   $0x10
    3755:	57                   	push   %edi
    3756:	53                   	push   %ebx
    3757:	e8 fc ff ff ff       	call   3758 <init_driver+0xa8>
    375c:	89 fc                	mov    %edi,%esp
    375e:	85 c0                	test   %eax,%eax
    3760:	0f 88 d8 00 00 00    	js     383e <init_driver+0x18e>
    3766:	83 ec 0c             	sub    $0xc,%esp
    3769:	53                   	push   %ebx
    376a:	e8 fc ff ff ff       	call   376b <init_driver+0xbb>
    376f:	66 c7 06 4f 4b       	movw   $0x4b4f,(%esi)
    3774:	c6 46 02 00          	movb   $0x0,0x2(%esi)
    3778:	83 c4 10             	add    $0x10,%esp
    377b:	b8 00 00 00 00       	mov    $0x0,%eax
    3780:	83 c4 10             	add    $0x10,%esp
    3783:	5b                   	pop    %ebx
    3784:	5e                   	pop    %esi
    3785:	5f                   	pop    %edi
    3786:	c3                   	ret    
    3787:	c7 06 45 72 72 6f    	movl   $0x6f727245,(%esi)
    378d:	c7 46 04 72 3a 20 43 	movl   $0x43203a72,0x4(%esi)
    3794:	c7 46 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%esi)
    379b:	c7 46 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%esi)
    37a2:	c7 46 10 61 62 6c 65 	movl   $0x656c6261,0x10(%esi)
    37a9:	c7 46 14 20 74 6f 20 	movl   $0x206f7420,0x14(%esi)
    37b0:	c7 46 18 63 72 65 61 	movl   $0x61657263,0x18(%esi)
    37b7:	c7 46 1c 74 65 20 73 	movl   $0x73206574,0x1c(%esi)
    37be:	c7 46 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%esi)
    37c5:	66 c7 46 24 74 00    	movw   $0x74,0x24(%esi)
    37cb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    37d0:	eb ae                	jmp    3780 <init_driver+0xd0>
    37d2:	c7 06 45 72 72 6f    	movl   $0x6f727245,(%esi)
    37d8:	c7 46 04 72 3a 20 44 	movl   $0x44203a72,0x4(%esi)
    37df:	c7 46 08 4e 53 20 69 	movl   $0x6920534e,0x8(%esi)
    37e6:	c7 46 0c 73 20 75 6e 	movl   $0x6e752073,0xc(%esi)
    37ed:	c7 46 10 61 62 6c 65 	movl   $0x656c6261,0x10(%esi)
    37f4:	c7 46 14 20 74 6f 20 	movl   $0x206f7420,0x14(%esi)
    37fb:	c7 46 18 72 65 73 6f 	movl   $0x6f736572,0x18(%esi)
    3802:	c7 46 1c 6c 76 65 20 	movl   $0x2065766c,0x1c(%esi)
    3809:	c7 46 20 73 65 72 76 	movl   $0x76726573,0x20(%esi)
    3810:	c7 46 24 65 72 20 61 	movl   $0x61207265,0x24(%esi)
    3817:	c7 46 28 64 64 72 65 	movl   $0x65726464,0x28(%esi)
    381e:	66 c7 46 2c 73 73    	movw   $0x7373,0x2c(%esi)
    3824:	c6 46 2e 00          	movb   $0x0,0x2e(%esi)
    3828:	83 ec 0c             	sub    $0xc,%esp
    382b:	53                   	push   %ebx
    382c:	e8 fc ff ff ff       	call   382d <init_driver+0x17d>
    3831:	83 c4 10             	add    $0x10,%esp
    3834:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3839:	e9 42 ff ff ff       	jmp    3780 <init_driver+0xd0>
    383e:	83 ec 0c             	sub    $0xc,%esp
    3841:	68 af 44 00 00       	push   $0x44af
    3846:	68 d4 47 00 00       	push   $0x47d4
    384b:	6a ff                	push   $0xffffffff
    384d:	6a 01                	push   $0x1
    384f:	56                   	push   %esi
    3850:	e8 fc ff ff ff       	call   3851 <init_driver+0x1a1>
    3855:	83 c4 14             	add    $0x14,%esp
    3858:	53                   	push   %ebx
    3859:	e8 fc ff ff ff       	call   385a <init_driver+0x1aa>
    385e:	89 fc                	mov    %edi,%esp
    3860:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3865:	e9 16 ff ff ff       	jmp    3780 <init_driver+0xd0>

0000386a <driver_post>:
    386a:	53                   	push   %ebx
    386b:	83 ec 08             	sub    $0x8,%esp
    386e:	8b 54 24 10          	mov    0x10(%esp),%edx
    3872:	8b 44 24 18          	mov    0x18(%esp),%eax
    3876:	8b 5c 24 1c          	mov    0x1c(%esp),%ebx
    387a:	85 c0                	test   %eax,%eax
    387c:	75 17                	jne    3895 <driver_post+0x2b>
    387e:	85 d2                	test   %edx,%edx
    3880:	74 05                	je     3887 <driver_post+0x1d>
    3882:	80 3a 00             	cmpb   $0x0,(%edx)
    3885:	75 34                	jne    38bb <driver_post+0x51>
    3887:	66 c7 03 4f 4b       	movw   $0x4b4f,(%ebx)
    388c:	c6 43 02 00          	movb   $0x0,0x2(%ebx)
    3890:	83 c4 08             	add    $0x8,%esp
    3893:	5b                   	pop    %ebx
    3894:	c3                   	ret    
    3895:	83 ec 04             	sub    $0x4,%esp
    3898:	ff 74 24 18          	push   0x18(%esp)
    389c:	68 18 48 00 00       	push   $0x4818
    38a1:	6a 01                	push   $0x1
    38a3:	e8 fc ff ff ff       	call   38a4 <driver_post+0x3a>
    38a8:	66 c7 03 4f 4b       	movw   $0x4b4f,(%ebx)
    38ad:	c6 43 02 00          	movb   $0x0,0x2(%ebx)
    38b1:	83 c4 10             	add    $0x10,%esp
    38b4:	b8 00 00 00 00       	mov    $0x0,%eax
    38b9:	eb d5                	jmp    3890 <driver_post+0x26>
    38bb:	83 ec 04             	sub    $0x4,%esp
    38be:	53                   	push   %ebx
    38bf:	ff 74 24 1c          	push   0x1c(%esp)
    38c3:	68 2f 48 00 00       	push   $0x482f
    38c8:	52                   	push   %edx
    38c9:	68 3e 48 00 00       	push   $0x483e
    38ce:	68 6c 3b 00 00       	push   $0x3b6c
    38d3:	68 af 44 00 00       	push   $0x44af
    38d8:	e8 dc f5 ff ff       	call   2eb9 <submitr>
    38dd:	83 c4 20             	add    $0x20,%esp
    38e0:	eb ae                	jmp    3890 <driver_post+0x26>

Disassembly of section .fini:

000038e4 <_fini>:
    38e4:	f3 0f 1e fb          	endbr32 
    38e8:	53                   	push   %ebx
    38e9:	83 ec 08             	sub    $0x8,%esp
    38ec:	e8 6f e9 ff ff       	call   2260 <__x86.get_pc_thunk.bx>
    38f1:	81 c3 77 36 00 00    	add    $0x3677,%ebx
    38f7:	83 c4 08             	add    $0x8,%esp
    38fa:	5b                   	pop    %ebx
    38fb:	c3                   	ret    
