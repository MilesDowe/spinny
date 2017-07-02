/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread  -I/opt/nim/lib -o /home/me/Desktop/Code/Nim/Spinny/nimcache/stdlib_terminal.o /home/me/Desktop/Code/Nim/Spinny/nimcache/stdlib_terminal.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <termios.h>
#include <string.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#undef linux
typedef struct Ioctlwinsize_pb6i9aLcdojBXEMqdEzDkSA Ioctlwinsize_pb6i9aLcdojBXEMqdEzDkSA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY_1v9bKyksXWMsm0vNwmZ4EuQ TY_1v9bKyksXWMsm0vNwmZ4EuQ;
typedef unsigned char TY_wo9atxlj1CQKWeAypuYX9cIg[32];
struct  Ioctlwinsize_pb6i9aLcdojBXEMqdEzDkSA  {
unsigned short wsrow;
unsigned short wscol;
unsigned short wsxpixel;
unsigned short wsypixel;
};
typedef NI TY_Bd4h7Ocx9bGTvrKzPIWNlHw[3];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NI TY_GAcaPw08Gj9cXYhAaMMr9cfw[1];
struct TY_1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
typedef NU8 Style_NXKayqTLMsAibFwNceBlpA_Set;
typedef NU8 Style_NXKayqTLMsAibFwNceBlpA;
typedef NU8 Foregroundcolor_ez9ah4IgQc0AbdW68acioDg;
typedef NU8 Backgroundcolor_7jPyx0xRLWzxER9cSeCOA9bA;
N_NIMCALL(void, setraw_bWuPmHcnrBG1QQlDC4s7ug)(int fd0, int time0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, terminalwidthioctl_u2BBS9b3k8WyoyVOocOs5YQ)(NI* fds0, NI fds0Len0);
static N_INLINE(NI, chckRange)(NI i0, NI a0, NI b0);
N_NOINLINE(void, raiseRangeError)(NI64 val0);
static N_INLINE(NI, addInt)(NI a0, NI b0);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI, terminalheightioctl_u2BBS9b3k8WyoyVOocOs5YQ_2)(NI* fds0, NI fds0Len0);
N_NIMCALL(NI, terminalwidth_Tjr5MOdj42hdx5sjNUiDXw)(void);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NimStringDesc*, getenv_8zNgT9bxx7m9cTt2TeVdTdIw)(NimStringDesc* key0);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s0, NI* number0, NI start0);
N_NIMCALL(NI, terminalheight_Tjr5MOdj42hdx5sjNUiDXw_2)(void);
N_NIMCALL(TY_1v9bKyksXWMsm0vNwmZ4EuQ, terminalsize_xv1ti3xUvO9cxOT8Iw8Silg)(void);
N_NIMCALL(void, hidecursor_tFIu39aFSR3N0M64Ynwugng)(FILE* f0);
N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ)(FILE* f0, NimStringDesc* s0);
N_NIMCALL(void, showcursor_tFIu39aFSR3N0M64Ynwugng_2)(FILE* f0);
N_NIMCALL(void, setcursorpos_UIoIgoUReHcDarvfaNRl3A)(FILE* f0, NI x0, NI y0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, setcursorxpos_xCTglc09c1SJqpnj2xD1oSQ)(FILE* f0, NI x0);
N_NIMCALL(void, cursorup_KTh8Z5dlyNBmCQ1i9aGXTzg)(FILE* f0, NI count0);
N_NIMCALL(void, cursordown_KTh8Z5dlyNBmCQ1i9aGXTzg_2)(FILE* f0, NI count0);
N_NIMCALL(void, cursorforward_KTh8Z5dlyNBmCQ1i9aGXTzg_3)(FILE* f0, NI count0);
N_NIMCALL(void, cursorbackward_KTh8Z5dlyNBmCQ1i9aGXTzg_4)(FILE* f0, NI count0);
N_NIMCALL(void, eraseline_tFIu39aFSR3N0M64Ynwugng_3)(FILE* f0);
N_NIMCALL(void, erasescreen_tFIu39aFSR3N0M64Ynwugng_4)(FILE* f0);
N_NIMCALL(void, resetattributes_tFIu39aFSR3N0M64Ynwugng_5)(FILE* f0);
N_NIMCALL(void, setstyle_zEKKPPIjKZs9bVYu4TwenLg)(FILE* f0, Style_NXKayqTLMsAibFwNceBlpA_Set style0);
N_NIMCALL(void, writestyled_jPzCz3P0CaIFIvdlX9aQd4w)(NimStringDesc* txt0, Style_NXKayqTLMsAibFwNceBlpA_Set style0);
N_NIMCALL(void, setforegroundcolor_Tw7yxMupneOmAicqiYt3NA)(FILE* f0, Foregroundcolor_ez9ah4IgQc0AbdW68acioDg fg0, NIM_BOOL bright0);
N_NIMCALL(void, setbackgroundcolor_6SjySiY3ji4zTKKPgtXoig)(FILE* f0, Backgroundcolor_7jPyx0xRLWzxER9cSeCOA9bA bg0, NIM_BOOL bright0);
N_NIMCALL(NIM_BOOL, isatty_POoHvosCWg3Yl5ieYeLHrg)(FILE* f0);
N_NIMCALL(int, getfilehandle_bZ9c2yojtXoDTUpfyl8h8Rg)(FILE* f0);
N_NIMCALL(NIM_CHAR, getch_PZUNldkwV2VhZMU6UCrZTA)(void);
N_NIMCALL(NIM_CHAR, readchar_ufPUIQ2Rg4xhWjWigciDOg)(FILE* f0);
N_NOCONV(void, resetattributes_1y1Orb5p0KBhRdFFLR9bNtg)(void);
extern NIM_THREADVAR TFrame* frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
NI gfg_g7w4T3anr20OMlWloNx2tQ;
NI gbg_dgmeknpHWrtwqMJGQAp9atA;
NIM_CONST TY_Bd4h7Ocx9bGTvrKzPIWNlHw T_CN3raB9atujkEiPpxYAdlgQ_4 = {((NI) 0),
((NI) 1),
((NI) 2)}
;
STRING_LITERAL(T_CN3raB9atujkEiPpxYAdlgQ_5, "COLUMNS", 7);
STRING_LITERAL(T_CN3raB9atujkEiPpxYAdlgQ_6, "LINES", 5);
STRING_LITERAL(T_CN3raB9atujkEiPpxYAdlgQ_7, "\033[?25l", 6);
STRING_LITERAL(T_CN3raB9atujkEiPpxYAdlgQ_8, "\033[?25h", 6);
STRING_LITERAL(T_CN3raB9atujkEiPpxYAdlgQ_9, "\033[", 2);
STRING_LITERAL(T_CN3raB9atujkEiPpxYAdlgQ_10, "\033[2K", 4);
STRING_LITERAL(T_CN3raB9atujkEiPpxYAdlgQ_11, "\033[2J", 4);
STRING_LITERAL(T_CN3raB9atujkEiPpxYAdlgQ_12, "\033[0m", 4);

static N_INLINE(void, nimFrame)(TFrame* s0) {
	NI LOC1;
	LOC1 = (NI)0;
	{
		if (!(frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s0).calldepth = ((NI16) (LOC1));
	(*s0).prev = frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw = s0;
	{
		if (!((*s0).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(void, setraw_bWuPmHcnrBG1QQlDC4s7ug)(int fd0, int time0) {
	struct termios mode0;
	int LOC1;
	int LOC2;
	nimfr("setRaw", "terminal.nim")
	memset((void*)(&mode0), 0, sizeof(mode0));
	nimln(176, "terminal.nim");
	LOC1 = (int)0;
	LOC1 = tcgetattr(fd0, (&mode0));
	nimln(177, "terminal.nim");
	mode0.c_iflag = (unsigned int)(mode0.c_iflag & (unsigned int)((NU32) ~((unsigned int)((unsigned int)((unsigned int)((unsigned int)(BRKINT | ICRNL) | INPCK) | ISTRIP) | IXON))));
	nimln(179, "terminal.nim");
	mode0.c_oflag = (unsigned int)(mode0.c_oflag & (unsigned int)((NU32) ~(OPOST)));
	nimln(180, "terminal.nim");
	mode0.c_cflag = (unsigned int)((unsigned int)(mode0.c_cflag & (unsigned int)((NU32) ~((unsigned int)(CSIZE | PARENB)))) | CS8);
	nimln(181, "terminal.nim");
	mode0.c_lflag = (unsigned int)(mode0.c_lflag & (unsigned int)((NU32) ~((unsigned int)((unsigned int)((unsigned int)(ECHO | ICANON) | IEXTEN) | ISIG))));
	nimln(182, "terminal.nim");
	if ((NU)(VMIN) > (NU)(31)) raiseIndexError();
	mode0.c_cc[(VMIN)- 0] = 1;
	nimln(183, "terminal.nim");
	if ((NU)(VTIME) > (NU)(31)) raiseIndexError();
	mode0.c_cc[(VTIME)- 0] = 0;
	nimln(184, "terminal.nim");
	LOC2 = (int)0;
	LOC2 = tcsetattr(fd0, time0, (&mode0));
	popFrame();
}

static N_INLINE(NI, chckRange)(NI i0, NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (a0 <= i0);
		if (!(LOC3)) goto LA4;
		LOC3 = (i0 <= b0);
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = i0;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i0)));
	}
	LA1: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NI, addInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU64)(a0) + (NU64)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ b0));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, terminalwidthioctl_u2BBS9b3k8WyoyVOocOs5YQ)(NI* fds0, NI fds0Len0) {
	NI result0;
	Ioctlwinsize_pb6i9aLcdojBXEMqdEzDkSA win0;
	nimfr("terminalWidthIoctl", "terminal.nim")
{	result0 = (NI)0;
	memset((void*)(&win0), 0, sizeof(win0));
	{
		NI fd_ulPWrzgTT5iiKEZtbkjydw;
		NI i_Zjo8Gt2mY6MjJCfa9aDrL4w;
		fd_ulPWrzgTT5iiKEZtbkjydw = (NI)0;
		nimln(1999, "system.nim");
		i_Zjo8Gt2mY6MjJCfa9aDrL4w = ((NI) 0);
		{
			nimln(2000, "system.nim");
			while (1) {
				NI T_CN3raB9atujkEiPpxYAdlgQ_2;
				nimln(1999, "system.nim");
				nimln(190, "terminal.nim");
				if (!(i_Zjo8Gt2mY6MjJCfa9aDrL4w < fds0Len0)) goto LA3;
				nimln(2001, "system.nim");
				if ((NU)(i_Zjo8Gt2mY6MjJCfa9aDrL4w) >= (NU)(fds0Len0)) raiseIndexError();
				fd_ulPWrzgTT5iiKEZtbkjydw = fds0[i_Zjo8Gt2mY6MjJCfa9aDrL4w];
				nimln(191, "terminal.nim");
				{
					NI LOC6;
					nimln(347, "system.nim");
					nimln(191, "terminal.nim");
					LOC6 = (NI)0;
					LOC6 = ioctl(((int)chckRange(fd_ulPWrzgTT5iiKEZtbkjydw, ((int) (-2147483647 -1)), ((int) 2147483647))), TIOCGWINSZ, (&win0));
					if (!!((LOC6 == ((NI) -1)))) goto LA7;
					nimln(192, "terminal.nim");
					result0 = ((NI) (win0.wscol));
					goto BeforeRet;
				}
				LA7: ;
				nimln(1999, "system.nim");
				T_CN3raB9atujkEiPpxYAdlgQ_2 = addInt(i_Zjo8Gt2mY6MjJCfa9aDrL4w, ((NI) 1));
				i_Zjo8Gt2mY6MjJCfa9aDrL4w = (NI)(T_CN3raB9atujkEiPpxYAdlgQ_2);
			} LA3: ;
		}
	}
	nimln(193, "terminal.nim");
	result0 = ((NI) 0);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result0;
}

N_NIMCALL(NI, terminalheightioctl_u2BBS9b3k8WyoyVOocOs5YQ_2)(NI* fds0, NI fds0Len0) {
	NI result0;
	Ioctlwinsize_pb6i9aLcdojBXEMqdEzDkSA win0;
	nimfr("terminalHeightIoctl", "terminal.nim")
{	result0 = (NI)0;
	memset((void*)(&win0), 0, sizeof(win0));
	{
		NI fd_gJWWR2Knucvphxch9cGdF9cg;
		NI i_IQqgrkC2jnutx1IENBFQrg;
		fd_gJWWR2Knucvphxch9cGdF9cg = (NI)0;
		nimln(1999, "system.nim");
		i_IQqgrkC2jnutx1IENBFQrg = ((NI) 0);
		{
			nimln(2000, "system.nim");
			while (1) {
				NI T_CN3raB9atujkEiPpxYAdlgQ_3;
				nimln(1999, "system.nim");
				nimln(199, "terminal.nim");
				if (!(i_IQqgrkC2jnutx1IENBFQrg < fds0Len0)) goto LA3;
				nimln(2001, "system.nim");
				if ((NU)(i_IQqgrkC2jnutx1IENBFQrg) >= (NU)(fds0Len0)) raiseIndexError();
				fd_gJWWR2Knucvphxch9cGdF9cg = fds0[i_IQqgrkC2jnutx1IENBFQrg];
				nimln(200, "terminal.nim");
				{
					NI LOC6;
					nimln(347, "system.nim");
					nimln(200, "terminal.nim");
					LOC6 = (NI)0;
					LOC6 = ioctl(((int)chckRange(fd_gJWWR2Knucvphxch9cGdF9cg, ((int) (-2147483647 -1)), ((int) 2147483647))), TIOCGWINSZ, (&win0));
					if (!!((LOC6 == ((NI) -1)))) goto LA7;
					nimln(201, "terminal.nim");
					result0 = ((NI) (win0.wsrow));
					goto BeforeRet;
				}
				LA7: ;
				nimln(1999, "system.nim");
				T_CN3raB9atujkEiPpxYAdlgQ_3 = addInt(i_IQqgrkC2jnutx1IENBFQrg, ((NI) 1));
				i_IQqgrkC2jnutx1IENBFQrg = (NI)(T_CN3raB9atujkEiPpxYAdlgQ_3);
			} LA3: ;
		}
	}
	nimln(202, "terminal.nim");
	result0 = ((NI) 0);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result0;
}

N_NIMCALL(NI, terminalwidth_Tjr5MOdj42hdx5sjNUiDXw)(void) {
	NI result0;
	NI w0;
	NimStringDesc* cterm0;
	int fd0;
	NCSTRING LOC5;
	int LOC11;
	NimStringDesc* s0;
	nimfr("terminalWidth", "terminal.nim")
{	result0 = (NI)0;
	nimln(210, "terminal.nim");
	w0 = terminalwidthioctl_u2BBS9b3k8WyoyVOocOs5YQ(T_CN3raB9atujkEiPpxYAdlgQ_4, 3);
	nimln(211, "terminal.nim");
	{
		if (!(((NI) 0) < w0)) goto LA3;
		result0 = w0;
		goto BeforeRet;
	}
	LA3: ;
	nimln(212, "terminal.nim");
	cterm0 = mnewString(((NI)chckRange(L_ctermid, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(213, "terminal.nim");
	LOC5 = (NCSTRING)0;
	LOC5 = ctermid(cterm0->data);
	fd0 = open(LOC5, O_RDONLY);
	nimln(214, "terminal.nim");
	{
		TY_GAcaPw08Gj9cXYhAaMMr9cfw LOC10;
		nimln(347, "system.nim");
		nimln(214, "terminal.nim");
		if (!!((fd0 == ((NI32) -1)))) goto LA8;
		nimln(215, "terminal.nim");
		LOC10[0] = ((NI) (fd0));
		w0 = terminalwidthioctl_u2BBS9b3k8WyoyVOocOs5YQ(LOC10, 1);
	}
	LA8: ;
	nimln(216, "terminal.nim");
	LOC11 = (int)0;
	LOC11 = close(fd0);
	nimln(217, "terminal.nim");
	{
		if (!(((NI) 0) < w0)) goto LA14;
		result0 = w0;
		goto BeforeRet;
	}
	LA14: ;
	nimln(218, "terminal.nim");
	s0 = getenv_8zNgT9bxx7m9cTt2TeVdTdIw(((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_5));
	nimln(219, "terminal.nim");
	{
		NIM_BOOL LOC18;
		NIM_BOOL LOC19;
		NI LOC21;
		LOC18 = (NIM_BOOL)0;
		LOC19 = (NIM_BOOL)0;
		LOC19 = (((NI) 0) < (s0 ? s0->Sup.len : 0));
		if (!(LOC19)) goto LA20;
		LOC21 = (NI)0;
		LOC21 = npuParseInt(s0, (&w0), ((NI) 0));
		LOC19 = (((NI) 0) < LOC21);
		LA20: ;
		LOC18 = LOC19;
		if (!(LOC18)) goto LA22;
		LOC18 = (((NI) 0) < w0);
		LA22: ;
		if (!LOC18) goto LA23;
		nimln(220, "terminal.nim");
		result0 = w0;
		goto BeforeRet;
	}
	LA23: ;
	nimln(221, "terminal.nim");
	result0 = ((NI) 80);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result0;
}

N_NIMCALL(NI, terminalheight_Tjr5MOdj42hdx5sjNUiDXw_2)(void) {
	NI result0;
	NI h0;
	NimStringDesc* cterm0;
	int fd0;
	NCSTRING LOC5;
	int LOC11;
	NimStringDesc* s0;
	nimfr("terminalHeight", "terminal.nim")
{	result0 = (NI)0;
	nimln(228, "terminal.nim");
	h0 = terminalheightioctl_u2BBS9b3k8WyoyVOocOs5YQ_2(T_CN3raB9atujkEiPpxYAdlgQ_4, 3);
	nimln(229, "terminal.nim");
	{
		if (!(((NI) 0) < h0)) goto LA3;
		result0 = h0;
		goto BeforeRet;
	}
	LA3: ;
	nimln(230, "terminal.nim");
	cterm0 = mnewString(((NI)chckRange(L_ctermid, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(231, "terminal.nim");
	LOC5 = (NCSTRING)0;
	LOC5 = ctermid(cterm0->data);
	fd0 = open(LOC5, O_RDONLY);
	nimln(232, "terminal.nim");
	{
		TY_GAcaPw08Gj9cXYhAaMMr9cfw LOC10;
		nimln(347, "system.nim");
		nimln(232, "terminal.nim");
		if (!!((fd0 == ((NI32) -1)))) goto LA8;
		nimln(233, "terminal.nim");
		LOC10[0] = ((NI) (fd0));
		h0 = terminalheightioctl_u2BBS9b3k8WyoyVOocOs5YQ_2(LOC10, 1);
	}
	LA8: ;
	nimln(234, "terminal.nim");
	LOC11 = (int)0;
	LOC11 = close(fd0);
	nimln(235, "terminal.nim");
	{
		if (!(((NI) 0) < h0)) goto LA14;
		result0 = h0;
		goto BeforeRet;
	}
	LA14: ;
	nimln(236, "terminal.nim");
	s0 = getenv_8zNgT9bxx7m9cTt2TeVdTdIw(((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_6));
	nimln(237, "terminal.nim");
	{
		NIM_BOOL LOC18;
		NIM_BOOL LOC19;
		NI LOC21;
		LOC18 = (NIM_BOOL)0;
		LOC19 = (NIM_BOOL)0;
		LOC19 = (((NI) 0) < (s0 ? s0->Sup.len : 0));
		if (!(LOC19)) goto LA20;
		LOC21 = (NI)0;
		LOC21 = npuParseInt(s0, (&h0), ((NI) 0));
		LOC19 = (((NI) 0) < LOC21);
		LA20: ;
		LOC18 = LOC19;
		if (!(LOC18)) goto LA22;
		LOC18 = (((NI) 0) < h0);
		LA22: ;
		if (!LOC18) goto LA23;
		nimln(238, "terminal.nim");
		result0 = h0;
		goto BeforeRet;
	}
	LA23: ;
	nimln(239, "terminal.nim");
	result0 = ((NI) 0);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result0;
}

N_NIMCALL(TY_1v9bKyksXWMsm0vNwmZ4EuQ, terminalsize_xv1ti3xUvO9cxOT8Iw8Silg)(void) {
	TY_1v9bKyksXWMsm0vNwmZ4EuQ result0;
	nimfr("terminalSize", "terminal.nim")
	memset((void*)(&result0), 0, sizeof(result0));
	nimln(244, "terminal.nim");
	result0.Field0 = terminalwidth_Tjr5MOdj42hdx5sjNUiDXw();
	result0.Field1 = terminalheight_Tjr5MOdj42hdx5sjNUiDXw_2();
	popFrame();
	return result0;
}

N_NIMCALL(void, hidecursor_tFIu39aFSR3N0M64Ynwugng)(FILE* f0) {
	nimfr("hideCursor", "terminal.nim")
	nimln(261, "terminal.nim");
	write_c4mGyJBvK73pdM22jiweKQ(f0, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_7));
	popFrame();
}

N_NIMCALL(void, showcursor_tFIu39aFSR3N0M64Ynwugng_2)(FILE* f0) {
	nimfr("showCursor", "terminal.nim")
	nimln(268, "terminal.nim");
	write_c4mGyJBvK73pdM22jiweKQ(f0, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_8));
	popFrame();
}

static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, setcursorpos_UIoIgoUReHcDarvfaNRl3A)(FILE* f0, NI x0, NI y0) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	nimfr("setCursorPos", "terminal.nim")
	nimln(277, "terminal.nim");
	LOC1 = (NimStringDesc*)0;
	LOC2 = (NimStringDesc*)0;
	LOC2 = nimIntToStr(y0);
	LOC3 = (NimStringDesc*)0;
	LOC3 = nimIntToStr(x0);
	LOC1 = rawNewString(LOC2->Sup.len + LOC3->Sup.len + 4);
appendString(LOC1, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC1, LOC2);
appendChar(LOC1, 59);
appendString(LOC1, LOC3);
appendChar(LOC1, 102);
	write_c4mGyJBvK73pdM22jiweKQ(f0, LOC1);
	popFrame();
}

N_NIMCALL(void, setcursorxpos_xCTglc09c1SJqpnj2xD1oSQ)(FILE* f0, NI x0) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	nimfr("setCursorXPos", "terminal.nim")
	nimln(292, "terminal.nim");
	LOC1 = (NimStringDesc*)0;
	LOC2 = (NimStringDesc*)0;
	LOC2 = nimIntToStr(x0);
	LOC1 = rawNewString(LOC2->Sup.len + 3);
appendString(LOC1, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC1, LOC2);
appendChar(LOC1, 71);
	write_c4mGyJBvK73pdM22jiweKQ(f0, LOC1);
	popFrame();
}

N_NIMCALL(void, cursorup_KTh8Z5dlyNBmCQ1i9aGXTzg)(FILE* f0, NI count0) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	nimfr("cursorUp", "terminal.nim")
	nimln(319, "terminal.nim");
	LOC1 = (NimStringDesc*)0;
	LOC2 = (NimStringDesc*)0;
	LOC2 = nimIntToStr(count0);
	LOC1 = rawNewString(LOC2->Sup.len + 3);
appendString(LOC1, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC1, LOC2);
appendChar(LOC1, 65);
	write_c4mGyJBvK73pdM22jiweKQ(f0, LOC1);
	popFrame();
}

N_NIMCALL(void, cursordown_KTh8Z5dlyNBmCQ1i9aGXTzg_2)(FILE* f0, NI count0) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	nimfr("cursorDown", "terminal.nim")
	nimln(329, "terminal.nim");
	LOC1 = (NimStringDesc*)0;
	LOC2 = (NimStringDesc*)0;
	LOC2 = nimIntToStr(count0);
	LOC1 = rawNewString(LOC2->Sup.len + 3);
appendString(LOC1, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC1, LOC2);
appendChar(LOC1, 66);
	write_c4mGyJBvK73pdM22jiweKQ(f0, LOC1);
	popFrame();
}

N_NIMCALL(void, cursorforward_KTh8Z5dlyNBmCQ1i9aGXTzg_3)(FILE* f0, NI count0) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	nimfr("cursorForward", "terminal.nim")
	nimln(339, "terminal.nim");
	LOC1 = (NimStringDesc*)0;
	LOC2 = (NimStringDesc*)0;
	LOC2 = nimIntToStr(count0);
	LOC1 = rawNewString(LOC2->Sup.len + 3);
appendString(LOC1, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC1, LOC2);
appendChar(LOC1, 67);
	write_c4mGyJBvK73pdM22jiweKQ(f0, LOC1);
	popFrame();
}

N_NIMCALL(void, cursorbackward_KTh8Z5dlyNBmCQ1i9aGXTzg_4)(FILE* f0, NI count0) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	nimfr("cursorBackward", "terminal.nim")
	nimln(349, "terminal.nim");
	LOC1 = (NimStringDesc*)0;
	LOC2 = (NimStringDesc*)0;
	LOC2 = nimIntToStr(count0);
	LOC1 = rawNewString(LOC2->Sup.len + 3);
appendString(LOC1, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC1, LOC2);
appendChar(LOC1, 68);
	write_c4mGyJBvK73pdM22jiweKQ(f0, LOC1);
	popFrame();
}

N_NIMCALL(void, eraseline_tFIu39aFSR3N0M64Ynwugng_3)(FILE* f0) {
	nimfr("eraseLine", "terminal.nim")
	nimln(403, "terminal.nim");
	write_c4mGyJBvK73pdM22jiweKQ(f0, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_10));
	nimln(404, "terminal.nim");
	setcursorxpos_xCTglc09c1SJqpnj2xD1oSQ(f0, ((NI) 0));
	popFrame();
}

N_NIMCALL(void, erasescreen_tFIu39aFSR3N0M64Ynwugng_4)(FILE* f0) {
	nimfr("eraseScreen", "terminal.nim")
	nimln(426, "terminal.nim");
	write_c4mGyJBvK73pdM22jiweKQ(f0, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_11));
	popFrame();
}

N_NIMCALL(void, resetattributes_tFIu39aFSR3N0M64Ynwugng_5)(FILE* f0) {
	nimfr("resetAttributes", "terminal.nim")
	nimln(436, "terminal.nim");
	write_c4mGyJBvK73pdM22jiweKQ(f0, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_12));
	popFrame();
}

N_NIMCALL(void, setstyle_zEKKPPIjKZs9bVYu4TwenLg)(FILE* f0, Style_NXKayqTLMsAibFwNceBlpA_Set style0) {
	nimfr("setStyle", "terminal.nim")
	{
		Style_NXKayqTLMsAibFwNceBlpA s_FZtpHAjVRzoXQLsd0ruPvQ;
		NI i_BlOmMRII9bmWVWIFwYK5XdQ;
		s_FZtpHAjVRzoXQLsd0ruPvQ = (Style_NXKayqTLMsAibFwNceBlpA)0;
		nimln(2033, "system.nim");
		i_BlOmMRII9bmWVWIFwYK5XdQ = ((NI) 1);
		{
			nimln(2034, "system.nim");
			while (1) {
				NI T_CN3raB9atujkEiPpxYAdlgQ_13;
				nimln(2033, "system.nim");
				if (!(i_BlOmMRII9bmWVWIFwYK5XdQ <= ((NI) 8))) goto LA3;
				nimln(2035, "system.nim");
				{
					NimStringDesc* LOC8;
					NimStringDesc* LOC9;
					nimln(468, "terminal.nim");
					if (!((style0 &(1U<<((NU)((((Style_NXKayqTLMsAibFwNceBlpA)chckRange(i_BlOmMRII9bmWVWIFwYK5XdQ, ((Style_NXKayqTLMsAibFwNceBlpA) 1), ((Style_NXKayqTLMsAibFwNceBlpA) 8)))- 1))&7U)))!=0)) goto LA6;
					nimln(2035, "system.nim");
					s_FZtpHAjVRzoXQLsd0ruPvQ = ((Style_NXKayqTLMsAibFwNceBlpA)chckRange(i_BlOmMRII9bmWVWIFwYK5XdQ, ((Style_NXKayqTLMsAibFwNceBlpA) 1), ((Style_NXKayqTLMsAibFwNceBlpA) 8)));
					nimln(469, "terminal.nim");
					LOC8 = (NimStringDesc*)0;
					LOC9 = (NimStringDesc*)0;
					LOC9 = nimIntToStr(((NI) (s_FZtpHAjVRzoXQLsd0ruPvQ)));
					LOC8 = rawNewString(LOC9->Sup.len + 3);
appendString(LOC8, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC8, LOC9);
appendChar(LOC8, 109);
					write_c4mGyJBvK73pdM22jiweKQ(f0, LOC8);
				}
				LA6: ;
				nimln(2033, "system.nim");
				T_CN3raB9atujkEiPpxYAdlgQ_13 = addInt(i_BlOmMRII9bmWVWIFwYK5XdQ, ((NI) 1));
				i_BlOmMRII9bmWVWIFwYK5XdQ = (NI)(T_CN3raB9atujkEiPpxYAdlgQ_13);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, writestyled_jPzCz3P0CaIFIvdlX9aQd4w)(NimStringDesc* txt0, Style_NXKayqTLMsAibFwNceBlpA_Set style0) {
	nimfr("writeStyled", "terminal.nim")
	nimln(479, "terminal.nim");
	setstyle_zEKKPPIjKZs9bVYu4TwenLg(stdout, style0);
	nimln(480, "terminal.nim");
	write_c4mGyJBvK73pdM22jiweKQ(stdout, txt0);
	nimln(481, "terminal.nim");
	resetattributes_tFIu39aFSR3N0M64Ynwugng_5(stdout);
	nimln(482, "terminal.nim");
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		nimln(347, "system.nim");
		nimln(482, "terminal.nim");
		if (!!((gfg_g7w4T3anr20OMlWloNx2tQ == ((NI) 0)))) goto LA3;
		nimln(483, "terminal.nim");
		LOC5 = (NimStringDesc*)0;
		LOC6 = (NimStringDesc*)0;
		LOC6 = nimIntToStr(((NI) (gfg_g7w4T3anr20OMlWloNx2tQ)));
		LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC5, LOC6);
appendChar(LOC5, 109);
		write_c4mGyJBvK73pdM22jiweKQ(stdout, LOC5);
	}
	LA3: ;
	nimln(484, "terminal.nim");
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		nimln(347, "system.nim");
		nimln(484, "terminal.nim");
		if (!!((gbg_dgmeknpHWrtwqMJGQAp9atA == ((NI) 0)))) goto LA9;
		nimln(485, "terminal.nim");
		LOC11 = (NimStringDesc*)0;
		LOC12 = (NimStringDesc*)0;
		LOC12 = nimIntToStr(((NI) (gbg_dgmeknpHWrtwqMJGQAp9atA)));
		LOC11 = rawNewString(LOC12->Sup.len + 3);
appendString(LOC11, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC11, LOC12);
appendChar(LOC11, 109);
		write_c4mGyJBvK73pdM22jiweKQ(stdout, LOC11);
	}
	LA9: ;
	popFrame();
}

N_NIMCALL(void, setforegroundcolor_Tw7yxMupneOmAicqiYt3NA)(FILE* f0, Foregroundcolor_ez9ah4IgQc0AbdW68acioDg fg0, NIM_BOOL bright0) {
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	nimfr("setForegroundColor", "terminal.nim")
	nimln(529, "terminal.nim");
	gfg_g7w4T3anr20OMlWloNx2tQ = ((NI) (fg0));
	nimln(530, "terminal.nim");
	{
		NI T_CN3raB9atujkEiPpxYAdlgQ_14;
		if (!bright0) goto LA3;
		T_CN3raB9atujkEiPpxYAdlgQ_14 = addInt(gfg_g7w4T3anr20OMlWloNx2tQ, ((NI) 60));
		gfg_g7w4T3anr20OMlWloNx2tQ = (NI)(T_CN3raB9atujkEiPpxYAdlgQ_14);
	}
	LA3: ;
	nimln(531, "terminal.nim");
	LOC5 = (NimStringDesc*)0;
	LOC6 = (NimStringDesc*)0;
	LOC6 = nimIntToStr(gfg_g7w4T3anr20OMlWloNx2tQ);
	LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC5, LOC6);
appendChar(LOC5, 109);
	write_c4mGyJBvK73pdM22jiweKQ(f0, LOC5);
	popFrame();
}

N_NIMCALL(void, setbackgroundcolor_6SjySiY3ji4zTKKPgtXoig)(FILE* f0, Backgroundcolor_7jPyx0xRLWzxER9cSeCOA9bA bg0, NIM_BOOL bright0) {
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	nimfr("setBackgroundColor", "terminal.nim")
	nimln(551, "terminal.nim");
	gbg_dgmeknpHWrtwqMJGQAp9atA = ((NI) (bg0));
	nimln(552, "terminal.nim");
	{
		NI T_CN3raB9atujkEiPpxYAdlgQ_15;
		if (!bright0) goto LA3;
		T_CN3raB9atujkEiPpxYAdlgQ_15 = addInt(gbg_dgmeknpHWrtwqMJGQAp9atA, ((NI) 60));
		gbg_dgmeknpHWrtwqMJGQAp9atA = (NI)(T_CN3raB9atujkEiPpxYAdlgQ_15);
	}
	LA3: ;
	nimln(553, "terminal.nim");
	LOC5 = (NimStringDesc*)0;
	LOC6 = (NimStringDesc*)0;
	LOC6 = nimIntToStr(gbg_dgmeknpHWrtwqMJGQAp9atA);
	LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_9));
appendString(LOC5, LOC6);
appendChar(LOC5, 109);
	write_c4mGyJBvK73pdM22jiweKQ(f0, LOC5);
	popFrame();
}

N_NIMCALL(NIM_BOOL, isatty_POoHvosCWg3Yl5ieYeLHrg)(FILE* f0) {
	NIM_BOOL result0;
	int LOC1;
	int LOC2;
	nimfr("isatty", "terminal.nim")
	result0 = (NIM_BOOL)0;
	nimln(564, "terminal.nim");
	nimln(347, "system.nim");
	nimln(564, "terminal.nim");
	LOC1 = (int)0;
	LOC1 = getfilehandle_bZ9c2yojtXoDTUpfyl8h8Rg(f0);
	LOC2 = (int)0;
	LOC2 = isatty(LOC1);
	result0 = !((LOC2 == ((NI32) 0)));
	popFrame();
	return result0;
}

N_NIMCALL(NIM_CHAR, getch_PZUNldkwV2VhZMU6UCrZTA)(void) {
	NIM_CHAR result0;
	int fd0;
	struct termios oldmode0;
	int LOC1;
	int LOC2;
	nimfr("getch", "terminal.nim")
	result0 = (NIM_CHAR)0;
	nimln(642, "terminal.nim");
	fd0 = getfilehandle_bZ9c2yojtXoDTUpfyl8h8Rg(stdin);
	memset((void*)(&oldmode0), 0, sizeof(oldmode0));
	nimln(644, "terminal.nim");
	LOC1 = (int)0;
	LOC1 = tcgetattr(fd0, (&oldmode0));
	nimln(645, "terminal.nim");
	setraw_bWuPmHcnrBG1QQlDC4s7ug(fd0, TCSAFLUSH);
	nimln(646, "terminal.nim");
	result0 = readchar_ufPUIQ2Rg4xhWjWigciDOg(stdin);
	nimln(647, "terminal.nim");
	LOC2 = (int)0;
	LOC2 = tcsetattr(fd0, TCSADRAIN, (&oldmode0));
	popFrame();
	return result0;
}

N_NOCONV(void, resetattributes_1y1Orb5p0KBhRdFFLR9bNtg)(void) {
	nimfr("resetAttributes", "terminal.nim")
	nimln(672, "terminal.nim");
	resetattributes_tFIu39aFSR3N0M64Ynwugng_5(stdout);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_terminalInit000)(void) {
	nimfr("terminal", "terminal.nim")
	nimln(453, "terminal.nim");
	gfg_g7w4T3anr20OMlWloNx2tQ = ((NI) 0);
	nimln(454, "terminal.nim");
	gbg_dgmeknpHWrtwqMJGQAp9atA = ((NI) 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_terminalDatInit000)(void) {
}
